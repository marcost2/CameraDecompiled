
/* qcamera::QCamera3Channel::start() */

undefined4 __thiscall qcamera::QCamera3Channel::start(QCamera3Channel *this)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = *(uint **)(DAT_0009d464 + 0x9d388);
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_0009d468 + 0x9d394) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009d46c + 0x9d3a2) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0009d470 + 0x9d454);
    }
  }
  if (*(uint *)(this + 0x44) < 2) {
    if (*(uint *)(this + 0x44) == 0) {
      uVar2 = 0xffffffed;
      goto LAB_0009d41c;
    }
  }
  else if (*(int *)(*(int *)(DAT_0009d474 + 0x9d3b4) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_0009d47c + 0x9d3ca,0xe2,DAT_0009d478 + 0x9d3c2);
  }
  if (this[0x50] == (QCamera3Channel)0x0) {
    uVar1 = *(uint *)(this + 0x44);
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        if (*(int **)(this + uVar4 * 4 + 0x24) != (int *)0x0) {
          (**(code **)(**(int **)(this + uVar4 * 4 + 0x24) + 0x1c))();
          uVar1 = *(uint *)(this + 0x44);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    this[0x50] = (QCamera3Channel)0x1;
  }
  else if (*(int *)(*(int *)(DAT_0009d480 + 0x9d3dc) + 0x24) != 0) {
    mm_camera_debug_log(1,2,DAT_0009d488 + 0x9d3f2,0xe8,DAT_0009d484 + 0x9d3ea);
  }
  uVar2 = 0;
LAB_0009d41c:
  if (1 < *puVar3) {
    if ((**(byte **)(DAT_0009d48c + 0x9d428) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009d490 + 0x9d436) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return uVar2;
}

