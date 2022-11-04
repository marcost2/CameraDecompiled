
/* qcamera::QCamera3HardwareInterface::setPAAFSupport(unsigned long long&, cam_stream_type_t,
   cam_color_filter_arrangement_t) */

void qcamera::QCamera3HardwareInterface::setPAAFSupport
               (ulonglong *param_1,cam_stream_type_t param_2,cam_color_filter_arrangement_t param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000841e0 + 0x8417c);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000841e8 + 0x8419e,0x35bf,DAT_000841e4 + 0x84196);
  }
  if (param_3 == 7) {
    if ((param_2 < 0xc) && ((1 << (param_2 & 0xff) & 0x812U) != 0)) {
      *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) | 1;
      return;
    }
  }
  else if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000841f0 + 0x841da,0x35ca,DAT_000841ec + 0x841d0,param_3);
  }
  return;
}

