
/* qcamera::QCamera3HardwareInterface::dump(camera3_device const*, int) */

void qcamera::QCamera3HardwareInterface::dump(camera3_device *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *local_130 [68];
  undefined4 local_20;
  undefined local_1c;
  int local_18;
  
  piVar5 = *(int **)(DAT_0007ef64 + 0x7eeba);
  local_18 = *piVar5;
  local_1c = 0;
  local_20 = 0;
  local_130[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_130,(char *)(DAT_0007ef68 + 0x7eed2));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_130);
  getLogLevel();
  iVar4 = *(int *)(DAT_0007ef6c + 0x7eee4);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007ef74 + 0x7eefc,0x312a,DAT_0007ef70 + 0x7eef4);
  }
  if (*(QCamera3HardwareInterface **)(param_1 + 0x44) == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar4 + 0x20) == 0) goto LAB_0007ef3a;
    uVar1 = 1;
    uVar3 = 0x312e;
    iVar4 = DAT_0007ef78 + 0x7ef30;
    iVar2 = DAT_0007ef7c + 0x7ef38;
  }
  else {
    dump(*(QCamera3HardwareInterface **)(param_1 + 0x44),param_2);
    if (*(int *)(iVar4 + 0x2c) == 0) goto LAB_0007ef3a;
    uVar1 = 4;
    uVar3 = 0x3133;
    iVar4 = DAT_0007ef80 + 0x7ef18;
    iVar2 = DAT_0007ef84 + 0x7ef20;
  }
  mm_camera_debug_log(1,uVar1,iVar2,uVar3,iVar4);
LAB_0007ef3a:
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_130);
  if (local_130[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_130[0] + *(int *)(*local_130[0] + -0xc)));
  }
  if (*piVar5 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

