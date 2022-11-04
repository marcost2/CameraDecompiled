
/* qcamera::QCameraMuxer::getActiveNumOfPhyCam(qcamera::qcamera_logical_descriptor_t*, int&) */

undefined4 __thiscall
qcamera::QCameraMuxer::getActiveNumOfPhyCam
          (QCameraMuxer *this,qcamera_logical_descriptor_t *param_1,int *param_2)

{
  if (param_1 != (qcamera_logical_descriptor_t *)0x0) {
    *param_2 = *(int *)(param_1 + 0x54);
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000c308c + 0xc3060) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000c3094 + 0xc307c,0x8e8,DAT_000c3090 + 0xc3074);
    return 0xffffffed;
  }
  return 0xffffffed;
}

