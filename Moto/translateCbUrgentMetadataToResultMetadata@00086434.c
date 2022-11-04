
/* qcamera::QCamera3HardwareInterface::translateCbUrgentMetadataToResultMetadata(metadata_buffer_t*)
    */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::translateCbUrgentMetadataToResultMetadata
          (QCamera3HardwareInterface *this,metadata_buffer_t *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  float local_34;
  uchar local_2d;
  CameraMetadata aCStack44 [8];
  int local_24;
  
  piVar7 = *(int **)(DAT_000867c0 + 0x86442);
  local_24 = *piVar7;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack44);
  if (param_1 == (metadata_buffer_t *)0x0) {
    iVar3 = 5;
    iVar4 = -1;
    iVar6 = 2;
LAB_00086602:
    local_2d = '\0';
    if (*(int *)(*(int *)(DAT_000868fc + 0x86608) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00086904 + 0x86626,0x1e76,DAT_00086900 + 0x86612,iVar4,iVar3,iVar6
                         );
    }
    if (param_1 == (metadata_buffer_t *)0x0) goto LAB_00086882;
  }
  else {
    if (param_1[0x7a] != (metadata_buffer_t)0x0) {
      local_34 = (float)((uint)local_34 & 0xffffff00 | *(uint *)(param_1 + 0xc698) & 0xff);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack44,0x10022,(uchar *)&local_34,1);
      if (*(int *)(*(int *)(DAT_000867c4 + 0x8648c) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000867cc + 0x864a8,0x1e17,DAT_000867c8 + 0x8649c,
                            *(undefined4 *)(param_1 + 0xc698));
      }
    }
    if (param_1[0x74] != (metadata_buffer_t)0x0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack44,0x10006,(uchar *)(param_1 + 0x739b4),1);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack44,0x1001e,(int *)(param_1 + 0x739b8),1);
      iVar6 = *(int *)(DAT_000867d0 + 0x864dc);
      if ((*(int *)(iVar6 + 0x2c) != 0) &&
         (mm_camera_debug_log(1,4,DAT_000867d8 + 0x864fa,0x1e20,DAT_000867d4 + 0x864ee,
                              param_1[0x739b4]), *(int *)(iVar6 + 0x2c) != 0)) {
        mm_camera_debug_log(1,4,DAT_000867e0 + 0x86518,0x1e22,DAT_000867dc + 0x8650c,
                            *(int *)(param_1 + 0x739b8));
      }
    }
    if (param_1[0x75] != (metadata_buffer_t)0x0) {
      local_34 = (float)((uint)local_34 & 0xffffff00 | *(uint *)(param_1 + 0xc658) & 0xff);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack44,0x1001f,(uchar *)&local_34,1);
      if (*(int *)(*(int *)(DAT_000868a8 + 0x8653a) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000868b0 + 0x86556,0x1e28,DAT_000868ac + 0x8654a,
                            *(uint *)(param_1 + 0xc658));
      }
    }
    if (param_1[0x78] != (metadata_buffer_t)0x0) {
      local_34 = (float)((uint)local_34 & 0xffffff00 | *(uint *)(param_1 + 0xc67c) & 0xff);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack44,0x10020,(uchar *)&local_34,1);
      if (*(int *)(*(int *)(DAT_000868b4 + 0x86578) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000868bc + 0x86594,0x1e2e,DAT_000868b8 + 0x86588,
                            *(undefined4 *)(param_1 + 0xc67c));
      }
    }
    if (param_1[5] != (metadata_buffer_t)0x0) {
      uVar1 = *(uint *)(param_1 + 0xc65c);
      if ((uVar1 < 8) && ((0xfbU >> (uVar1 & 0xff) & 1) != 0)) {
        uVar1 = *(uint *)(*(int *)(DAT_000868c4 + 0x86640) +
                         *(int *)(DAT_000868c0 + 0x86638 + uVar1 * 4) * 8);
        local_34 = (float)((uint)local_34 & 0xffffff00 | uVar1 & 0xff);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack44,0x10007,(uchar *)&local_34,1);
        if (*(int *)(*(int *)(DAT_000868c8 + 0x8665a) + 0x2c) != 0) {
          uVar2 = 4;
          uVar5 = 0x1e36;
          iVar6 = DAT_000868cc + 0x8666a;
          iVar3 = DAT_000868d0 + 0x86674;
LAB_00086672:
          mm_camera_debug_log(1,uVar2,iVar3,uVar5,iVar6,uVar1);
        }
      }
      else {
        iVar6 = *(int *)(DAT_0008692c + 0x865b8);
        if ((*(int *)(iVar6 + 0x28) != 0) &&
           (mm_camera_debug_log(1,3,DAT_00086934 + 0x865d2,0x18f5,DAT_00086930 + 0x865ca),
           *(int *)(iVar6 + 0x28) != 0)) {
          uVar5 = 0x1e39;
          iVar6 = DAT_00086938 + 0x865e8;
          uVar1 = 0xfffffffe;
          uVar2 = 3;
          iVar3 = DAT_0008693c + 0x865f4;
          goto LAB_00086672;
        }
      }
    }
    if (param_1[0x77] != (metadata_buffer_t)0x0) {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack44,0x10009,(uchar *)(param_1 + 0x739bc),1);
      iVar6 = *(int *)(DAT_000868d4 + 0x86694);
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000868dc + 0x866b0,0x1e41,DAT_000868d8 + 0x866a4,
                            param_1[0x739bc]);
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                (aCStack44,0x10021,(int *)(param_1 + 0x739c0),1);
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000868e4 + 0x866e0,0x1e44,DAT_000868e0 + 0x866d4,
                            *(int *)(param_1 + 0x739c0));
      }
    }
    if (param_1[4] != (metadata_buffer_t)0x0) {
      uVar1 = *(uint *)(param_1 + 0xc680);
      if ((uVar1 < 0xb) && ((0x5fdU >> (uVar1 & 0xff) & 1) != 0)) {
        local_34 = (float)((uint)local_34 & 0xffffff00 |
                          *(uint *)(*(int *)(DAT_000868ec + 0x86748) +
                                   *(int *)(DAT_000868e8 + 0x86740 + uVar1 * 4) * 8) & 0xff);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                  (aCStack44,0x1000b,(uchar *)&local_34,1);
        if (*(int *)(*(int *)(DAT_000868f0 + 0x86762) + 0x2c) != 0) {
          uVar2 = 4;
          uVar5 = 0x1e4d;
          iVar6 = DAT_000868f4 + 0x86772;
          iVar3 = DAT_000868f8 + 0x8677c;
LAB_0008677a:
          mm_camera_debug_log(1,uVar2,iVar3,uVar5,iVar6);
        }
      }
      else {
        iVar6 = *(int *)(DAT_00086918 + 0x86706);
        if ((*(int *)(iVar6 + 0x28) != 0) &&
           (mm_camera_debug_log(1,3,DAT_00086920 + 0x8671e,0x18f5,DAT_0008691c + 0x86716),
           *(int *)(iVar6 + 0x28) != 0)) {
          uVar2 = 3;
          uVar5 = 0x1e4f;
          iVar6 = DAT_00086924 + 0x86730;
          iVar3 = DAT_00086928 + 0x86738;
          goto LAB_0008677a;
        }
      }
    }
    if (param_1[3] == (metadata_buffer_t)0x0) {
      iVar6 = 2;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x739b0);
    }
    if (param_1[0xf] == (metadata_buffer_t)0x0) {
      iVar3 = 5;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x72eb8);
    }
    if (param_1[0x26] == (metadata_buffer_t)0x0) {
      iVar4 = -1;
LAB_000867e8:
      if (iVar3 - 1U < 2) {
        iVar6 = 0x18;
        if (iVar3 == 1) {
          iVar6 = 0x10;
        }
        local_2d = (uchar)*(undefined4 *)(*(int *)(DAT_00086914 + 0x867fc) + iVar6);
      }
      else if (iVar6 == 0) {
        local_2d = '\0';
      }
      else {
        if (iVar6 != 1) goto LAB_00086602;
        local_2d = '\x01';
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x73574);
      if (iVar4 != 1) goto LAB_000867e8;
      local_2d = '\x04';
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack44,0x10003,&local_2d,1);
  }
  if (param_1[0x41] != (metadata_buffer_t)0x0) {
    if (*(int *)(*(int *)(DAT_00086908 + 0x8682c) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00086910 + 0x86864,0x1e7b,DAT_0008690c + 0x86850,
                          *(undefined4 *)(param_1 + 0x106d8),(double)*(float *)(param_1 + 0x106f0));
    }
    local_34 = *(float *)(param_1 + 0x106f0);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (aCStack44,0x80100000,&local_34,1);
  }
LAB_00086882:
  uVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release(aCStack44);
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack44);
  if (*piVar7 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

