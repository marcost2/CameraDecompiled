
/* BSTBokehParam::createInstance() */

int BSTBokehParam::createInstance(void)

{
  int iVar1;
  int iVar2;
  
  if (((*(byte *)(DAT_001007cc + 0x100784) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(DAT_001007d0 + 0x100796), iVar1 = DAT_001007d4, iVar2 != 0)) {
    *(int *)(DAT_001007d4 + 0x1007b0) = *(int *)(DAT_001007d8 + 0x1007ae) + 8;
    *(undefined4 *)(iVar1 + 0x1007b4) = 0;
    *(undefined4 *)(iVar1 + 0x1007b8) = 0x3fa66666;
    __aeabi_memclr8((void *)(iVar1 + 0x1007bc),0x120);
    __cxa_guard_release(DAT_001007dc + 0x1007c8);
  }
  return DAT_001007e0 + 0x100790;
}

