
/* qcamera::QCameraPostProcessor::sendDataNotify(int, camera_memory*, unsigned char,
   camera_frame_metadata*, qcamera::qcamera_release_data_t*, unsigned int) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::sendDataNotify
          (QCameraPostProcessor *this,int param_1,camera_memory *param_2,uchar param_3,
          camera_frame_metadata *param_4,qcamera_release_data_t *param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  int local_20;
  
  piVar4 = *(int **)(DAT_000d3ffc + 0xd3f14);
  local_20 = *piVar4;
  piVar1 = (int *)malloc(0x20);
  if (piVar1 == (int *)0x0) {
    if (*(int *)(*(int *)(DAT_000d4000 + 0xd3fc4) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d4008 + 0xd3fdc,0x334,DAT_000d4004 + 0xd3fd4);
    }
    uVar3 = 0xfffffff4;
  }
  else {
    *piVar1 = param_1;
    piVar1[1] = (int)param_2;
    piVar1[2] = (uint)param_3;
    piVar1[3] = (int)param_4;
    *(undefined8 *)(piVar1 + 4) = 0;
    *(undefined8 *)(piVar1 + 6) = 0;
    if (param_5 != (qcamera_release_data_t *)0x0) {
      uVar5 = *(undefined8 *)(param_5 + 8);
      *(undefined8 *)(piVar1 + 4) = *(undefined8 *)param_5;
      *(undefined8 *)(piVar1 + 6) = uVar5;
    }
    local_40 = 0;
    local_50 = 0;
    local_58 = 3;
    local_28 = (ulonglong)param_6;
    local_38 = CONCAT44(piVar1,param_4);
    local_48 = ZEXT48(param_2);
    local_30 = CONCAT44(*(undefined4 *)(DAT_000d400c + 0xd3f7c),this);
    local_54 = param_1;
    iVar2 = QCameraCbNotifier::notifyCallback
                      ((QCameraCbNotifier *)(*(int *)(this + 8) + 0x854),
                       (qcamera_callback_argm_t *)&local_58);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      if (*(int *)(*(int *)(DAT_000d4010 + 0xd3f92) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d4018 + 0xd3faa,0x34c,DAT_000d4014 + 0xd3fa2);
      }
      uVar3 = 0x80000000;
      releaseNotifyData(piVar1,this,-0x80000000);
    }
  }
  if (*piVar4 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

