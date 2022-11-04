
/* qcamera::QCameraChannel::bufDone(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCameraChannel::bufDone(QCameraChannel *this,mm_camera_super_buf_t *param_1)

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
    if ((piVar3 != (int *)0x0) && (*(uint *)(this + 0x1c) != 0)) {
      uVar4 = 0;
      do {
        piVar2 = *(int **)(*(int *)(this + 0x18) + uVar4 * 4);
        if ((piVar2 != (int *)0x0) && (piVar2[0x1a] == *piVar3)) {
          uVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,piVar3[3]);
          uVar6 = *(uint *)(param_1 + 8);
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(this + 0x1c));
    }
    uVar5 = uVar5 + 1;
    if (uVar6 <= uVar5) {
      return uVar1;
    }
  } while( true );
}

