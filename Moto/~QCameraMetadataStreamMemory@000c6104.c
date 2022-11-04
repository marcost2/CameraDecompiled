
/* qcamera::QCameraMetadataStreamMemory::~QCameraMetadataStreamMemory() */

void __thiscall
qcamera::QCameraMetadataStreamMemory::_QCameraMetadataStreamMemory
          (QCameraMetadataStreamMemory *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000c6150 + 0xc6110) + 8;
  *(int *)this = iVar1;
  if (this[5] != (QCameraMetadataStreamMemory)0x0) {
    if (*(int *)(*(int *)(DAT_000c6154 + 0xc611e) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000c6158 + 0xc6130,0x420,DAT_000c615c + 0xc6132,
                          DAT_000c6158 + 0xc6130);
      iVar1 = *(int *)this;
    }
    (**(code **)(iVar1 + 0xc))(this);
  }
  operator_delete(this);
  return;
}

