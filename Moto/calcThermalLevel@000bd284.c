
/* qcamera::QCamera2HardwareInterface::calcThermalLevel(qcamera::qcamera_thermal_level_enum_t, int,
   int, float const&, float const&, cam_fps_range_t&, msm_vfe_frame_skip_pattern&, bool) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::calcThermalLevel
          (QCamera2HardwareInterface *this,qcamera_thermal_level_enum_t param_1,int param_2,
          int param_3,float *param_4,float *param_5,cam_fps_range_t *param_6,
          msm_vfe_frame_skip_pattern *param_7,bool param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  undefined4 uVar6;
  qcamera_thermal_level_enum_t qVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined3 in_stack_00000011;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined4 local_50;
  undefined4 local_4c;
  int local_44;
  
  piVar8 = *(int **)(DAT_000bd62c + 0xbd29e);
  local_44 = *piVar8;
  __android_log_print(3,DAT_000bd630 + 0xbd2b4,DAT_000bd634 + 0xbd2b6,DAT_000bd638 + 0xbd2b8,param_1
                     );
  iVar1 = QCameraParametersIntf::getRecordingHintValueUnlocked
                    ((QCameraParametersIntf *)(this + 0x4ac));
  qVar7 = param_1;
  if (iVar1 != 0) {
    qVar7 = (qcamera_thermal_level_enum_t)0x0;
  }
  fVar16 = (float)(longlong)param_3;
  fVar15 = (float)(longlong)param_2;
  if (2 < (byte)param_1) {
    qVar7 = param_1;
  }
  iVar1 = *(int *)(DAT_000bd63c + 0xbd2e6);
  if (*(int *)(iVar1 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000bd6a8 + 0xbd32c,0x2ba1,DAT_000bd640 + 0xbd30a,qVar7,
                        (double)(longlong)param_2,(double)(longlong)param_3,(double)*param_4,
                        (double)*param_5);
  }
  fVar10 = DAT_000bd6a4;
  fVar11 = DAT_000bd6a0;
  fVar9 = DAT_000bd69c;
  switch(qVar7) {
  case (qcamera_thermal_level_enum_t)0x0:
    fVar11 = fVar15 / DAT_000bd69c;
    *(float *)(param_6 + 4) = fVar16 / DAT_000bd69c;
    *(float *)param_6 = fVar11;
    *(float *)(param_6 + 8) = *param_4 / fVar9;
    *(float *)(param_6 + 0xc) = *param_5 / fVar9;
    *(undefined4 *)param_7 = 0;
    break;
  case (qcamera_thermal_level_enum_t)0x1:
    fVar11 = fVar16 / DAT_000bd69c - (fVar16 / DAT_000bd69c) * DAT_000bd6a4;
    fVar13 = fVar15 / DAT_000bd69c - (fVar15 / DAT_000bd69c) * DAT_000bd6a4;
    *(float *)(param_6 + 4) = fVar11;
    *(float *)param_6 = fVar13;
    fVar12 = *param_4 / fVar9;
    *(float *)(param_6 + 8) = fVar12;
    fVar12 = fVar12 - fVar12 * fVar10;
    fVar14 = *param_5;
    *(float *)(param_6 + 8) = fVar12;
    fVar9 = fVar14 / fVar9 - (fVar14 / fVar9) * fVar10;
    *(float *)(param_6 + 0xc) = fVar9;
    if ((int)((uint)(fVar13 < 1.0) << 0x1f) < 0) {
      *(undefined4 *)param_6 = 0x3f800000;
    }
    if ((int)((uint)(fVar11 < 1.0) << 0x1f) < 0) {
      *(undefined4 *)(param_6 + 4) = 0x3f800000;
    }
    if ((int)((uint)(fVar12 < 1.0) << 0x1f) < 0) {
      *(undefined4 *)(param_6 + 8) = 0x3f800000;
    }
    if ((int)((uint)(fVar9 < 1.0) << 0x1f) < 0) {
      *(undefined4 *)(param_6 + 0xc) = 0x3f800000;
    }
    *(undefined4 *)param_7 = 1;
    break;
  case (qcamera_thermal_level_enum_t)0x2:
    fVar10 = fVar16 / DAT_000bd69c - (fVar16 / DAT_000bd69c) * DAT_000bd6a0;
    fVar13 = fVar15 / DAT_000bd69c - (fVar15 / DAT_000bd69c) * DAT_000bd6a0;
    *(float *)(param_6 + 4) = fVar10;
    *(float *)param_6 = fVar13;
    fVar12 = *param_4 / fVar9;
    *(float *)(param_6 + 8) = fVar12;
    fVar12 = fVar12 - fVar12 * fVar11;
    fVar14 = *param_5;
    *(float *)(param_6 + 8) = fVar12;
    fVar9 = fVar14 / fVar9 - (fVar14 / fVar9) * fVar11;
    *(float *)(param_6 + 0xc) = fVar9;
    if ((int)((uint)(fVar13 < 1.0) << 0x1f) < 0) {
      *(undefined4 *)param_6 = 0x3f800000;
    }
    if ((int)((uint)(fVar10 < 1.0) << 0x1f) < 0) {
      *(undefined4 *)(param_6 + 4) = 0x3f800000;
    }
    if ((int)((uint)(fVar12 < 1.0) << 0x1f) < 0) {
      *(undefined4 *)(param_6 + 8) = 0x3f800000;
    }
    if ((int)((uint)(fVar9 < 1.0) << 0x1f) < 0) {
      *(undefined4 *)(param_6 + 0xc) = 0x3f800000;
    }
    *(undefined4 *)param_7 = 3;
    break;
  case (qcamera_thermal_level_enum_t)0x3:
    fVar9 = fVar15 / DAT_000bd69c;
    *(float *)param_6 = fVar9;
    *(float *)(param_6 + 4) = fVar9;
    iVar2 = *(int *)(*(int *)(DAT_000bd6ac + 0xbd4be) + *(int *)(this + 0x5c) * 4);
    uVar3 = *(uint *)(iVar2 + 0x274);
    if (uVar3 != 0) {
      pfVar4 = (float *)(iVar2 + 0x278);
      uVar5 = 0;
      do {
        fVar11 = *pfVar4;
        if ((int)((uint)(fVar11 < fVar9) << 0x1f) < 0) {
          *(float *)param_6 = fVar11;
          *(float *)(param_6 + 4) = fVar11;
          uVar3 = *(uint *)(iVar2 + 0x274);
          fVar9 = fVar11;
        }
        pfVar4 = pfVar4 + 4;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    *(undefined4 *)param_7 = 0xc;
    *(undefined4 *)(param_6 + 8) = *(undefined4 *)param_6;
    *(undefined4 *)(param_6 + 0xc) = *(undefined4 *)(param_6 + 4);
    break;
  default:
    if (*(int *)(iVar1 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000bd6d8 + 0xbd622,0x2c15,DAT_000bd6d4 + 0xbd618,qVar7);
    }
    uVar6 = 0xffffffea;
    goto LAB_000bd5f0;
  case (qcamera_thermal_level_enum_t)0xa:
    if (*(int *)(iVar1 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000bd6d0 + 0xbd65c,0x2c0f,DAT_000bd6cc + 0xbd654);
    }
    uVar6 = 0;
    local_50 = 0;
    local_60 = 0;
    uStack88 = 0;
    local_4c = 0;
    local_70 = 0;
    uStack104 = 0;
    local_78 = 100;
    local_80 = 0x100000000;
    QCameraCbNotifier::notifyCallback
              ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_80);
    goto LAB_000bd5f0;
  }
  fVar9 = DAT_000bd69c;
  if (_param_8 == 0) {
LAB_000bd552:
    if (*(int *)(iVar1 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000bd6bc + 0xbd5a2,0x2c25,DAT_000bd6b8 + 0xbd588,qVar7,
                          (double)*(float *)param_6,(double)*(float *)(param_6 + 4),
                          (double)*(float *)(param_6 + 8),(double)*(float *)(param_6 + 0xc),
                          *(undefined4 *)param_7);
    }
  }
  else {
    fVar15 = fVar15 / DAT_000bd69c;
    *(float *)(param_6 + 4) = fVar16 / DAT_000bd69c;
    *(float *)param_6 = fVar15;
    *(float *)(param_6 + 8) = *param_4 / fVar9;
    *(float *)(param_6 + 0xc) = *param_5 / fVar9;
    *(undefined4 *)param_7 = 0;
    if (*(int *)(iVar1 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000bd6b4 + 0xbd550,0x2c21,DAT_000bd6b0 + 0xbd548);
      goto LAB_000bd552;
    }
  }
  __android_log_print(4,DAT_000bd6c0 + 0xbd5e8,DAT_000bd6c4 + 0xbd5ea,DAT_000bd6c8 + 0xbd5ec,qVar7);
  uVar6 = 0;
LAB_000bd5f0:
  if (*piVar8 == local_44) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

