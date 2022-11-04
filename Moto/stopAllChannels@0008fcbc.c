
/* qcamera::QCamera3HardwareInterface::stopAllChannels() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::stopAllChannels(QCamera3HardwareInterface *this)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  
  iVar2 = *(int *)(DAT_0008fd5c + 0x8fcc8);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008fd64 + 0x8fce0,0x33e4,DAT_0008fd60 + 0x8fcd8);
  }
  ppiVar3 = (int **)(*(int ***)(this + 0x3fc))[2];
  if (ppiVar3 != *(int ***)(this + 0x3fc)) {
    do {
      piVar1 = *ppiVar3;
      if (*(int **)(*piVar1 + 0x18) != (int *)0x0) {
        (**(code **)(**(int **)(*piVar1 + 0x18) + 0x10))();
        piVar1 = *ppiVar3;
      }
      piVar1[4] = 0;
      ppiVar3 = (int **)ppiVar3[2];
    } while (ppiVar3 != *(int ***)(this + 0x3fc));
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 0x10))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 0x10))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 0x10))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 0x10))();
  }
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008fd6c + 0x8fd52,0x33fd,DAT_0008fd68 + 0x8fd4a);
  }
  return 0;
}

