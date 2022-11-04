
/* qcamera::QCamera3ProcessingChannel::stop() */

undefined4 __thiscall qcamera::QCamera3ProcessingChannel::stop(QCamera3ProcessingChannel *this)

{
  if (this[0x50] == (QCamera3ProcessingChannel)0x0) {
    if (*(int *)(*(int *)(DAT_0009f7dc + 0x9f7ba) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009f7e4 + 0x9f7d2,0x615,DAT_0009f7e0 + 0x9f7ca);
    }
  }
  else {
    QCamera3PostProcessor::stop((QCamera3PostProcessor *)(this + 0x94));
    this[0x14f1] = (QCamera3ProcessingChannel)0x0;
    QCamera3Channel::stop((QCamera3Channel *)this);
  }
  return 0;
}

