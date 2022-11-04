
/* qcamera::QCamera3HardwareInterface::setHalFpsRange(android::hardware::camera::common::V1_0::helper::CameraMetadata
   const&, metadata_buffer_t*) */

void __thiscall
qcamera::QCamera3HardwareInterface::setHalFpsRange
          (QCamera3HardwareInterface *this,CameraMetadata *param_1,metadata_buffer_t *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  QCamera3HardwareInterface *pQVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined auStack72 [16];
  int *local_38;
  int local_34;
  
  piVar5 = *(int **)(DAT_0008ebbc + 0x8e960);
  local_34 = *piVar5;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack72);
  fVar9 = (float)(longlong)*local_38;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack72);
  pQVar4 = this + 0x117f20;
  iVar3 = local_38[1];
  iVar6 = *(int *)(DAT_0008ebc0 + 0x8e994);
  fVar8 = (float)(longlong)iVar3;
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008ebc8 + 0x8e9c8,0x2aec,DAT_0008ebc4 + 0x8e9c0);
  }
  *pQVar4 = (QCamera3HardwareInterface)0x0;
  if (this[0x117f28] == (QCamera3HardwareInterface)0x1) {
    fVar9 = fVar8;
    if (iVar3 < 0xb4) {
      if (iVar3 < 0x78) {
        if (iVar3 == 0x3c) {
          iVar1 = 0;
        }
        else {
          if (iVar3 != 0x5a) goto LAB_0008eb82;
          iVar1 = 1;
        }
      }
      else if (iVar3 == 0x78) {
        iVar1 = 2;
      }
      else {
        if (iVar3 != 0x96) goto LAB_0008eb82;
        iVar1 = 3;
      }
joined_r0x0008ea6e:
      if (param_2 == (metadata_buffer_t *)0x0) goto LAB_0008ea3e;
      uVar2 = *(undefined4 *)(*(int *)(DAT_0008ebcc + 0x8ea76) + iVar1 * 8 + 4);
      *(undefined4 *)(param_2 + 0x73570) = uVar2;
      param_2[0x25] = (metadata_buffer_t)0x1;
      if (0x77 < iVar3) {
        if ((DAT_0008ebb8 <= *(float *)(this + 0x117f24)) && (*(float *)(this + 0x117f24) != fVar8))
        {
          this[0x117f7c] = (QCamera3HardwareInterface)0x1;
        }
        fVar7 = ROUND(fVar8 / 30.0);
        *(float *)(this + 0x117f24) = fVar8;
        if (7 < (uint)fVar7) {
          fVar7 = 1.121039e-44;
        }
        *pQVar4 = SUB41(fVar7,0);
      }
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008ebd4 + 0x8eaf8,0x2b2a,DAT_0008ebd0 + 0x8eaea,uVar2,*pQVar4);
      }
LAB_0008eafe:
      param_2[10] = (metadata_buffer_t)0x1;
      *(float *)(param_2 + 0x72ea8) = fVar8;
      *(float *)(param_2 + 0x72ea4) = fVar9;
      *(float *)(param_2 + 0x72ea0) = fVar8;
      *(float *)(param_2 + 0x72e9c) = fVar9;
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008ebe4 + 0x8eb68,0x2b39,DAT_0008ebe0 + 0x8eb60);
      }
      uVar2 = 0;
      goto LAB_0008eb6c;
    }
    if (0xef < iVar3) {
      if (iVar3 == 0xf0) {
        iVar1 = 6;
      }
      else {
        if (iVar3 != 0x1e0) goto LAB_0008eb82;
        iVar1 = 7;
      }
      goto joined_r0x0008ea6e;
    }
    if (iVar3 == 0xb4) {
      iVar1 = 4;
      goto joined_r0x0008ea6e;
    }
    if (iVar3 == 0xd2) {
      iVar1 = 5;
      goto joined_r0x0008ea6e;
    }
LAB_0008eb82:
    if (*(int *)(iVar6 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008ebec + 0x8eba4,0x1911,DAT_0008ebe8 + 0x8eb9c);
    }
    if (param_2 != (metadata_buffer_t *)0x0) goto LAB_0008eafe;
    uVar2 = 10;
  }
  else {
    if (param_2 != (metadata_buffer_t *)0x0) {
      *(undefined4 *)(param_2 + 0x73570) = 0;
      param_2[0x25] = (metadata_buffer_t)0x1;
      goto LAB_0008eafe;
    }
LAB_0008ea3e:
    uVar2 = 0x25;
  }
  __android_log_print(6,DAT_0008ebd8 + 0x8ea4e,DAT_0008ebdc + 0x8ea50,0,uVar2);
  uVar2 = 0xffffffea;
LAB_0008eb6c:
  if (*piVar5 != local_34) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

