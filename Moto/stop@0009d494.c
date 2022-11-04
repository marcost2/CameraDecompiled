
/* qcamera::QCamera3Channel::stop() */

undefined4 __thiscall qcamera::QCamera3Channel::stop(QCamera3Channel *this)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = *(uint **)(DAT_0009d550 + 0x9d4a0);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_0009d554 + 0x9d4ac) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009d558 + 0x9d4ba) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0009d55c + 0x9d53e);
    }
  }
  if (this[0x50] == (QCamera3Channel)0x0) {
    if (*(int *)(*(int *)(DAT_0009d560 + 0x9d4f2) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009d568 + 0x9d50a,0x107,DAT_0009d564 + 0x9d502);
    }
  }
  else {
    uVar1 = *(uint *)(this + 0x44);
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        if (*(int **)(this + uVar3 * 4 + 0x24) != (int *)0x0) {
          (**(code **)(**(int **)(this + uVar3 * 4 + 0x24) + 0x20))();
          uVar1 = *(uint *)(this + 0x44);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    this[0x50] = (QCamera3Channel)0x0;
  }
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_0009d56c + 0x9d518) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009d570 + 0x9d526) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return 0;
}

