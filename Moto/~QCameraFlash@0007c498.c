
/* qcamera::QCameraFlash::~QCameraFlash() */

QCameraFlash * __thiscall qcamera::QCameraFlash::_QCameraFlash(QCameraFlash *this)

{
  *(int *)this = *(int *)(DAT_0007c538 + 0x7c4a2) + 8;
  if (-1 < *(int *)(this + 8)) {
    setFlashMode(this,0,false);
    close(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0xffffffff;
  }
  if (-1 < *(int *)(this + 0xc)) {
    setFlashMode(this,1,false);
    close(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0xffffffff;
  }
  if (-1 < *(int *)(this + 0x10)) {
    setFlashMode(this,2,false);
    close(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0xffffffff;
  }
  if (-1 < *(int *)(this + 0x14)) {
    setFlashMode(this,3,false);
    close(*(int *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0xffffffff;
  }
  if (-1 < *(int *)(this + 0x18)) {
    setFlashMode(this,4,false);
    close(*(int *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0xffffffff;
  }
  return this;
}

