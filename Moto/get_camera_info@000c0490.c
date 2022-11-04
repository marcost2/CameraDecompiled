
/* qcamera::QCameraMuxer::get_camera_info(int, camera_info*) */

undefined4 qcamera::QCameraMuxer::get_camera_info(int param_1,camera_info *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000c051c + 0xc049e);
  if (*(int *)(iVar2 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c0524 + 0xc04b4,0xde,DAT_000c0520 + 0xc04ac);
  }
  if ((param_1 < 0) || ((int)(uint)*(byte *)(**(int **)(DAT_000c0528 + 0xc04c0) + 0x3a) <= param_1))
  {
    if (*(int *)(iVar2 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c0530 + 0xc04f0,0xe1,DAT_000c052c + 0xc04e6,param_1);
    }
    uVar1 = 0xffffffed;
  }
  else {
    if (param_2 == (camera_info *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = getCameraInfo(**(int **)(DAT_000c0528 + 0xc04c0),(camera_info *)param_1,
                            (cam_sync_type_t *)param_2);
    }
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000c0538 + 0xc0512,0xe7,DAT_000c0534 + 0xc0508,uVar1);
    }
  }
  return uVar1;
}

