
/* qcamera::QCamera3ProcessingChannel::metadataBufDone(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3ProcessingChannel::metadataBufDone
          (QCamera3ProcessingChannel *this,mm_camera_super_buf_t *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((param_1 == (mm_camera_super_buf_t *)0x0) || (iVar6 = *(int *)(this + 0x14f4), iVar6 == 0)) {
    if (*(int *)(*(int *)(DAT_0009f88c + 0x9f860) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009f894 + 0x9f878,0x654,DAT_0009f890 + 0x9f870);
    }
    return 0xffffffea;
  }
  uVar7 = *(uint *)(param_1 + 8);
  if (uVar7 == 0) {
    return 0;
  }
  uVar5 = 0;
  uVar1 = 0;
  do {
    piVar3 = *(int **)(param_1 + uVar5 * 4 + 0x10);
    if ((piVar3 != (int *)0x0) && (*(uint *)(iVar6 + 0x44) != 0)) {
      uVar4 = 0;
      do {
        piVar2 = *(int **)(iVar6 + 0x24 + uVar4 * 4);
        if ((piVar2 != (int *)0x0) && (piVar2[3] == *piVar3)) {
          uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,piVar3[3]);
          uVar7 = *(uint *)(param_1 + 8);
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar6 + 0x44));
    }
    uVar5 = uVar5 + 1;
    if (uVar7 <= uVar5) {
      return uVar1;
    }
  } while( true );
}

