
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::sort() */

undefined4 __thiscall
android::hardware::camera::common::V1_0::helper::CameraMetadata::sort(CameraMetadata *this)

{
  undefined4 uVar1;
  
  if (this[4] == (CameraMetadata)0x0) {
    uVar1 = (*(code *)PTR_sort_camera_metadata_0011aac4)(*(undefined4 *)this);
    return uVar1;
  }
  __android_log_print(6,DAT_0010a54c + 0x10a53a,DAT_0010a550 + 0x10a53c,DAT_0010a554 + 0x10a53e);
  return 0xffffffda;
}

