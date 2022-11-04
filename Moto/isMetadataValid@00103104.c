
/* qcamera::QCameraParametersIntf::isMetadataValid(unsigned char*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::isMetadataValid(QCameraParametersIntf *this,uchar *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::isMetadataValid(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00103138 + 0x103132,DAT_0010313c + 0x103134,DAT_00103140 + 0x103136);
}

