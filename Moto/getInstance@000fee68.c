
/* qcamera::QCameraThermalAdapter::getInstance() */

int qcamera::QCameraThermalAdapter::getInstance(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (((*(byte *)(DAT_000feea8 + 0xfee70) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(DAT_000feeac + 0xfee82), iVar1 = DAT_000feeb0, iVar2 != 0)) {
    puVar3 = (undefined8 *)(DAT_000feeb0 + 0xfee96);
    *(undefined4 *)(&UNK_000feea6 + DAT_000feeb0) = 0;
    *puVar3 = 0;
    *(undefined8 *)(iVar1 + 0xfee9e) = 0;
    *(undefined4 *)((int)&DAT_000feea8 + iVar1 + 2) = 0;
    __cxa_guard_release(DAT_000feeb4 + 0xfeea2);
  }
  return DAT_000feeb8 + 0xfee7c;
}

