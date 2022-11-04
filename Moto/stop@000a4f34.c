
/* qcamera::QCamera3ReprocessChannel::stop() */

undefined4 __thiscall qcamera::QCamera3ReprocessChannel::stop(QCamera3ReprocessChannel *this)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_000a4fbc + 0xa4f3e);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000a4fc0 + 0xa4f4a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a4fc4 + 0xa4f58) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a4fc8 + 0xa4fa8);
    }
  }
  QCamera3Channel::stop((QCamera3Channel *)this);
  uVar1 = (**(code **)(*(int *)(this + 0x4c) + 0x68))
                    (*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x54));
  unmapOfflineBuffers(this,true);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000a4fcc + 0xa4f84) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a4fd0 + 0xa4f92) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return uVar1;
    }
  }
  return uVar1;
}

