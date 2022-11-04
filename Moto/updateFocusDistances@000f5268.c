
/* qcamera::QCameraParameters::updateFocusDistances(cam_focus_distances_info_t*) */

undefined4 __thiscall
qcamera::QCameraParameters::updateFocusDistances
          (QCameraParameters *this,cam_focus_distances_info_t *param_1)

{
  double dVar1;
  int *piVar2;
  char *local_4c;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  int local_24;
  
  piVar2 = *(int **)(DAT_000f53c0 + 0xf527c);
  local_24 = *piVar2;
  android::String8::String8((String8 *)&local_4c);
  dVar1 = DAT_000f53b8;
  local_48 = 0;
  uStack64 = 0;
  local_38 = 0;
  uStack48 = 0;
  if (*(int *)(this + 0x220) != 2) {
    if (-1 < (int)((uint)((double)*(float *)param_1 < DAT_000f53b8) << 0x1f)) {
      FUN_000d6e38(&local_48,0x20,0x20,DAT_000f53cc + 0xf52dc);
    }
    android::String8::append((char *)&local_4c);
    if (-1 < (int)((uint)((double)*(float *)(param_1 + 4) < dVar1) << 0x1f)) {
      FUN_000d6e38(&local_48,0x20,0x20,DAT_000f53d4 + 0xf531a);
    }
    android::String8::append((char *)&local_4c);
    if (-1 < (int)((uint)((double)*(float *)(param_1 + 8) < dVar1) << 0x1f)) {
      FUN_000d6e38(&local_48,0x20,0x20,DAT_000f53dc + 0xf5358);
    }
  }
  android::String8::append((char *)&local_4c);
  if (*(int *)(*(int *)(DAT_000f53e0 + 0xf5368) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f53e4 + 0xf537a,0x3071,DAT_000f53e8 + 0xf537c,
                        DAT_000f53e4 + 0xf537a,local_4c);
  }
  android::CameraParameters::set
            ((CameraParameters *)this,*(char **)(DAT_000f53ec + 0xf5390),local_4c);
  android::String8::_String8((String8 *)&local_4c);
  if (*piVar2 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

