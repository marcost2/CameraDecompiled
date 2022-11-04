
/* qcamera::QCameraParameters::setRelatedCamSyncInfo(cam_sync_related_sensors_event_info_t*) */

undefined4 __thiscall
qcamera::QCameraParameters::setRelatedCamSyncInfo
          (QCameraParameters *this,cam_sync_related_sensors_event_info_t *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (cam_sync_related_sensors_event_info_t *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x1ec) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 500) = uVar1;
    *(undefined8 *)(this + 0x1fc) = uVar2;
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000f627c + 0xf6250) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000f6284 + 0xf626c,0x332f,DAT_000f6280 + 0xf6264);
    return 0x80000000;
  }
  return 0x80000000;
}

