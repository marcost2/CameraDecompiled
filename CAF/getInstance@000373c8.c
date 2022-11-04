
/* qcamera::QCameraFlash::getInstance() */

int qcamera::QCameraFlash::getInstance(void)

{
  int iVar1;
  
  if (((*(byte *)(DAT_0003740c + 0x373d0) & 1) == 0) && (iVar1 = __cxa_guard_acquire(), iVar1 != 0))
  {
    QCameraFlash((QCameraFlash *)(DAT_00037414 + 0x373ee));
    __cxa_atexit();
    __cxa_guard_release();
  }
  return DAT_00037424 + 0x373dc;
}

