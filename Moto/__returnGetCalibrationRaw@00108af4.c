
/* qcamera::MotCameraFactory::__returnGetCalibrationRaw(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
qcamera::MotCameraFactory::__returnGetCalibrationRaw(MotCameraFactory *this,CameraMetadata *param_1)

{
  if (this[0xfa] != (MotCameraFactory)0x0) {
    this[0xfa] = (MotCameraFactory)0x0;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180005,(uchar *)(this + 0x100),*(uint *)(this + 0xfc));
    __android_log_print(4,DAT_00108b3c + 0x108b30,DAT_00108b40 + 0x108b32,DAT_00108b44 + 0x108b34,
                        *(undefined4 *)(this + 0xfc));
  }
  return;
}

