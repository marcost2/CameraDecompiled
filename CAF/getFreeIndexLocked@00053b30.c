
/* qcamera::QCamera3GrallocMemory::getFreeIndexLocked() */

uint __thiscall qcamera::QCamera3GrallocMemory::getFreeIndexLocked(QCamera3GrallocMemory *this)

{
  uint uVar1;
  int *piVar2;
  
  if (*(uint *)(this + 4) < 0x3f) {
    uVar1 = *(uint *)(this + 0x80c);
    if (uVar1 < 0x40) {
      piVar2 = (int *)(this + uVar1 * 0x10);
      do {
        piVar2 = piVar2 + 4;
        if (*piVar2 == 0) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x40);
    }
  }
  else if (*(int *)(*(int *)(DAT_00053b8c + 0x53b3e) + 0x20) != 0) {
    mm_camera_debug_log();
    return 0xffffffff;
  }
  return 0xffffffff;
}

