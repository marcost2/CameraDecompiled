
/* qcamera::QCameraParametersIntf::getLowLightCapture() */

undefined __thiscall qcamera::QCameraParametersIntf::getLowLightCapture(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x7a5);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe98c + 0xfe984,DAT_000fe990 + 0xfe986,DAT_000fe994 + 0xfe988);
}

