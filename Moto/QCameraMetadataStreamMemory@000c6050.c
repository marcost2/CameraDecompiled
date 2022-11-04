
/* qcamera::QCameraMetadataStreamMemory::QCameraMetadataStreamMemory(bool) */

QCameraMetadataStreamMemory * __thiscall
qcamera::QCameraMetadataStreamMemory::QCameraMetadataStreamMemory
          (QCameraMetadataStreamMemory *this,bool param_1)

{
  int iVar1;
  int iVar2;
  
  this[5] = (QCameraMetadataStreamMemory)0x0;
  this[4] = (QCameraMetadataStreamMemory)param_1;
  *(undefined8 *)(this + 0x608) = 0;
  *(undefined8 *)(this + 0x610) = 0;
  *(int *)this = *(int *)(DAT_000c60a8 + 0xc6070) + 8;
  __aeabi_memclr8(this + 8,0x600);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 0x18;
    *(undefined4 *)(this + iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(this + iVar1 + 0xc) = 0xffffffff;
    iVar1 = iVar2;
  } while (iVar2 != 0x600);
  __aeabi_memclr8(this + 0x618,0x100);
  *(int *)this = *(int *)(DAT_000c60ac + 0xc60a0) + 8;
  return this;
}

