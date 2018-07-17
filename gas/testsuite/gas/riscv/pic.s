  .option pic
  .text
  .global la
la:
  la zero,apple
  la sp,banana+123
  la s11,.text
  la ra,.text+500
