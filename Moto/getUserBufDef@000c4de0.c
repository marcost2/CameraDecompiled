
/* qcamera::QCameraMemory::getUserBufDef(cam_stream_user_buf_info_t const&, mm_camera_buf_def&,
   unsigned int, cam_frame_len_offset_t const&, mm_camera_buf_def*, qcamera::QCameraMemory*) const
    */

undefined4 __thiscall
qcamera::QCameraMemory::getUserBufDef
          (QCameraMemory *this,cam_stream_user_buf_info_t *param_1,mm_camera_buf_def *param_2,
          uint param_3,cam_frame_len_offset_t *param_4,mm_camera_buf_def *param_5,
          QCameraMemory *param_6)

{
  undefined4 *puVar1;
  cam_stream_user_buf_info_t cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  mm_camera_buf_def *pmVar9;
  int iVar10;
  uint uVar11;
  
  if (this[5] != (QCameraMemory)0x0) {
    uVar8 = 0;
    iVar10 = (byte)*param_1 * param_3;
    do {
      uVar3 = *(undefined4 *)(this + uVar8 * 0x18 + 8);
      *(undefined4 *)(param_2 + 8) = 1;
      *(undefined4 *)(param_2 + 0x204) = uVar3;
      *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(param_1 + 4);
      *(QCameraMemory **)(param_2 + 0x210) = this;
      iVar4 = (**(code **)(*(int *)this + 0x24))(this,uVar8);
      iVar6 = *(int *)(param_1 + 4);
      *(uint *)(param_2 + 0xc) = param_3;
      iVar7 = iVar6 * param_3;
      *(uint *)(param_2 + 0x208) = iVar6 * param_3 + iVar4;
      cVar2 = *param_1;
      *(cam_stream_user_buf_info_t *)(param_2 + 0x20) = cVar2;
      *(cam_stream_user_buf_info_t *)(param_2 + 0x21) = *param_1;
      *(uint *)(iVar4 + iVar7) = (uint)(byte)cVar2;
      if (param_2[0x20] == (mm_camera_buf_def)0x0) {
        uVar5 = 0;
      }
      else {
        uVar11 = 0;
        pmVar9 = param_5 + iVar10 * 0x218;
        do {
          getBufDef(param_6,param_4,pmVar9,iVar10 + uVar11);
          *(undefined4 *)(param_2 + uVar11 * 4 + 0x24) = 0xffffffff;
          puVar1 = (undefined4 *)(pmVar9 + 0xc);
          pmVar9 = pmVar9 + 0x218;
          *(undefined4 *)(iVar4 + iVar7 + 4 + uVar11 * 4) = *puVar1;
          uVar11 = uVar11 + 1;
          uVar5 = (uint)(byte)param_2[0x20];
        } while (uVar11 < uVar5);
        iVar10 = iVar10 + uVar11;
      }
      *(mm_camera_buf_def **)(param_2 + 100) = param_5;
      if (*(int *)(*(int *)(DAT_000c4f18 + 0xc4eb0) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000c4f20 + 0xc4ece,0x168,DAT_000c4f1c + 0xc4ebe,uVar5,param_3,
                            iVar10);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (byte)this[5]);
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000c4f0c + 0xc4ee6) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000c4f14 + 0xc4efe,0x14c,DAT_000c4f10 + 0xc4ef6);
  }
  return 0xffffffda;
}

