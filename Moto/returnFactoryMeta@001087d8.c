
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::MotCameraFactory::returnFactoryMeta(android::hardware::camera::common::V1_0::helper::CameraMetadata&)
    */

void __thiscall
qcamera::MotCameraFactory::returnFactoryMeta(MotCameraFactory *this,CameraMetadata *param_1)

{
  size_t sVar1;
  MotCameraFactory *pMVar2;
  int *piVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  
  piVar3 = *(int **)(DAT_00108988 + 0x1087fa);
  local_20 = *piVar3;
  if (this[0xc] != (MotCameraFactory)0x0) {
    this[0xc] = (MotCameraFactory)0x0;
    local_50 = *(double *)(this + 0x10);
    local_48 = *(undefined8 *)(this + 0x18);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180002,(int *)&local_50,4);
    __android_log_print(4,DAT_0010898c + 0x10883e,DAT_00108990 + 0x108840,DAT_00108994 + 0x108842,
                        SUB84(local_50,0),local_50._4_4_,(int)local_48,local_48._4_4_);
  }
  if (this[0x20] != (MotCameraFactory)0x0) {
    pMVar2 = this + 0x21;
    this[0x20] = (MotCameraFactory)0x0;
    sVar1 = strnlen((char *)pMVar2,0x10);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180003,(uchar *)pMVar2,sVar1);
    __android_log_print(4,DAT_00108998 + 0x108878,DAT_0010899c + 0x10887a,DAT_001089a0 + 0x10887c,
                        pMVar2);
  }
  if (this[0x31] != (MotCameraFactory)0x0) {
    pMVar2 = this + 0x32;
    this[0x31] = (MotCameraFactory)0x0;
    sVar1 = strnlen((char *)pMVar2,200);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180004,(uchar *)pMVar2,sVar1);
    __android_log_print(4,DAT_001089a4 + 0x1088b2,DAT_001089a8 + 0x1088b4,DAT_001089ac + 0x1088b6,
                        pMVar2);
  }
  if (this[0xfa] != (MotCameraFactory)0x0) {
    this[0xfa] = (MotCameraFactory)0x0;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180005,(uchar *)(this + 0x100),*(uint *)(this + 0xfc));
    __android_log_print(4,DAT_001089b0 + 0x1088e8,DAT_001089b4 + 0x1088ea,DAT_001089b8 + 0x1088ec,
                        *(undefined4 *)(this + 0xfc));
  }
  if (this[0xfd8] != (MotCameraFactory)0x0) {
    this[0xfd8] = (MotCameraFactory)0x0;
    local_50 = *(double *)(this + 0xfe0);
    local_48 = *(undefined8 *)(this + 0xfe8);
    local_40 = *(undefined8 *)(this + 0xff0);
    local_38 = *(undefined8 *)(this + 0xff8);
    local_30 = *(undefined8 *)(this + 0x1000);
    local_28 = *(undefined8 *)(this + 0x1008);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              (param_1,0x80180007,(double *)&local_50,6);
    __android_log_print(4,DAT_001089bc + 0x108968,DAT_001089c0 + 0x10896a,DAT_001089c4 + 0x10896c,
                        local_50,local_48,local_40,local_38,local_30,local_28);
  }
  if (*piVar3 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

