
/* qcamera::QCameraCommon::init(cam_capability_t*) */

int __thiscall qcamera::QCameraCommon::init(QCameraCommon *this,EVP_PKEY_CTX *ctx)

{
  *(EVP_PKEY_CTX **)this = ctx;
  return 0;
}

