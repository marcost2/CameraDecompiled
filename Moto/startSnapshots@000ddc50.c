
/* qcamera::QCameraCbNotifier::startSnapshots() */

void __thiscall qcamera::QCameraCbNotifier::startSnapshots(QCameraCbNotifier *this)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(**(undefined4 **)(DAT_000ddc68 + 0xddc5a));
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x44),1,'\0',(uchar)(uVar1 >> 5));
  return;
}

