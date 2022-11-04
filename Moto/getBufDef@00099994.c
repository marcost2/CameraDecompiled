
/* qcamera::QCamera3Memory::getBufDef(cam_frame_len_offset_t const&, mm_camera_buf_def&, unsigned
   int) */

undefined4 __thiscall
qcamera::QCamera3Memory::getBufDef
          (QCamera3Memory *this,cam_frame_len_offset_t *param_1,mm_camera_buf_def *param_2,
          uint param_3)

{
  mm_camera_buf_def mVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if (*(int *)(this + 4) == 0) {
    if (*(int *)(*(int *)(DAT_00099a60 + 0x99a34) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00099a68 + 0x99a4a,0xe6,DAT_00099a64 + 0x99a42);
    }
    uVar2 = 0xffffffed;
  }
  else {
    *(undefined4 *)(param_2 + 0x204) = *(undefined4 *)(this + param_3 * 0x10 + 8);
    *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(this + param_3 * 0x10 + 0x14);
    *(QCamera3Memory **)(param_2 + 0x210) = this;
    uVar2 = (**(code **)(*(int *)this + 0x24))(this,param_3);
    *(undefined4 *)(param_2 + 0x208) = uVar2;
    iVar3 = *(int *)param_1;
    *(uint *)(param_2 + 0xc) = param_3 & 0xff;
    mVar1 = SUB41(iVar3,0);
    param_2[0x20] = mVar1;
    iVar7 = *(int *)(param_1 + 4);
    *(int *)(param_2 + 0x28) = iVar7;
    uVar2 = 0;
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + param_3 * 0x10 + 8);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0x34) = 0;
    if (0x1000000 < iVar3 * 0x1000000) {
      piVar9 = (int *)(param_2 + 100);
      piVar5 = (int *)(param_1 + 0x38);
      iVar8 = 1;
      iVar3 = 0;
      piVar6 = (int *)(this + 0x18);
      do {
        iVar4 = piVar5[-1];
        iVar3 = iVar3 + iVar7;
        iVar8 = iVar8 + 1;
        *piVar9 = iVar4;
        piVar9[1] = *piVar6;
        iVar7 = *piVar5;
        piVar5 = piVar5 + 0xc;
        piVar9[2] = iVar7;
        piVar9[3] = iVar3;
        piVar9 = piVar9 + 0xf;
        piVar6 = piVar6 + 4;
        iVar7 = iVar4;
      } while (iVar8 < (char)mVar1);
      uVar2 = 0;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar2;
}

