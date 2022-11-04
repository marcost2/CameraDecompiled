
/* qcamera::QCameraMetadataStreamMemory::~QCameraMetadataStreamMemory() */

QCameraMetadataStreamMemory * __thiscall
qcamera::QCameraMetadataStreamMemory::_QCameraMetadataStreamMemory
          (QCameraMetadataStreamMemory *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000c60f4 + 0xc60bc) + 8;
  *(int *)this = iVar1;
  if (this[5] != (QCameraMetadataStreamMemory)0x0) {
    if (*(int *)(*(int *)(DAT_000c60f8 + 0xc60ca) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000c60fc + 0xc60dc,0x420,DAT_000c6100 + 0xc60de,
                          DAT_000c60fc + 0xc60dc);
      iVar1 = *(int *)this;
    }
    (**(code **)(iVar1 + 0xc))(this);
  }
  return this;
}

