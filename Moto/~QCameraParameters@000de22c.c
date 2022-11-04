
/* qcamera::QCameraParameters::~QCameraParameters() */

void __thiscall qcamera::QCameraParameters::_QCameraParameters(QCameraParameters *this)

{
  deinit(this);
  pthread_cond_destroy((pthread_cond_t *)(this + 0xd2c));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x2d0));
  android::String8::_String8((String8 *)(this + 0x2b4));
  *(int *)(this + 0x2a0) = *(int *)(DAT_000de27c + 0xde256) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)(this + 0x2a0));
  QCameraCommon::_QCameraCommon((QCameraCommon *)(this + 0x1d0));
  android::CameraParameters::_CameraParameters((CameraParameters *)this);
  return;
}

