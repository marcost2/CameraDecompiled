
/* qcamera::QCamera3Channel::bufDone(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3Channel::bufDone(QCamera3Channel *this,mm_camera_super_buf_t *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 8);
  if (uVar6 == 0) {
    return 0;
  }
  uVar5 = 0;
  uVar1 = 0;
  do {
    piVar3 = *(int **)(param_1 + uVar5 * 4 + 0x10);
    if ((piVar3 != (int *)0x0) && (*(uint *)(this + 0x44) != 0)) {
      uVar4 = 0;
      do {
        piVar2 = *(int **)(this + uVar4 * 4 + 0x24);
        if ((piVar2 != (int *)0x0) && (piVar2[3] == *piVar3)) {
          uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,piVar3[3]);
          uVar6 = *(uint *)(param_1 + 8);
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(this + 0x44));
    }
    uVar5 = uVar5 + 1;
    if (uVar6 <= uVar5) {
      return uVar1;
    }
  } while( true );
}

