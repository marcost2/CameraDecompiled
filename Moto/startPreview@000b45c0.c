
/* qcamera::QCamera2HardwareInterface::startPreview() */

int __thiscall qcamera::QCamera2HardwareInterface::startPreview(QCamera2HardwareInterface *this)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  MotCtrl *this_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  QCameraPerfLock *this_01;
  QCameraParametersIntf *this_02;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  uint local_84;
  int local_80 [2];
  int local_78;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  
  piVar1 = *(int **)(DAT_000b494c + 0xb45ce);
  local_28 = *piVar1;
  piVar8 = *(int **)(DAT_000b4950 + 0xb45da);
  if (*piVar8 != 0) {
    if ((**(byte **)(DAT_000b4954 + 0xb45ea) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b4958 + 0xb45fa) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b49a4 + 0xb4990);
    }
  }
  iVar7 = *(int *)(DAT_000b495c + 0xb4608);
  if (*(int *)(iVar7 + 0x34) != 0) {
    uVar2 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(this + 0x4ac));
    uVar3 = QCameraParametersIntf::getRecordingHintValue((QCameraParametersIntf *)(this + 0x4ac));
    mm_camera_debug_log(1,6,DAT_000b49ac + 0xb463a,0x10a6,DAT_000b49a8 + 0xb462c,uVar2,uVar3);
  }
  this_02 = (QCameraParametersIntf *)(this + 0x4ac);
  local_84 = 0x20;
  this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl(this_02);
  puVar10 = &local_84;
  piVar9 = local_80;
  MotCtrl::motCtrl(this_00,0xe,(void *)0x0,0,piVar9,puVar10);
  local_78 = local_78 + -1;
  if (local_78 != 0) {
    local_78 = 1;
  }
  iVar4 = QCameraParametersIntf::getCameraPosition(this_02);
  if ((iVar4 == 0) && (local_80[0] != 1)) {
    local_78 = local_78 + 2;
  }
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_50 = 0;
  local_48 = 0;
  local_58 = CONCAT44(local_78,0xb);
  local_60 = 0x400000000000;
  QCameraCbNotifier::notifyCallback
            ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_60);
  this_01 = (QCameraPerfLock *)(this + 0x8e0);
  QCameraPerfLock::lock_acq(this_01);
  gettimeofday((timeval *)(this + 0x1ed0),(__timezone_ptr_t)0x0);
  this[0x1f44] = (QCamera2HardwareInterface)0x1;
  updateThermalLevel(this,this + 0xa98);
  *(undefined4 *)(this + 0x1e20) = 0;
  *(undefined4 *)(this + 0x1e1c) = 0;
  iVar4 = QCameraParametersIntf::isZSLMode(this_02);
  if ((iVar4 == 0) || (iVar4 = QCameraParametersIntf::getRecordingHintValue(this_02), iVar4 != 0)) {
    if (*(int **)(this + 0x9bc) == (int *)0x0) {
      iVar4 = -0x80000000;
    }
    else {
      iVar4 = (**(code **)(**(int **)(this + 0x9bc) + 0x14))();
      if (iVar4 == 0) goto LAB_000b478e;
    }
LAB_000b4734:
    if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b49b4 + 0xb474e,0x10e1,DAT_000b49b0 + 0xb4746);
    }
  }
  else {
    if (*(int **)(this + 0x9b4) == (int *)0x0) {
      iVar4 = -0x80000000;
    }
    else {
      iVar4 = (**(code **)(**(int **)(this + 0x9b4) + 0x14))();
    }
    MotMemThrottle::enable(CONCAT44(puVar10,piVar9));
    if (iVar4 != 0) goto LAB_000b4734;
LAB_000b478e:
    if (((-1 < (int)((uint)(byte)this[0x4b4] << 0x1b)) || (*(int **)(this + 0x9d4) == (int *)0x0))
       || (iVar4 = (**(code **)(**(int **)(this + 0x9d4) + 0x14))(), iVar4 == 0)) {
      QCameraParametersIntf::updateOisValue(this_02,true);
      this[0x549] = (QCamera2HardwareInterface)0x1;
      if (*(int *)(this + 0x1db0) == 0) {
        iVar4 = queueDeferredWork((DeferredWorkCmd)this,2);
        *(int *)(this + 0x1db0) = iVar4;
        if (iVar4 != 0) goto LAB_000b480c;
        if (*(int *)(iVar7 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b49c8 + 0xb491c,0x10fb,DAT_000b49c4 + 0xb4910,
                              *(undefined4 *)(this + 0x60));
        }
        QCameraPerfLock::lock_rel(this_01);
LAB_000b4942:
        iVar4 = -0xc;
      }
      else {
LAB_000b480c:
        QCameraParametersIntf::updateModuleInfo(this_02);
        QCameraParametersIntf::updateCalibrationInfo(this_02);
        QCameraPerfLock::lock_rel(this_01);
        if (((int)((uint)(byte)this[0x4b5] << 0x1a) < 0) && (*(int *)(this + 0x5c) == 0)) {
          puVar5 = (undefined4 *)
                   (**(code **)(this + 0x4c8))(0xffffffff,0x43a,1,*(undefined4 *)(this + 0x4d0));
          if (puVar5 == (undefined4 *)0x0) {
            if (*(int *)(iVar7 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000b49d0 + 0xb4940,0x114e,DAT_000b49cc + 0xb4938);
            }
            goto LAB_000b4942;
          }
          puVar6 = (undefined4 *)*puVar5;
          if (puVar6 == (undefined4 *)0x0) {
            if (*(int *)(iVar7 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000b49d8 + 0xb497a,0x1154,DAT_000b49d4 + 0xb4972);
            }
            iVar4 = -0x80000000;
            goto LAB_000b4758;
          }
          puVar6[1] = 0x43a;
          *puVar6 = 4;
          __aeabi_memcpy8(puVar6 + 2,
                          (void *)(*(int *)(*(int *)(DAT_000b49dc + 0xb4886) +
                                           *(int *)(this + 0x5c) * 4) + 0x5084),0x432);
          local_30 = 0;
          local_48 = 0;
          local_58 = 0;
          local_60 = 0x200000000001;
          local_40 = ZEXT48(puVar5) << 0x20;
          local_38 = CONCAT44(*(undefined4 *)(DAT_000b49e0 + 0xb48c6),this);
          local_50 = ZEXT48(puVar5);
          iVar4 = QCameraCbNotifier::notifyCallback
                            ((QCameraCbNotifier *)(this + 0x854),
                             (qcamera_callback_argm_t *)&local_60);
          if (iVar4 != 0) {
            if (*(int *)(iVar7 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000b49e8 + 0xb48f4,0x1164,DAT_000b49e4 + 0xb48ec);
            }
            (*(code *)puVar5[3])(puVar5);
          }
        }
        else {
          iVar4 = 0;
        }
        if (*(int *)(iVar7 + 0x34) != 0) {
          mm_camera_debug_log(1,6,DAT_000b49f0 + 0xb484e,0x1169,DAT_000b49ec + 0xb4844,iVar4);
        }
      }
      goto LAB_000b4758;
    }
    if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b49bc + 0xb47c0,0x10ea,DAT_000b49b8 + 0xb47b8);
    }
    if (*(int **)(this + 0x9b4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x9b4) + 0x18))();
    }
    if (*(int **)(this + 0x9bc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x9bc) + 0x18))();
    }
  }
  QCameraPerfLock::lock_rel(this_01);
LAB_000b4758:
  if (*piVar8 != 0) {
    if ((**(byte **)(DAT_000b49f4 + 0xb4764) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b49f8 + 0xb4774) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

