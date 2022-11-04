
/* qcamera::QCameraFlash::~QCameraFlash() */

QCameraFlash * __thiscall qcamera::QCameraFlash::_QCameraFlash(QCameraFlash *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_00037494 + 0x37462) + 8;
  iVar1 = 2;
  do {
    if (-1 < *(int *)(this + iVar1 * 4)) {
      setFlashMode(this,iVar1 + -2,false);
      close(*(int *)(this + iVar1 * 4));
      *(undefined4 *)(this + iVar1 * 4) = 0xffffffff;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 7);
  return this;
}

