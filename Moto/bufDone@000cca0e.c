
/* qcamera::QCameraChannel::bufDone(mm_camera_super_buf_t*, unsigned int) */

undefined4 __thiscall
qcamera::QCameraChannel::bufDone(QCameraChannel *this,mm_camera_super_buf_t *param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 < 1) {
    return 0;
  }
  iVar7 = 0;
  uVar1 = 0;
  do {
    puVar5 = *(uint **)(param_1 + iVar7 * 4 + 0x10);
    if (((puVar5 != (uint *)0x0) && (*puVar5 == param_2)) && (*(uint *)(this + 0x1c) != 0)) {
      uVar6 = 0;
      do {
        piVar2 = *(int **)(*(int *)(this + 0x18) + uVar6 * 4);
        if ((piVar2 != (int *)0x0) && (piVar2[0x1a] == param_2)) {
          uVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,puVar5[3]);
          iVar8 = *(int *)(param_1 + 8);
          if ((-1 < iVar7) && (iVar7 < iVar8)) {
            iVar8 = iVar8 + -1;
            iVar3 = iVar7;
            if (iVar7 < iVar8) {
              do {
                iVar4 = iVar3 + 1;
                *(undefined4 *)(param_1 + iVar3 * 4 + 0x10) =
                     *(undefined4 *)(param_1 + iVar3 * 4 + 0x14);
                iVar8 = *(int *)(param_1 + 8) + -1;
                iVar3 = iVar4;
              } while (iVar4 < iVar8);
            }
            iVar7 = iVar7 + -1;
            *(int *)(param_1 + 8) = iVar8;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(this + 0x1c));
    }
    iVar7 = iVar7 + 1;
    if (iVar8 <= iVar7) {
      return uVar1;
    }
  } while( true );
}

