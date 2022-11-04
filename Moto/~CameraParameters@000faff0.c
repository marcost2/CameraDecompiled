
/* android::CameraParameters::~CameraParameters() */

void __thiscall android::CameraParameters::_CameraParameters(CameraParameters *this)

{
  android::String8::_String8((String8 *)(this + 0x14));
  *(int *)this = *(int *)(DAT_000fb014 + 0xfb000) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)this);
  return;
}

