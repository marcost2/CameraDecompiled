
/* qcamera::QCamera3ProcessingChannel::startPostProc(qcamera::reprocess_config_t const&) */

void __thiscall
qcamera::QCamera3ProcessingChannel::startPostProc
          (QCamera3ProcessingChannel *this,reprocess_config_t *param_1)

{
  if (this[0x14f1] != (QCamera3ProcessingChannel)0x0) {
    return;
  }
  QCamera3PostProcessor::start((QCamera3PostProcessor *)(this + 0x94),param_1);
  this[0x14f1] = (QCamera3ProcessingChannel)0x1;
  return;
}

