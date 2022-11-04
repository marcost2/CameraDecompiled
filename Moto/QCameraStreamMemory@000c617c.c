
/* qcamera::QCameraStreamMemory::QCameraStreamMemory(camera_memory* (*)(int, unsigned int, unsigned
   int, void*), void*, bool, qcamera::QCameraMemoryPool*, cam_stream_type_t, cam_stream_buf_type) */

QCameraStreamMemory * __thiscall
qcamera::QCameraStreamMemory::QCameraStreamMemory
          (QCameraStreamMemory *this,FuncDef100 *param_1,void *param_2,bool param_3,
          QCameraMemoryPool *param_4,cam_stream_type_t param_5,cam_stream_buf_type param_6)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(this + 0x614) = 0;
  *(undefined4 *)(this + 0x610) = 0;
  this[4] = (QCameraStreamMemory)param_3;
  this[5] = (QCameraStreamMemory)0x0;
  *(cam_stream_type_t *)(this + 0x60c) = param_5;
  *(QCameraMemoryPool **)(this + 0x608) = param_4;
  *(int *)this = *(int *)(DAT_000c61ec + 0xc61aa) + 8;
  __aeabi_memclr8(this + 8,0x600);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 0x18;
    *(undefined4 *)(this + iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(this + iVar1 + 0xc) = 0xffffffff;
    iVar1 = iVar2;
  } while (iVar2 != 0x600);
  *(void **)(this + 0x71c) = param_2;
  *(FuncDef100 **)(this + 0x618) = param_1;
  *(int *)this = *(int *)(DAT_000c61f0 + 0xc61da) + 8;
  __aeabi_memclr8(this + 0x61c,0x100);
  return this;
}

