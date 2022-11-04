
/* qcamera::QCameraMuxer::getCameraInfo(int, camera_info*, cam_sync_type_t*) */

undefined4
qcamera::QCameraMuxer::getCameraInfo(int param_1,camera_info *param_2,cam_sync_type_t *param_3)

{
  camera_info *extraout_r1;
  camera_info *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000c0608 + 0xc054c);
  pcVar1 = param_2;
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c0610 + 0xc0566,0x7a6,DAT_000c060c + 0xc055c,param_2);
    pcVar1 = extraout_r1;
  }
  if (((camera_info *)(uint)*(byte *)(param_1 + 0x3a) == (camera_info *)0x0 ||
       param_3 == (cam_sync_type_t *)0x0) ||
     ((camera_info *)(uint)*(byte *)(param_1 + 0x3a) <= param_2)) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar3 = 0x7ab;
    iVar4 = DAT_000c0614 + 0xc0582;
    iVar2 = DAT_000c0618 + 0xc0590;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 != 0) {
      pcVar1 = *(camera_info **)(param_1 + 0x2c);
    }
    if (iVar2 != 0 && pcVar1 != (camera_info *)0x0) {
      iVar2 = iVar2 + (int)param_2 * 0x7c;
      uVar3 = QCamera3HardwareInterface::getCamInfo
                        (*(uint *)(iVar2 + (uint)*(byte *)(iVar2 + 0x59) * 4 + 0x5c),
                         (camera_info *)param_3);
      *(undefined4 *)(param_3 + 8) = 0x100;
      if (*(int *)(iVar4 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c0628 + 0xc0602,0x7ba,DAT_000c0624 + 0xc05fa);
        return uVar3;
      }
      return uVar3;
    }
    if (*(int *)(iVar4 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar3 = 0x7b0;
    iVar4 = DAT_000c061c + 0xc05c0;
    iVar2 = DAT_000c0620 + 0xc05c8;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar4);
  return 0xffffffed;
}

