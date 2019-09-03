/* TUI data manipulation routines.

   Copyright (C) 1998-2019 Free Software Foundation, Inc.

   Contributed by Hewlett-Packard Company.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include "defs.h"
#include "symtab.h"
#include "tui/tui.h"
#include "tui/tui-data.h"
#include "tui/tui-wingeneral.h"
#include "tui/tui-winsource.h"
#include "gdb_curses.h"

/****************************
** GLOBAL DECLARATIONS
****************************/
struct tui_win_info *tui_win_list[MAX_MAJOR_WINDOWS];

/***************************
** Private data
****************************/
static int term_height, term_width;
static struct tui_win_info *win_with_focus = NULL;

static int win_resized = FALSE;


/*********************************
** PUBLIC FUNCTIONS
**********************************/

int
tui_win_is_auxiliary (enum tui_win_type win_type)
{
  return (win_type > MAX_MAJOR_WINDOWS);
}

/******************************************
** ACCESSORS & MUTATORS FOR PRIVATE DATA
******************************************/

/* Answer a whether the terminal window has been resized or not.  */
int
tui_win_resized (void)
{
  return win_resized;
}


/* Set a whether the terminal window has been resized or not.  */
void
tui_set_win_resized_to (int resized)
{
  win_resized = resized;
}


/* Answer the window with the logical focus.  */
struct tui_win_info *
tui_win_with_focus (void)
{
  return win_with_focus;
}


/* Set the window that has the logical focus.  */
void
tui_set_win_with_focus (struct tui_win_info *win_info)
{
  win_with_focus = win_info;
}


/* Clear the pertinent detail in the source windows.  */
void
tui_clear_source_windows_detail ()
{
  for (tui_source_window_base *win : tui_source_windows ())
    win->clear_detail ();
}


/* Accessor for the term_height.  */
int
tui_term_height (void)
{
  return term_height;
}


/* Mutator for the term height.  */
void
tui_set_term_height_to (int h)
{
  term_height = h;
}


/* Accessor for the term_width.  */
int
tui_term_width (void)
{
  return term_width;
}


/* Mutator for the term_width.  */
void
tui_set_term_width_to (int w)
{
  term_width = w;
}


/*****************************
** OTHER PUBLIC FUNCTIONS
*****************************/


/* Answer the next window in the list, cycling back to the top if
   necessary.  */
struct tui_win_info *
tui_next_win (struct tui_win_info *cur_win)
{
  int type = cur_win->type;
  struct tui_win_info *next_win = NULL;

  if (cur_win->type == CMD_WIN)
    type = SRC_WIN;
  else
    type = cur_win->type + 1;
  while (type != cur_win->type && (next_win == NULL))
    {
      if (tui_win_list[type]
	  && tui_win_list[type]->is_visible ())
	next_win = tui_win_list[type];
      else
	{
	  if (type == CMD_WIN)
	    type = SRC_WIN;
	  else
	    type++;
	}
    }

  return next_win;
}


/* Answer the prev window in the list, cycling back to the bottom if
   necessary.  */
struct tui_win_info *
tui_prev_win (struct tui_win_info *cur_win)
{
  int type = cur_win->type;
  struct tui_win_info *prev = NULL;

  if (cur_win->type == SRC_WIN)
    type = CMD_WIN;
  else
    type = cur_win->type - 1;
  while (type != cur_win->type && (prev == NULL))
    {
      if (tui_win_list[type]
	  && tui_win_list[type]->is_visible ())
	prev = tui_win_list[type];
      else
	{
	  if (type == SRC_WIN)
	    type = CMD_WIN;
	  else
	    type--;
	}
    }

  return prev;
}


/* Answer the window represented by name.  */
struct tui_win_info *
tui_partial_win_by_name (const char *name)
{
  if (name != NULL)
    {
      for (tui_win_info *item : all_tui_windows ())
	{
	  const char *cur_name = item->name ();

	  if (strlen (name) <= strlen (cur_name)
	      && startswith (cur_name, name))
	    return item;
	}
    }

  return NULL;
}

/* See tui-data.h.  */

void
tui_delete_invisible_windows ()
{
  for (int win_type = SRC_WIN; (win_type < MAX_MAJOR_WINDOWS); win_type++)
    {
      if (tui_win_list[win_type] != NULL
	  && !tui_win_list[win_type]->is_visible ())
	{
	  /* This should always be made visible before a call to this
	     function.  */
	  gdb_assert (win_type != CMD_WIN);

	  if (win_with_focus == tui_win_list[win_type])
	    win_with_focus = nullptr;

	  delete tui_win_list[win_type];
	  tui_win_list[win_type] = NULL;
	}
    }
}

tui_win_info::tui_win_info (enum tui_win_type type)
  : tui_gen_win_info (type)
{
}

tui_gen_win_info::~tui_gen_win_info ()
{
  tui_delete_win (handle);
}

void
tui_win_info::rerender ()
{
  check_and_display_highlight_if_needed ();
}
