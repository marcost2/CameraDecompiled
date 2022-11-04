
/* qcamera::QCameraCbNotifier::stopSnapshots() */

void __thiscall qcamera::QCameraCbNotifier::stopSnapshots(QCameraCbNotifier *this)

{
  QCameraCmdThread::sendCmd
            ((QCameraCmdThread *)(this + 0x44),2,'\0',**(int **)(DAT_000ddc8c + 0xddc74) == 0);
  return;
}

