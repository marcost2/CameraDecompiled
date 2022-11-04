
/* qcamera::MotCameraFactory::__returnGetLedCalibrationData(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
qcamera::MotCameraFactory::__returnGetLedCalibrationData
          (MotCameraFactory *this,CameraMetadata *param_1)

{
  int *piVar1;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  piVar1 = *(int **)(DAT_00108bec + 0x108b52);
  local_c = *piVar1;
  if (this[0xfd8] != (MotCameraFactory)0x0) {
    this[0xfd8] = (MotCameraFactory)0x0;
    local_40 = *(double *)(this + 0xfe0);
    local_38 = *(undefined8 *)(this + 0xfe8);
    local_30 = *(undefined8 *)(this + 0xff0);
    local_28 = *(undefined8 *)(this + 0xff8);
    local_20 = *(undefined8 *)(this + 0x1000);
    local_18 = *(undefined8 *)(this + 0x1008);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180007,&local_40,6);
    __android_log_print(4,DAT_00108bf0 + 0x108bd4,DAT_00108bf4 + 0x108bd6,DAT_00108bf8 + 0x108bd8,
                        local_40,local_38,local_30,local_28,local_20,local_18);
  }
  if (*piVar1 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

