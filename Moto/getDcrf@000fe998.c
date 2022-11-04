
/* qcamera::QCameraParametersIntf::getDcrf() */

undefined __thiscall qcamera::QCameraParametersIntf::getDcrf(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x79a);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe9c8 + 0xfe9c0,DAT_000fe9cc + 0xfe9c2,DAT_000fe9d0 + 0xfe9c4);
}

