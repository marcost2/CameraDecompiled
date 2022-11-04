
void _INIT_0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *__dest;
  undefined4 uVar4;
  
  __dest = *(void **)(DAT_0007e0a4 + 0x7e05c);
  __aeabi_memcpy8(__dest,(void *)(DAT_0007e0a8 + 0x7e05e),0x80);
  *(undefined8 *)((int)__dest + 0x98) = 0;
  *(undefined8 *)((int)__dest + 0xa0) = 0;
  uVar1 = *(undefined4 *)(DAT_0007e0ac + 0x7e080);
  uVar2 = *(undefined4 *)(DAT_0007e0b0 + 0x7e082);
  uVar3 = *(undefined4 *)(DAT_0007e0b4 + 0x7e084);
  uVar4 = *(undefined4 *)(DAT_0007e0b8 + 0x7e086);
  *(undefined4 *)((int)__dest + 0x80) = *(undefined4 *)(DAT_0007e0bc + 0x7e088);
  *(undefined4 *)((int)__dest + 0x84) = uVar4;
  *(undefined4 *)((int)__dest + 0x88) = uVar3;
  *(undefined4 *)((int)__dest + 0x8c) = uVar2;
  *(undefined4 *)((int)__dest + 0x90) = 0;
  *(undefined4 *)((int)__dest + 0x94) = uVar1;
  *(undefined4 *)((int)__dest + 0xa8) = 0;
  *(undefined4 *)((int)__dest + 0xac) = 0;
  return;
}

