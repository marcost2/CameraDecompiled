
/* qcamera::QCameraMemory::QCameraMemory(bool, qcamera::QCameraMemoryPool*, cam_stream_type_t,
   qcamera::QCameraMemType) */

QCameraMemory * __thiscall
qcamera::QCameraMemory::QCameraMemory
          (QCameraMemory *this,bool param_1,QCameraMemoryPool *param_2,cam_stream_type_t param_3,
          QCameraMemType param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(this + 0x614) = 0;
  *(cam_stream_type_t *)(this + 0x60c) = param_3;
  *(QCameraMemoryPool **)(this + 0x608) = param_2;
  this[4] = (QCameraMemory)param_1;
  this[5] = (QCameraMemory)0x0;
  *(QCameraMemType *)(this + 0x610) = param_4;
  *(int *)this = *(int *)(DAT_000c4b74 + 0xc4b52) + 8;
  __aeabi_memclr8(this + 8,0x600);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 0x18;
    *(undefined4 *)(this + iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(this + iVar1 + 0xc) = 0xffffffff;
    iVar1 = iVar2;
  } while (iVar2 != 0x600);
  return this;
}

