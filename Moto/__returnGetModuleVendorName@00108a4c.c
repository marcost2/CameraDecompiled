
/* qcamera::MotCameraFactory::__returnGetModuleVendorName(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
qcamera::MotCameraFactory::__returnGetModuleVendorName
          (MotCameraFactory *this,CameraMetadata *param_1)

{
  size_t sVar1;
  MotCameraFactory *__string;
  
  if (this[0x20] != (MotCameraFactory)0x0) {
    __string = this + 0x21;
    this[0x20] = (MotCameraFactory)0x0;
    sVar1 = strnlen((char *)__string,0x10);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180003,(uchar *)__string,sVar1);
    __android_log_print(4,DAT_00108a94 + 0x108a88,DAT_00108a98 + 0x108a8a,DAT_00108a9c + 0x108a8c,
                        __string);
  }
  return;
}

