
/* qcamera::QCameraParametersIntf::init(cam_capability_t*, mm_camera_vtbl_t*,
   qcamera::QCameraAdjustFPS*) */

int __thiscall qcamera::QCameraParametersIntf::init(QCameraParametersIntf *this,EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    iVar1 = QCameraParameters::init(*(QCameraParameters **)this,ctx);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbd34 + 0xfbd2e,DAT_000fbd38 + 0xfbd30,DAT_000fbd3c + 0xfbd32);
}

