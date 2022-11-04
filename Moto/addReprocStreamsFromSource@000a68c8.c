
/* qcamera::QCamera3ReprocessChannel::addReprocStreamsFromSource(cam_pp_feature_config_t&,
   qcamera::reprocess_config_t const&, cam_is_type_t, qcamera::QCamera3Channel*) */

int __thiscall
qcamera::QCamera3ReprocessChannel::addReprocStreamsFromSource
          (QCamera3ReprocessChannel *this,cam_pp_feature_config_t *param_1,
          reprocess_config_t *param_2,cam_is_type_t param_3,QCamera3Channel *param_4)

{
  int iVar1;
  int iVar2;
  int *this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  undefined4 local_258;
  int local_254;
  undefined4 local_250;
  undefined4 uStack588;
  undefined auStack584 [392];
  undefined local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack180;
  int local_28;
  
  piVar10 = *(int **)(DAT_000a6bfc + 0xa68dc);
  local_28 = *piVar10;
  iVar1 = *(int *)(param_2 + 0x1bc);
  iVar9 = *(int *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0x19c);
  uVar8 = *(undefined4 *)(param_2 + 0x1a0);
  if (iVar1 != 0) {
    bVar11 = *(int *)(iVar1 + 0x44) != 0;
    if (bVar11) {
      iVar1 = *(int *)(iVar1 + 0x24);
    }
    if (!bVar11 || iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_000a6c00 + 0xa690a) + 0x20) == 0) {
        iVar9 = -0x16;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000a6c08 + 0xa6924,0x1680,DAT_000a6c04 + 0xa691c);
        iVar9 = -0x16;
      }
      goto LAB_000a6ba6;
    }
    *(undefined4 *)(this + *(int *)(this + 0x44) * 4 + 0xd8) = *(undefined4 *)(iVar1 + 0xc);
  }
  local_258 = 1;
  local_254 = *(int *)(param_2 + 4);
  local_250 = *(undefined4 *)(param_2 + 0xc);
  uStack588 = *(undefined4 *)(param_2 + 0x10);
  __aeabi_memcpy8(auStack584,param_2 + 0x14,0x188);
  local_c0 = (undefined)*(undefined4 *)(this + 0x78);
  local_bc = *(undefined4 *)param_2;
  if (QCameraParameters::SCENE_MODES_MAP[*(int *)(this + 4) + 0x5a] == '\x02') {
    iVar1 = *(int *)(DAT_000a6c0c + 0xa6982);
    if (*(int *)(iVar1 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000a6c14 + 0xa699a,0x1693,DAT_000a6c10 + 0xa6992);
    }
    if (*(int *)(param_1 + 4) << 0x1e < 0) {
      iVar9 = *(int *)(this + 4);
      if ((QCameraParameters::SCENE_MODES_MAP[iVar9 + 0x57] == '\0') ||
         ((char)QCameraParameters::SCENE_MODES_MAP[iVar9 + 0x5a] < '\x02')) {
        iVar9 = 2;
      }
      else if ((*(uint *)(QCameraParameters::FOCUS_MODES_MAP + iVar9 + 0x18) & 0xfffffffc) == 0x1c)
      {
        iVar9 = *(uint *)(QCameraParameters::FOCUS_MODES_MAP + iVar9 + 0x18) + 0x28;
      }
      else {
        if (*(int *)(iVar1 + 0x24) != 0) {
          mm_camera_debug_log(1,2,DAT_000a6c1c + 0xa6bd2,0x2d3,DAT_000a6c18 + 0xa6bca);
        }
        iVar9 = 0x47;
      }
      if (*(int *)(iVar1 + 0x2c) != 0) {
        uVar4 = *(undefined4 *)(param_2 + 8);
        uVar7 = 0x1697;
        iVar2 = DAT_000a6c20 + 0xa6a24;
        iVar6 = DAT_000a6c24 + 0xa6a34;
        iVar1 = iVar9;
LAB_000a6a54:
        mm_camera_debug_log(1,4,iVar6,uVar7,iVar2,uVar4,iVar1);
      }
    }
    else if (*(int *)param_1 << 0xd < 0) {
      iVar2 = *(int *)(this + 4);
      if ((QCameraParameters::SCENE_MODES_MAP[iVar2 + 0x57] == '\0') ||
         ((char)QCameraParameters::SCENE_MODES_MAP[iVar2 + 0x5a] < '\x02')) {
        local_254 = 2;
      }
      else if ((*(uint *)(QCameraParameters::FOCUS_MODES_MAP + iVar2 + 0x18) & 0xfffffffc) == 0x1c)
      {
        local_254 = *(uint *)(QCameraParameters::FOCUS_MODES_MAP + iVar2 + 0x18) + 0x28;
      }
      else {
        if (*(int *)(iVar1 + 0x24) != 0) {
          mm_camera_debug_log(1,2,DAT_000a6c2c + 0xa6bf2,0x2d3,DAT_000a6c28 + 0xa6bea);
        }
        local_254 = 0x47;
      }
      if (*(int *)(iVar1 + 0x2c) != 0) {
        uVar4 = *(undefined4 *)(param_2 + 4);
        uVar7 = 0x169c;
        iVar2 = DAT_000a6c30 + 0xa6a48;
        iVar6 = DAT_000a6c34 + 0xa6a56;
        iVar1 = local_254;
        goto LAB_000a6a54;
      }
    }
  }
  __aeabi_memcpy8(&local_b8,param_1,0x90);
  this_00 = (int *)operator_new(700);
  QCamera3Stream::QCamera3Stream
            ((QCamera3Stream *)this_00,*(uint *)(this + 0x48),*(uint *)(this + 0x54),
             *(mm_camera_ops_t **)(this + 0x4c),(cam_padding_info_t *)(this + 8),
             (QCamera3Channel *)this);
  uVar4 = 1;
  iVar9 = (**(code **)(*this_00 + 8))
                    (this_00,9,iVar9,uVar5,uVar8,1,&local_258,this[0x78],local_b8,uStack180,param_3,
                     0,*(undefined4 *)(DAT_000a6c38 + 0xa6aa0),this);
  if (iVar9 == 0) {
    *(int **)(this + *(int *)(this + 0x44) * 4 + 0x24) = this_00;
    *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
    *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_2 + 0x1bc);
    *(QCamera3Channel **)(this + 0xfc) = param_4;
    uVar5 = *(undefined4 *)(param_2 + 0x1a8);
    *(undefined4 *)(this + 0xd4) = uVar5;
    if (*(int *)(*(int *)(DAT_000a6c48 + 0xa6b12) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a6c50 + 0xa6b2c,0x16bf,DAT_000a6c4c + 0xa6b20,uVar5);
      uVar4 = uVar5;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000a6c3c + 0xa6aca) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a6c44 + 0xa6ae2,0x16b7,DAT_000a6c40 + 0xa6ada);
    }
    (**(code **)(*this_00 + 4))(this_00);
  }
  if ((int)((uint)(byte)param_1[2] << 0x1d) < 0) {
    if (*(int *)(*(int *)(DAT_000a6c54 + 0xa6b3c) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000a6c5c + 0xa6b54,0x16c4,DAT_000a6c58 + 0xa6b4c,uVar4);
    }
    this[0xf51] = (QCamera3ReprocessChannel)0x1;
    addMetaReprocStream((QCamera3Channel *)this);
  }
  uVar3 = (**(code **)(*(int *)(this + 0x4c) + 0x78))
                    (*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x54));
  if ((0x7fffffff < uVar3) && (*(int *)(*(int *)(DAT_000a6c60 + 0xa6b8c) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_000a6c68 + 0xa6ba4,0x16ce,DAT_000a6c64 + 0xa6b9c,uVar4);
  }
LAB_000a6ba6:
  if (*piVar10 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}

