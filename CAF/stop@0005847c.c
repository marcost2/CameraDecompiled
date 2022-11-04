
/* qcamera::QCamera3ProcessingChannel::stop() */

undefined4 __thiscall qcamera::QCamera3ProcessingChannel::stop(QCamera3ProcessingChannel *this)

{
  if (this[0x50] == (QCamera3ProcessingChannel)0x0) {
    if (*(int *)(*(int *)(DAT_000584c8 + 0x584a6) + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    QCamera3PostProcessor::stop((QCamera3PostProcessor *)(this + 0x90));
    this[0x1249] = (QCamera3ProcessingChannel)0x0;
    QCamera3Channel::stop((QCamera3Channel *)this);
  }
  return 0;
}

