
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::setReprocParameters(camera3_capture_request*,
   metadata_buffer_t*, unsigned int) */

int __thiscall
qcamera::QCamera3HardwareInterface::setReprocParameters
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1,
          metadata_buffer_t *param_2,uint param_3)

{
  undefined auVar1 [16];
  longlong lVar2;
  undefined auVar3 [12];
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  CameraMetadata *this_00;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint local_17c;
  undefined auStack364 [16];
  int local_15c;
  CameraMetadata aCStack344 [8];
  undefined4 local_150;
  undefined4 uStack332;
  undefined4 local_148;
  undefined4 local_144;
  ulonglong local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  int local_28;
  
  piVar18 = *(int **)(DAT_0008f600 + 0x8f2be);
  local_28 = *piVar18;
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(*(int *)(DAT_0008f618 + 0x8f4a6) + 0x20) == 0) {
LAB_0008f4e4:
      iVar6 = -0x16;
      goto LAB_0008fa86;
    }
    uVar8 = 0x29dc;
    iVar6 = DAT_0008f61c + 0x8f4b6;
    iVar7 = DAT_0008f620 + 0x8f4be;
  }
  else {
    if (param_2 != (metadata_buffer_t *)0x0) {
      __aeabi_memclr8(param_2,0x10f);
      param_2[0x117aec] = (metadata_buffer_t)0x0;
      param_2[0x106974] = (metadata_buffer_t)0x0;
      param_2[0xe1f78] = (metadata_buffer_t)0x0;
      param_2[0xcfa74] = (metadata_buffer_t)0x0;
      param_2[0xcfa08] = (metadata_buffer_t)0x0;
      param_2[0xc36b0] = (metadata_buffer_t)0x0;
      param_2[0xb86e0] = (metadata_buffer_t)0x0;
      param_2[0xb7340] = (metadata_buffer_t)0x0;
      param_2[0xb72e8] = (metadata_buffer_t)0x0;
      param_2[0x772c8] = (metadata_buffer_t)0x0;
      *(undefined4 *)(param_2 + 0xc584) = *(undefined4 *)param_1;
      param_2[0x6f] = (metadata_buffer_t)0x1;
      iVar6 = translateToHalMetadata(this,param_1,param_2,param_3);
      if (iVar6 < 0) {
        if (*(int *)(*(int *)(DAT_0008f640 + 0x8f54c) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0008f648 + 0x8f568,0x29ef,DAT_0008f644 + 0x8f560);
        }
        goto LAB_0008fa86;
      }
      this_00 = (CameraMetadata *)
                android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                          (aCStack344);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
                (this_00,*(camera_metadata **)(param_1 + 4));
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        (aCStack344,0x80030000);
      if ((iVar7 == 0) ||
         (iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                            (aCStack344,0x80030001), iVar7 == 0)) {
        if (*(int *)(*(int *)(DAT_0008f630 + 0x8f4f0) + 0x20) != 0) {
          uVar8 = 0x2a22;
          iVar7 = DAT_0008f634 + 0x8f500;
          iVar10 = DAT_0008f638 + 0x8f508;
LAB_0008f506:
          mm_camera_debug_log(1,1,iVar10,uVar8,iVar7);
        }
      }
      else {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
        piVar4 = (int *)(undefined (*) [16])local_140;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
        puVar5 = (undefined4 *)(undefined (*) [16])local_140;
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
        if (*piVar4 - 1U < 7) {
          __aeabi_memclr8(&local_150,0x124);
          local_150 = CONCAT31(local_150._1_3_,1);
          uVar8 = *puVar5;
          uVar11 = puVar5[1];
          uVar12 = puVar5[2];
          uVar16 = puVar5[3];
          local_140 = *(ulonglong *)(puVar5 + 2);
          uVar17 = *(undefined4 *)(undefined (*) [16])local_140;
          uVar13 = *(undefined4 *)((int)(undefined (*) [16])local_140 + 4);
          local_138 = *(longlong *)(undefined (*) [16])local_140;
          uVar14 = *(undefined4 *)((int)(undefined (*) [16])local_140 + 8);
          uVar15 = *(undefined4 *)((int)(undefined (*) [16])local_140 + 0xc);
          local_148 = uVar8;
          local_144 = uVar11;
          local_130 = uVar14;
          local_12c = uVar15;
          __aeabi_memcpy8(param_2 + 0x22fc,&local_150,0x124);
          param_2[0x3b] = (metadata_buffer_t)0x1;
          iVar7 = *(int *)(DAT_0008f604 + 0x8f438);
          if ((*(int *)(iVar7 + 0x2c) != 0) &&
             (mm_camera_debug_log(1,4,DAT_0008f60c + 0x8f464,0x2a17,DAT_0008f608 + 0x8f44a,
                                  **(undefined4 **)(param_1 + 8),uVar8,uVar11,uVar12,uVar16),
             *(int *)(iVar7 + 0x2c) != 0)) {
            mm_camera_debug_log(1,4,DAT_0008f614 + 0x8f492,0x2a1d,DAT_0008f610 + 0x8f478,
                                **(undefined4 **)(param_1 + 8),uVar17,uVar13,uVar14,uVar15);
          }
        }
        else if (*(int *)(*(int *)(DAT_0008fa9c + 0x8f962) + 0x20) != 0) {
          uVar8 = 0x2a1f;
          iVar7 = DAT_0008faa0 + 0x8f974;
          iVar10 = (int)&DAT_0008f980 + DAT_0008faa4;
          goto LAB_0008f506;
        }
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        (aCStack344,(uint)"eraChannelC2Ev");
      if (iVar7 == 0) {
        if (*(int *)(*(int *)(DAT_0008f64c + 0x8f572) + 0x28) != 0) {
          uVar8 = 3;
          uVar11 = 0x2a34;
          iVar7 = DAT_0008f650 + 0x8f582;
          iVar10 = DAT_0008f654 + 0x8f58a;
LAB_0008f5d2:
          mm_camera_debug_log(1,uVar8,iVar10,uVar11,iVar7);
        }
      }
      else {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
        uVar9 = (uint)*(byte *)(undefined (*) [16])local_140;
        if (uVar9 < 3) {
          *(undefined4 *)(param_2 + 0xc6b8) =
               *(undefined4 *)(*(int *)(DAT_0008f63c + 0x8f532) + uVar9 * 8 + 4);
          param_2[0x9e] = (metadata_buffer_t)0x1;
        }
        else {
          iVar7 = *(int *)(DAT_0008f658 + 0x8f590);
          if ((*(int *)(iVar7 + 0x20) != 0) &&
             (mm_camera_debug_log(1,1,DAT_0008f660 + 0x8f5aa,0x1911,DAT_0008f65c + 0x8f59e,uVar9),
             *(int *)(iVar7 + 0x20) != 0)) {
            android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
            uVar11 = 0x2a31;
            iVar7 = DAT_0008f664 + 0x8f5c8;
            uVar8 = 1;
            iVar10 = DAT_0008f668 + 0x8f5d4;
            goto LAB_0008f5d2;
          }
        }
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        (aCStack344,(uint)"ChannelC2Ev");
      if (iVar7 == 0) {
        if (*(int *)(*(int *)(DAT_0008f980 + 0x8f672) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_0008f988 + 0x8f68a,0x2a3d,DAT_0008f984 + 0x8f682);
        }
      }
      else {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
        *(uint *)(param_2 + 0xc6bc) = (uint)*(byte *)(undefined (*) [16])local_140;
        param_2[0x82] = (metadata_buffer_t)0x1;
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        (aCStack344,0x800d0000);
      if (iVar7 != 0) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
        param_2[0x76ff5] = *(metadata_buffer_t *)(undefined (*) [16])local_140;
        param_2[0x100] = (metadata_buffer_t)0x1;
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        (aCStack344,0x800d0001);
      if (iVar7 != 0) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
        auVar1 = *(undefined (*) [16])local_140;
        uVar19 = *(undefined8 *)((undefined (*) [16])local_140)[1];
        uVar20 = *(undefined8 *)(((undefined (*) [16])local_140)[1] + 8);
        *(undefined4 *)(param_2 + 0x73318) = *(undefined4 *)((undefined (*) [16])local_140)[2];
        param_2[0xe1] = (metadata_buffer_t)0x1;
        *(longlong *)(param_2 + 0x732f8) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x73300) = SUB168(auVar1 >> 0x40,0);
        *(undefined8 *)(param_2 + 0x73308) = uVar19;
        *(undefined8 *)(param_2 + 0x73310) = uVar20;
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[3] + 4);
        uVar19 = *(undefined8 *)(((undefined (*) [16])local_140)[2] + 4);
        uVar20 = *(undefined8 *)(((undefined (*) [16])local_140)[2] + 0xc);
        *(undefined4 *)(param_2 + 0x7333c) = *(undefined4 *)(((undefined (*) [16])local_140)[4] + 4)
        ;
        param_2[0xe2] = (metadata_buffer_t)0x1;
        *(longlong *)(param_2 + 0x7332c) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x73334) = SUB168(auVar1 >> 0x40,0);
        *(undefined8 *)(param_2 + 0x7331c) = uVar19;
        *(undefined8 *)(param_2 + 0x73324) = uVar20;
        uVar19 = *(undefined8 *)(((undefined (*) [16])local_140)[5] + 8);
        uVar20 = *(undefined8 *)((undefined (*) [16])local_140)[6];
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[4] + 8);
        *(undefined4 *)(param_2 + 0x73360) = *(undefined4 *)(((undefined (*) [16])local_140)[6] + 8)
        ;
        param_2[0xe3] = (metadata_buffer_t)0x1;
        *(undefined8 *)(param_2 + 0x73350) = uVar19;
        *(undefined8 *)(param_2 + 0x73358) = uVar20;
        *(longlong *)(param_2 + 0x73340) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x73348) = SUB168(auVar1 >> 0x40,0);
        uVar19 = *(undefined8 *)(((undefined (*) [16])local_140)[7] + 0xc);
        uVar20 = *(undefined8 *)(((undefined (*) [16])local_140)[8] + 4);
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[6] + 0xc);
        *(undefined4 *)(param_2 + 0x73384) =
             *(undefined4 *)(((undefined (*) [16])local_140)[8] + 0xc);
        param_2[0xe4] = (metadata_buffer_t)0x1;
        *(undefined8 *)(param_2 + 0x73374) = uVar19;
        *(undefined8 *)(param_2 + 0x7337c) = uVar20;
        *(longlong *)(param_2 + 0x73364) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x7336c) = SUB168(auVar1 >> 0x40,0);
        *(undefined4 *)(param_2 + 0x732f4) = *(undefined4 *)((undefined (*) [16])local_140)[9];
        param_2[0xe0] = (metadata_buffer_t)0x1;
        *(undefined4 *)(param_2 + 0x76f80) = *(undefined4 *)(((undefined (*) [16])local_140)[9] + 4)
        ;
        param_2[0xe7] = (metadata_buffer_t)0x1;
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[10] + 4);
        *(undefined4 *)(param_2 + 0xc678) =
             *(undefined4 *)(((undefined (*) [16])local_140)[0xb] + 4);
        param_2[0x76] = (metadata_buffer_t)0x1;
        *(longlong *)(param_2 + 0xc668) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0xc670) = SUB168(auVar1 >> 0x40,0);
        uVar21 = *(undefined8 *)(((undefined (*) [16])local_140)[0xd] + 8);
        uVar22 = *(undefined8 *)((undefined (*) [16])local_140)[0xe];
        uVar19 = *(undefined8 *)(((undefined (*) [16])local_140)[0xc] + 8);
        uVar20 = *(undefined8 *)((undefined (*) [16])local_140)[0xd];
        auVar1 = *(undefined (*) [16])(((undefined (*) [16])local_140)[0xb] + 8);
        param_2[0xf2] = (metadata_buffer_t)0x1;
        *(undefined8 *)(param_2 + 0x76fd8) = uVar21;
        *(undefined8 *)(param_2 + 0x76fe0) = uVar22;
        *(undefined8 *)(param_2 + 0x76fc8) = uVar19;
        *(undefined8 *)(param_2 + 0x76fd0) = uVar20;
        *(longlong *)(param_2 + 0x76fb8) = SUB168(auVar1,0);
        *(longlong *)(param_2 + 0x76fc0) = SUB168(auVar1 >> 0x40,0);
        if (param_2[0x38] == (metadata_buffer_t)0x0) {
          uVar19 = *(undefined8 *)(((undefined (*) [16])local_140)[9] + 8);
          *(undefined4 *)(param_2 + 0x74aec) = *(undefined4 *)((undefined (*) [16])local_140)[10];
          param_2[0x38] = (metadata_buffer_t)0x1;
          *(undefined8 *)(param_2 + 0x74ae4) = uVar19;
        }
        else if (*(int *)(*(int *)(DAT_0008faa8 + 0x8f848) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0008fab0 + 0x8f860,0x2a65,DAT_0008faac + 0x8f858);
        }
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        (aCStack344,0x80140002);
      if (iVar7 != 0) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
        *(undefined4 *)(param_2 + 0x76f80) = *(undefined4 *)(undefined (*) [16])local_140;
        param_2[0xe7] = (metadata_buffer_t)0x1;
      }
      iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        (aCStack344,0x800e0000);
      if ((iVar7 != 0) &&
         (iVar7 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                            (aCStack344,0x800e0001), iVar7 != 0)) {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
        if (*(char *)(undefined (*) [16])local_140 == '\x01') {
          android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_150);
          local_150 = 0;
          local_138 = 0;
          local_130 = 0;
          uStack332 = *(undefined4 *)*(undefined (*) [12])(undefined (*) [16])local_140;
          local_148 = *(undefined4 *)(*(undefined (*) [12])(undefined (*) [16])local_140 + 4);
          lVar2 = *(longlong *)*(undefined (*) [12])(undefined (*) [16])local_140;
          local_144 = *(undefined4 *)(*(undefined (*) [12])(undefined (*) [16])local_140 + 8);
          auVar3 = *(undefined (*) [12])(undefined (*) [16])local_140;
          uVar9 = *(uint *)*(undefined (*) [12])((int)(undefined (*) [16])local_140 + 0xc);
          if (param_2[0xe4] == (metadata_buffer_t)0x0) {
            local_17c = 0;
          }
          else {
            local_17c = *(uint *)(param_2 + 0x73370);
            local_130 = *(undefined4 *)(param_2 + 0x73374);
            local_138 = (ulonglong)local_17c << 0x20;
          }
          uVar8 = local_130;
          local_140 = (ulonglong)uVar9;
          *(undefined4 *)(param_2 + 0x77018) = local_130;
          *(longlong *)(param_2 + 0x76ff8) = lVar2 << 0x20;
          *(longlong *)(param_2 + 0x77000) = SUB128(auVar3 >> 0x20,0);
          *(ulonglong *)(param_2 + 0x77008) = local_140;
          *(longlong *)(param_2 + 0x77010) = local_138;
          param_2[0x101] = (metadata_buffer_t)0x1;
          iVar7 = *(int *)(DAT_0008fab4 + 0x8f9c8);
          if ((*(int *)(iVar7 + 0x28) != 0) &&
             (mm_camera_debug_log(1,3,DAT_0008fabc + 0x8f9ec,0x2a91,DAT_0008fab8 + 0x8f9d6,uStack332
                                  ,local_148,local_144,uVar9,*(undefined4 *)(this + 0x60)),
             *(int *)(iVar7 + 0x28) != 0)) {
            mm_camera_debug_log(1,3,DAT_0008fac4 + 0x8fa18,0x2a94,DAT_0008fac0 + 0x8fa02,0,0,
                                local_17c,uVar8,*(undefined4 *)(this + 0x60));
          }
          iVar10 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                             (aCStack344,0x800e0002);
          if (iVar10 != 0) {
            android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack364);
            uVar8 = *(undefined4 *)(local_15c + 8);
            uVar11 = *(undefined4 *)(local_15c + 0xc);
            *(undefined4 *)(param_2 + 0x77020) = uVar11;
            *(undefined4 *)(param_2 + 0x7701c) = uVar8;
            param_2[0x102] = (metadata_buffer_t)0x1;
            if (*(int *)(iVar7 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_0008facc + 0x8fa7e,0x2aa1,DAT_0008fac8 + 0x8fa6a,uVar8,
                                  uVar11,*(undefined4 *)(this + 0x60));
            }
          }
        }
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack344);
      goto LAB_0008fa86;
    }
    if (*(int *)(*(int *)(DAT_0008f624 + 0x8f4c4) + 0x20) == 0) goto LAB_0008f4e4;
    uVar8 = 0x29e1;
    iVar6 = DAT_0008f628 + 0x8f4d4;
    iVar7 = DAT_0008f62c + 0x8f4dc;
  }
  mm_camera_debug_log(1,1,iVar7,uVar8,iVar6);
  iVar6 = -0x16;
LAB_0008fa86:
  if (*piVar18 == local_28) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

