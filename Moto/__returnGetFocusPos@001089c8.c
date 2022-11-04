
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::MotCameraFactory::__returnGetFocusPos(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
qcamera::MotCameraFactory::__returnGetFocusPos(MotCameraFactory *this,CameraMetadata *param_1)

{
  int *piVar1;
  undefined8 local_30;
  undefined8 uStack40;
  int local_14;
  
  piVar1 = *(int **)(DAT_00108a3c + 0x1089dc);
  local_14 = *piVar1;
  if (this[0xc] != (MotCameraFactory)0x0) {
    this[0xc] = (MotCameraFactory)0x0;
    local_30 = *(undefined8 *)(this + 0x10);
    uStack40 = *(undefined8 *)(this + 0x18);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180002,(int *)&local_30,4);
    __android_log_print(4,DAT_00108a40 + 0x108a20,DAT_00108a44 + 0x108a22,DAT_00108a48 + 0x108a24,
                        (undefined4)local_30,local_30._4_4_,(undefined4)uStack40,uStack40._4_4_);
  }
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

