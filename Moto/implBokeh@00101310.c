
/* qcamera::BSTLiveBokeh::implBokeh(qcamera::camera_stereo_buf_info*,
   qcamera::camera_stereo_buf_info*) */

void __thiscall
qcamera::BSTLiveBokeh::implBokeh
          (BSTLiveBokeh *this,camera_stereo_buf_info *param_1,camera_stereo_buf_info *param_2)

{
  undefined4 *puVar1;
  BSTBokehParam *this_00;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  QCamera3Stream *pQVar6;
  int *piVar7;
  int iVar8;
  timeval tStack816;
  timeval tStack808;
  int local_320;
  int iStack796;
  uint local_318;
  uint local_314;
  uint local_310;
  int local_30c;
  undefined4 local_2fc [92];
  undefined4 local_18c;
  BokehOneData aBStack388 [116];
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  int iStack260;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_ec [8];
  undefined4 local_cc;
  undefined4 uStack200;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int iStack144;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_78 [7];
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack56;
  int local_28;
  
  piVar7 = *(int **)(DAT_00101564 + 0x101328);
  local_28 = *piVar7;
  local_318 = 0;
  local_314 = 0;
  this_00 = (BSTBokehParam *)BSTBokehParam::createInstance();
  BokehOneData::BokehOneData((BokehOneData *)&local_9c);
  BokehOneData::BokehOneData((BokehOneData *)&local_110);
  BokehOneData::BokehOneData(aBStack388);
  if (this[8] == (BSTLiveBokeh)0x0) {
    iVar8 = *(int *)(param_1 + 8);
    pQVar6 = *(QCamera3Stream **)(param_1 + 0xc);
    QCamera3Stream::getFrameDimension(pQVar6,(cam_dimension_t *)&local_320);
    QCamera3Stream::getFrameOffset(pQVar6,(cam_frame_len_offset_t *)&local_310);
    gettimeofday(&tStack808,(__timezone_ptr_t)0x0);
    local_9c = *(undefined4 *)param_1;
    local_98 = *(undefined4 *)(param_1 + 4);
    local_94 = local_320;
    iStack144 = iStack796;
    local_88 = local_18c;
    local_84 = *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x208);
    local_78[6] = 0;
    local_80 = local_30c + *(int *)(*(int *)(iVar8 + 0x10) + 0x208);
    local_5c = BSTBokehParam::getDacVal(this_00);
    android::key_value_pair_t<unsigned_int,unsigned_int>::key_value_pair_t
              ((key_value_pair_t_unsigned_int_unsigned_int_ *)this_00,&local_314,&local_318);
    local_58 = local_314;
    local_54 = local_318;
    if ((local_314 | local_318) == 0) {
      local_58 = local_94 / 2;
      local_54 = iStack144 / 2;
    }
    local_50 = BSTBokehParam::getFNumber(this_00);
    local_4c = BSTBokehParam::getRotation(this_00);
    local_3c = 0xffffffff;
    uStack56 = 0xffffffff;
    local_40 = 0;
    if (local_310 != 0) {
      puVar3 = local_2fc;
      uVar5 = 0;
      do {
        uVar4 = uVar5 + 1;
        local_78[uVar5] = *puVar3;
        puVar1 = puVar3 + 2;
        puVar3 = puVar3 + 0xc;
        local_78[uVar5 + 3] = *puVar1;
        uVar5 = uVar4;
      } while (uVar4 < local_310);
    }
    local_320 = 0;
    iStack796 = 0;
    __aeabi_memclr8(&local_310,0x188);
    iVar8 = *(int *)(param_2 + 8);
    pQVar6 = *(QCamera3Stream **)(param_2 + 0xc);
    QCamera3Stream::getFrameDimension(pQVar6,(cam_dimension_t *)&local_320);
    QCamera3Stream::getFrameOffset(pQVar6,(cam_frame_len_offset_t *)&local_310);
    local_110 = *(undefined4 *)param_2;
    local_108 = local_320;
    iStack260 = iStack796;
    local_fc = local_18c;
    local_10c = *(undefined4 *)(param_2 + 4);
    local_f8 = *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x208);
    local_cc = 0xffffffff;
    uStack200 = 0xffffffff;
    local_ec[6] = 0;
    local_f4 = local_30c + *(int *)(*(int *)(iVar8 + 0x10) + 0x208);
    if (local_310 != 0) {
      puVar3 = local_2fc;
      uVar5 = 0;
      do {
        uVar4 = uVar5 + 1;
        local_ec[uVar5] = *puVar3;
        puVar1 = puVar3 + 2;
        puVar3 = puVar3 + 0xc;
        local_ec[uVar5 + 3] = *puVar1;
        uVar5 = uVar4;
      } while (uVar4 < local_310);
    }
    dump(this,param_1,param_2);
    if (this_00[300] == (BSTBokehParam)0x0) {
      (**(code **)(**(int **)(this + 0xcc) + 0x18))
                (*(int **)(this + 0xcc),&local_9c,&local_110,&local_9c);
    }
    gettimeofday(&tStack816,(__timezone_ptr_t)0x0);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 == (int *)0x0) {
    if (*(int *)(*(int *)(DAT_00101568 + 0x1014e0) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0010156c + 0x1014f6,0x14d,DAT_00101574 + 0x1014f4,
                          DAT_00101570 + 0x1014f2,DAT_0010156c + 0x1014f6);
    }
  }
  else {
    (**(code **)(*piVar2 + 8))(piVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  piVar2 = *(int **)(param_2 + 0x10);
  if (piVar2 == (int *)0x0) {
    if (*(int *)(*(int *)(DAT_00101578 + 0x101518) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0010157c + 0x10152e,0x156,DAT_00101584 + 0x10152c,
                          DAT_00101580 + 0x10152a,DAT_0010157c + 0x10152e);
    }
  }
  else {
    (**(code **)(*piVar2 + 8))(piVar2,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  }
  BokehOneData::_BokehOneData(aBStack388);
  BokehOneData::_BokehOneData((BokehOneData *)&local_110);
  BokehOneData::_BokehOneData((BokehOneData *)&local_9c);
  if (*piVar7 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

