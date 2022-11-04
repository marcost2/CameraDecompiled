
/* qcamera::QCamera2HardwareInterface::processHDRData(cam_asd_hdr_scene_data_t) */

int qcamera::QCamera2HardwareInterface::processHDRData(cam_asd_hdr_scene_data_t param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  int in_r1;
  float in_r2;
  int *piVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  longlong lStack56;
  undefined8 local_30;
  undefined8 uStack40;
  int local_1c;
  
  piVar5 = *(int **)(DAT_000ba660 + 0xba4e4);
  local_1c = *piVar5;
  if (((in_r1 == 0) || ((double)in_r2 < DAT_000ba658)) ||
     (iVar1 = QCameraParametersIntf::isAutoHDREnabled((QCameraParametersIntf *)(param_1 + 0x4ac)),
     iVar1 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  *(bool *)(param_1 + 0xa9d) = bVar4;
  QCameraParametersIntf::setHDRSceneEnable((QCameraParametersIntf *)(param_1 + 0x4ac),bVar4);
  if ((int)((uint)*(byte *)(param_1 + 0x4b5) << 0x1a) < 0) {
    puVar2 = (undefined4 *)
             (**(code **)(param_1 + 0x4c8))(0xffffffff,0xc,1,*(undefined4 *)(param_1 + 0x4d0));
    if (puVar2 == (undefined4 *)0x0) {
      if (*(int *)(*(int *)(DAT_000ba664 + 0xba5f8) + 0x20) == 0) {
        iVar1 = -0xc;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000ba66c + 0xba610,0x1f88,DAT_000ba668 + 0xba608);
        iVar1 = -0xc;
      }
      goto LAB_000ba642;
    }
    puVar3 = (undefined4 *)*puVar2;
    if (puVar3 == (undefined4 *)0x0) {
      if (*(int *)(*(int *)(DAT_000ba670 + 0xba61e) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000ba678 + 0xba636,0x1f8e,DAT_000ba674 + 0xba62e);
      }
      iVar1 = -0x80000000;
      goto LAB_000ba642;
    }
    puVar3[1] = 4;
    *puVar3 = 3;
    puVar3[2] = (uint)*(byte *)(param_1 + 0xa9d);
    uStack40 = 0;
    local_40 = 0;
    local_50 = 0;
    local_54 = 0x2000;
    local_58 = 1;
    lStack56 = ZEXT48(puVar2) << 0x20;
    local_30 = CONCAT44(*(undefined4 *)(DAT_000ba67c + 0xba5b4),param_1);
    local_48 = ZEXT48(puVar2);
    iVar1 = QCameraCbNotifier::notifyCallback
                      ((QCameraCbNotifier *)(param_1 + 0x854),(qcamera_callback_argm_t *)&local_58);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_000ba680 + 0xba5d0) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000ba688 + 0xba5e8,0x1fa0,DAT_000ba684 + 0xba5e0);
      }
      (*(code *)puVar2[3])(puVar2);
    }
  }
  else {
    iVar1 = 0;
  }
  if (*(int *)(*(int *)(DAT_000ba68c + 0xba52c) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000ba694 + 0xba556,0x1fa7,DAT_000ba690 + 0xba548);
  }
LAB_000ba642:
  if (*piVar5 == local_1c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

