
/* qcamera::QCamera3ReprocessChannel::start() */

int __thiscall qcamera::QCamera3ReprocessChannel::start(QCamera3ReprocessChannel *this)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_000a4f10 + 0xa4e68);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000a4f14 + 0xa4e74) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a4f18 + 0xa4e82) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a4f1c + 0xa4efe);
    }
  }
  iVar1 = QCamera3Channel::start((QCamera3Channel *)this);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(this + 0x4c) + 100))
                      (*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x54));
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      if (*(int *)(*(int *)(DAT_000a4f20 + 0xa4ea6) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a4f28 + 0xa4ec0,0x12ae,DAT_000a4f24 + 0xa4eb6,iVar1);
      }
      QCamera3Channel::stop((QCamera3Channel *)this);
    }
  }
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000a4f2c + 0xa4ed8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a4f30 + 0xa4ee6) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return iVar1;
}

