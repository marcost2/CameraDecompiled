
/* qcamera::QCameraParametersIntf::updateModuleInfo() */

undefined4 __thiscall qcamera::QCameraParametersIntf::updateModuleInfo(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateModuleInfo(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102fdc + 0x102fd6,DAT_00102fe0 + 0x102fd8,DAT_00102fe4 + 0x102fda);
}

