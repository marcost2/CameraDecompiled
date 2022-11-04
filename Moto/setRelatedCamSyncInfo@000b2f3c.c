
/* qcamera::QCamera2HardwareInterface::setRelatedCamSyncInfo(cam_sync_related_sensors_event_info_t*)
    */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setRelatedCamSyncInfo
          (QCamera2HardwareInterface *this,cam_sync_related_sensors_event_info_t *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (cam_sync_related_sensors_event_info_t *)0x0) {
    return 0x80000001;
  }
  uVar1 = (*(code *)PTR_setRelatedCamSyncInfo_00119ab0)(this + 0x4ac);
  return uVar1;
}

