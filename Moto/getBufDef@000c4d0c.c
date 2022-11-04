
/* qcamera::QCameraMemory::getBufDef(cam_frame_len_offset_t const&, mm_camera_buf_def&, unsigned
   int) const */

void __thiscall
qcamera::QCameraMemory::getBufDef
          (QCameraMemory *this,cam_frame_len_offset_t *param_1,mm_camera_buf_def *param_2,
          uint param_3)

{
  mm_camera_buf_def mVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (this[5] == (QCameraMemory)0x0) {
    if (*(int *)(*(int *)(DAT_000c4dd4 + 0xc4dac) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c4ddc + 0xc4dc4,0x115,DAT_000c4dd8 + 0xc4dbc);
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x204) = *(undefined4 *)(this + param_3 * 0x18 + 8);
    uVar2 = *(undefined4 *)(this + param_3 * 0x18 + 0x14);
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x20c) = uVar2;
    *(QCameraMemory **)(param_2 + 0x210) = this;
    param_2[0x20] = SUB41(*(undefined4 *)param_1,0);
    uVar2 = (**(code **)(*(int *)this + 0x24))(this,param_3);
    *(uint *)(param_2 + 0xc) = param_3;
    *(undefined4 *)(param_2 + 0x208) = uVar2;
    iVar6 = *(int *)(param_1 + 4);
    *(int *)(param_2 + 0x28) = iVar6;
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + param_3 * 0x18 + 8);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0x34) = 0;
    mVar1 = param_2[0x20];
    if (1 < (char)mVar1) {
      piVar5 = (int *)(param_2 + 100);
      piVar3 = (int *)(param_1 + 0x38);
      iVar8 = 1;
      iVar7 = 0;
      piVar4 = (int *)(this + 0x20);
      do {
        iVar9 = piVar3[-1];
        iVar7 = iVar7 + iVar6;
        iVar8 = iVar8 + 1;
        *piVar5 = iVar9;
        piVar5[1] = *piVar4;
        iVar6 = *piVar3;
        piVar3 = piVar3 + 0xc;
        piVar5[2] = iVar6;
        piVar5[3] = iVar7;
        piVar5 = piVar5 + 0xf;
        piVar4 = piVar4 + 6;
        iVar6 = iVar9;
      } while (iVar8 < (char)mVar1);
    }
  }
  return;
}

