
/* qcamera::QCameraParametersIntf::setRelatedCamSyncInfo(cam_sync_related_sensors_event_info_t*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setRelatedCamSyncInfo
          (QCameraParametersIntf *this,cam_sync_related_sensors_event_info_t *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setRelatedCamSyncInfo(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fea08 + 0xfea02,DAT_000fea0c + 0xfea04,DAT_000fea10 + 0xfea06);
}

