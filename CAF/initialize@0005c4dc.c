
/* qcamera::QCamera3ReprocessChannel::initialize(cam_is_type_t) */

undefined4
qcamera::QCamera3ReprocessChannel::initialize(camera3_device *param_1,camera3_callback_ops *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack32;
  int local_18;
  
  piVar3 = *(int **)(DAT_0005c54c + 0x5c4ea);
  local_18 = *piVar3;
  uStack32 = 0;
  local_2c = 1;
  local_28 = 0x1000000;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x34))
                    (*(undefined4 *)(param_1 + 0x48),&local_2c,0,param_1);
  *(int *)(param_1 + 0x54) = iVar1;
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_0005c550 + 0x5c51e) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    uVar2 = 0x80000000;
  }
  else {
    *(camera3_callback_ops **)(param_1 + 0x74) = param_2;
    uVar2 = 0;
  }
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

