
/* qcamera::QCameraFlash::getInstance() */

int qcamera::QCameraFlash::getInstance(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (((*(byte *)(DAT_0007c448 + 0x7c3f0) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(DAT_0007c44c + 0x7c402), iVar1 = DAT_0007c450, iVar2 != 0)) {
    piVar3 = (int *)(DAT_0007c450 + 0x7c414);
    *(undefined2 *)(DAT_0007c450 + 0x7c438) = 0;
    *(undefined4 *)(iVar1 + 0x7c434) = 0;
    *piVar3 = *(int *)(DAT_0007c454 + 0x7c41c) + 8;
    *(undefined4 *)(iVar1 + 0x7c418) = 0;
    *(undefined4 *)(iVar1 + 0x7c41c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7c420) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7c424) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7c428) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7c42c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x7c430) = 0;
    __cxa_atexit(*(undefined4 *)(DAT_0007c458 + 0x7c436),piVar3,DAT_0007c45c + 0x7c438);
    __cxa_guard_release(DAT_0007c460 + 0x7c442);
  }
  return DAT_0007c464 + 0x7c3fc;
}

