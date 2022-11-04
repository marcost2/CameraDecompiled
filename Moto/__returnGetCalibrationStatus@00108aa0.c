
/* qcamera::MotCameraFactory::__returnGetCalibrationStatus(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
qcamera::MotCameraFactory::__returnGetCalibrationStatus
          (MotCameraFactory *this,CameraMetadata *param_1)

{
  size_t sVar1;
  MotCameraFactory *__string;
  
  if (this[0x31] != (MotCameraFactory)0x0) {
    __string = this + 0x32;
    this[0x31] = (MotCameraFactory)0x0;
    sVar1 = strnlen((char *)__string,200);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180004,(uchar *)__string,sVar1);
    __android_log_print(4,DAT_00108ae8 + 0x108adc,DAT_00108aec + 0x108ade,DAT_00108af0 + 0x108ae0,
                        __string);
  }
  return;
}

