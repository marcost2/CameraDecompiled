
/* qcamera::QCamera3PostProcessor::releaseOfflineBuffers(bool) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::releaseOfflineBuffers(QCamera3PostProcessor *this,bool param_1)

{
  undefined4 uVar1;
  
  if (*(QCamera3ReprocessChannel **)(this + 0x1f0) != (QCamera3ReprocessChannel *)0x0) {
    uVar1 = QCamera3ReprocessChannel::
            __ThumbV7PILongThunk__ZN7qcamera24QCamera3ReprocessChannel19unmapOfflineBuffersEb
                      (*(QCamera3ReprocessChannel **)(this + 0x1f0),param_1);
    return uVar1;
  }
  return 0;
}

