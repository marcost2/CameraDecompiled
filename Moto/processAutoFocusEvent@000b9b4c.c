
/* qcamera::QCamera2HardwareInterface::processAutoFocusEvent(cam_auto_focus_data_t&) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::processAutoFocusEvent
          (QCamera2HardwareInterface *this,cam_auto_focus_data_t *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  QCameraParametersIntf *this_00;
  undefined4 uVar5;
  QCameraPicChannel *pQVar6;
  int *piVar7;
  int iVar8;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar7 = *(int **)(DAT_000b9ecc + 0xb9b5c);
  local_28 = *piVar7;
  iVar8 = *(int *)(DAT_000b9ed0 + 0xb9b6a);
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b9ed8 + 0xb9b86,0x1e0e,DAT_000b9ed4 + 0xb9b7e);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::getRelatedCamSyncInfo(this_00);
  if (*(int *)(iVar1 + 8) == 1) {
    if (*(int *)(iVar8 + 0x28) == 0) {
      uVar5 = 0;
    }
    else {
      mm_camera_debug_log(1,3,DAT_000b9ee0 + 0xb9bb6,0x1e12,DAT_000b9edc + 0xb9bae);
      uVar5 = 0;
    }
    goto LAB_000b9f4e;
  }
  iVar1 = QCameraParametersIntf::getFocusMode(this_00);
  *(short *)(this + 0x1ecc) = (short)*(undefined4 *)param_1;
  if (*(int *)(this + 0x1ef0) != 0) {
    gettimeofday((timeval *)(this + 0x1ef8),(__timezone_ptr_t)0x0);
    iVar3 = ((*(int *)(this + 0x1efc) +
             (*(int *)(this + 0x1ef8) - *(int *)(this + 0x1ef0)) * 1000000) -
            *(int *)(this + 0x1ef4)) / 1000;
    *(int *)(this + 0x1f30) = iVar3;
    __android_log_print(3,DAT_000b9f8c + 0xb9c32,DAT_000b9f90 + 0xb9c34,DAT_000b9f94 + 0xb9c36,iVar3
                       );
    *(int *)(this + 0x1ef0) = 0;
    *(undefined4 *)(this + 0x1ef4) = 0;
  }
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b9f9c + 0xb9c6c,0x1e21,DAT_000b9f98 + 0xb9c5c,iVar1,
                        *(undefined4 *)param_1,param_1[0x24]);
  }
  if (iVar1 - 6U < 2) {
    uVar2 = *(uint *)param_1;
    if (*(int *)(param_1 + 0x14) != 2 || uVar2 != 0) {
      if (((6 < uVar2) || ((1 << (uVar2 & 0xff) & 0x46U) == 0)) ||
         (this[0xa9c] == (QCamera2HardwareInterface)0x0)) {
        if ((this[0x1e24] != (QCamera2HardwareInterface)0x0 || uVar2 != 1) ||
           (param_1[0x24] == (cam_auto_focus_data_t)0x0)) {
          if ((uVar2 < 7) && ((1 << (uVar2 & 0xff) & 0x74U) != 0)) {
            QCameraParametersIntf::updateFocusDistances
                      (this_00,(cam_focus_distances_info_t *)(param_1 + 4));
            iVar1 = QCameraParametersIntf::isZSLMode(this_00);
            if (((iVar1 != 0) && (param_1[0x1c] != (cam_auto_focus_data_t)0x0)) &&
               (pQVar6 = *(QCameraPicChannel **)(this + 0x9b4), pQVar6 != (QCameraPicChannel *)0x0))
            {
              uVar2 = *(uint *)(param_1 + 0x20);
              if (*(int *)(iVar8 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000b9fbc + 0xb9dc6,0x1e7e,DAT_000b9fb8 + 0xb9dbc,uVar2);
              }
              QCameraPicChannel::flushSuperbuffer(pQVar6,uVar2);
            }
            if ((this[0xa9c] != (QCamera2HardwareInterface)0x0) && (*(int *)(iVar8 + 0x34) != 0)) {
              mm_camera_debug_log(1,6,DAT_000b9fc4 + 0xb9df0,0x1e84,DAT_000b9fc0 + 0xb9de8);
            }
            local_40 = 0;
            uStack56 = 0;
            local_50 = 0;
            uStack72 = 0;
            local_2c = 0;
            local_30 = 0;
            uVar2 = count_leading_zeroes(*(int *)param_1 - 2U & 0xfffffffd);
            local_60 = 0x400000000;
            local_58 = (ulonglong)(uVar2 >> 5);
            QCameraCbNotifier::notifyCallback
                      ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_60);
            uVar2 = *(uint *)param_1;
          }
          iVar1 = uVar2 - 1;
          uVar2 = 0x800;
LAB_000b9e66:
          local_2c = 0;
          local_30 = 0;
          uStack56 = 0;
          local_40 = 0;
          uStack72 = 0;
          local_50 = 0;
          local_60 = (ulonglong)uVar2 << 0x20;
          uVar2 = count_leading_zeroes(iVar1);
          local_58 = (ulonglong)(uVar2 >> 5);
          uVar5 = QCameraCbNotifier::notifyCallback
                            ((QCameraCbNotifier *)(this + 0x854),
                             (qcamera_callback_argm_t *)&local_60);
          goto LAB_000b9f20;
        }
        if (*(int *)(iVar8 + 0x2c) != 0) {
          uVar5 = 4;
          uVar4 = 0x1e69;
          iVar1 = DAT_000b9fb0 + 0xb9f7e;
          iVar3 = DAT_000b9fb4 + 0xb9f86;
          goto LAB_000b9e9a;
        }
      }
      goto LAB_000b9e9e;
    }
    local_58 = 0;
LAB_000b9f0e:
    local_2c = 0;
    local_30 = 0;
    uStack56 = 0;
    local_40 = 0;
    uStack72 = 0;
    local_50 = 0;
    local_60 = 0x400000000;
    uVar5 = QCameraCbNotifier::notifyCallback
                      ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_60);
    this[0xa9c] = (QCamera2HardwareInterface)0x0;
  }
  else {
    if (iVar1 == 3 || iVar1 == 1) {
      if (this[0xa9c] != (QCamera2HardwareInterface)0x0) {
        uVar2 = *(uint *)param_1;
        if (*(int *)(param_1 + 0x14) == 2 && uVar2 == 0) {
          local_58 = 1;
          goto LAB_000b9f0e;
        }
        if ((6 < uVar2) || ((0x4fU >> (uVar2 & 0xff) & 1) == 0)) {
          QCameraParametersIntf::updateFocusDistances
                    (this_00,(cam_focus_distances_info_t *)(param_1 + 4));
          iVar1 = QCameraParametersIntf::isZSLMode(this_00);
          if ((iVar1 != 0) &&
             ((param_1[0x1c] != (cam_auto_focus_data_t)0x0 &&
              (pQVar6 = *(QCameraPicChannel **)(this + 0x9b4), pQVar6 != (QCameraPicChannel *)0x0)))
             ) {
            uVar2 = *(uint *)(param_1 + 0x20);
            if (*(int *)(iVar8 + 0x2c) != 0) {
              mm_camera_debug_log(1,4,DAT_000b9fa4 + 0xb9cea,0x1e4a,DAT_000b9fa0 + 0xb9ce0,uVar2);
            }
            QCameraPicChannel::flushSuperbuffer(pQVar6,uVar2);
          }
          if (*(int *)(iVar8 + 0x34) != 0) {
            mm_camera_debug_log(1,6,DAT_000b9fac + 0xb9d0e,0x1e50,DAT_000b9fa8 + 0xb9d06);
          }
          iVar1 = *(int *)param_1 + -4;
          uVar2 = 4;
          goto LAB_000b9e66;
        }
      }
    }
    else if (*(int *)(iVar8 + 0x28) != 0) {
      uVar5 = 3;
      uVar4 = 0x1e91;
      iVar1 = DAT_000b9fc8 + 0xb9e92;
      iVar3 = DAT_000b9fcc + 0xb9e9c;
LAB_000b9e9a:
      mm_camera_debug_log(1,uVar5,iVar3,uVar4,iVar1);
    }
LAB_000b9e9e:
    uVar5 = 0;
  }
LAB_000b9f20:
  if ((*(uint *)param_1 & 0xfffffffe) == 4) {
    this[0xa9c] = (QCamera2HardwareInterface)0x0;
  }
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b9fd4 + 0xb9f4c,0x1e9b,DAT_000b9fd0 + 0xb9f44);
  }
LAB_000b9f4e:
  if (*piVar7 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

