
/* qcamera::QCameraParametersIntf::getHfrFps(cam_fps_range_t&) */

void __thiscall
qcamera::QCameraParametersIntf::getHfrFps(QCameraParametersIntf *this,cam_fps_range_t *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(iVar1 + 0x2e4);
    *(undefined8 *)param_1 = *(undefined8 *)(iVar1 + 0x2dc);
    *(undefined8 *)(param_1 + 8) = uVar2;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc3ac + 0xfc3a6,DAT_000fc3b0 + 0xfc3a8,DAT_000fc3b4 + 0xfc3aa);
}

