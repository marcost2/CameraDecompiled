
/* qcamera::QCameraBufferMaps::QCameraBufferMaps(cam_mapping_buf_type, unsigned int, unsigned int,
   int, unsigned int, int, unsigned int, void*) */

QCameraBufferMaps * __thiscall
qcamera::QCameraBufferMaps::QCameraBufferMaps
          (QCameraBufferMaps *this,cam_mapping_buf_type param_1,uint param_2,uint param_3,
          int param_4,uint param_5,int param_6,uint param_7,void *param_8)

{
  int iVar1;
  
  __aeabi_memclr8(this,0x804);
  iVar1 = *(int *)this;
  *(int *)this = iVar1 + 1;
  *(void **)(this + iVar1 * 0x20 + 0x20) = param_8;
  *(uint *)(this + iVar1 * 0x20 + 0x1c) = param_7;
  *(int *)(this + iVar1 * 0x20 + 0x18) = param_6;
  *(uint *)(this + iVar1 * 0x20 + 0x14) = param_5;
  *(uint *)(this + iVar1 * 0x20 + 0xc) = param_3;
  *(int *)(this + iVar1 * 0x20 + 0x10) = param_4;
  *(cam_mapping_buf_type *)(this + iVar1 * 0x20 + 4) = param_1;
  *(uint *)(this + iVar1 * 0x20 + 8) = param_2;
  return this;
}

