
/* qcamera::QCamera3HardwareInterface::setHalFpsRange(android::hardware::camera::common::V1_0::helper::CameraMetadata
   const&, metadata_buffer_t*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::setHalFpsRange
          (QCamera3HardwareInterface *this,CameraMetadata *param_1,metadata_buffer_t *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CameraMetadata aCStack72 [16];
  int *local_38;
  int local_34;
  
  piVar4 = *(int **)(DAT_00047d28 + 0x47ae4);
  local_34 = *piVar4;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack72,(uint *)param_1);
  fVar8 = (float)(longlong)*local_38;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::find(aCStack72,(uint *)param_1);
  fVar3 = (float)local_38[1];
  iVar5 = *(int *)(DAT_00047d2c + 0x47b22);
  fVar7 = (float)(longlong)(int)fVar3;
  fVar6 = fVar3;
  if (*(int *)(iVar5 + 0x2c) != 0) {
    fVar6 = (float)mm_camera_debug_log();
  }
  this[0x117878] = (QCamera3HardwareInterface)0x0;
  if (this[0x117880] == (QCamera3HardwareInterface)0x1) {
    iVar1 = lookupHalName_float_qcamera__QCamera3HardwareInterface__QCameraMap_int_cam_hfr_mode_t__
                      (*(QCameraMap **)(DAT_00047d38 + 0x47b70),8,fVar6);
    fVar8 = fVar7;
    if (iVar1 == -2) {
      if (param_2 == (metadata_buffer_t *)0x0) {
        iVar5 = *(int *)(iVar5 + 0x20);
joined_r0x00047cc4:
        if (iVar5 != 0) {
          mm_camera_debug_log();
        }
        uVar2 = 0xffffffea;
        goto LAB_00047d0a;
      }
    }
    else {
      if (param_2 == (metadata_buffer_t *)0x0) {
        iVar5 = *(int *)(iVar5 + 0x20);
        goto joined_r0x00047cc4;
      }
      *(int *)(param_2 + 0x73218) = iVar1;
      param_2[0x25] = (metadata_buffer_t)0x1;
      if (0x77 < (int)fVar3) {
        if ((DAT_00047d24 <= *(float *)(this + 0x11787c)) && (*(float *)(this + 0x11787c) != fVar7))
        {
          this[0x1178c8] = (QCamera3HardwareInterface)0x1;
        }
        fVar6 = ROUND(fVar7 / 30.0);
        *(float *)(this + 0x11787c) = fVar7;
        if (7 < (uint)fVar6) {
          fVar6 = 1.121039e-44;
        }
        this[0x117878] = SUB41(fVar6,0);
      }
      if (*(int *)(iVar5 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
    }
  }
  else {
    if (param_2 == (metadata_buffer_t *)0x0) {
      iVar5 = *(int *)(iVar5 + 0x20);
      goto joined_r0x00047cc4;
    }
    *(undefined4 *)(param_2 + 0x73218) = 0;
    param_2[0x25] = (metadata_buffer_t)0x1;
  }
  param_2[10] = (metadata_buffer_t)0x1;
  *(float *)(param_2 + 0x72df8) = fVar7;
  *(float *)(param_2 + 0x72df4) = fVar8;
  *(float *)(param_2 + 0x72df0) = fVar7;
  *(float *)(param_2 + 0x72dec) = fVar8;
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  uVar2 = 0;
LAB_00047d0a:
  if (*piVar4 == local_34) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

