
/* qcamera::QCameraVideoMemory::QCameraVideoMemory(camera_memory* (*)(int, unsigned int, unsigned
   int, void*), void*, bool, qcamera::QCameraMemType) */

QCameraVideoMemory * __thiscall
qcamera::QCameraVideoMemory::QCameraVideoMemory
          (QCameraVideoMemory *this,FuncDef101 *param_1,void *param_2,bool param_3,
          QCameraMemType param_4)

{
  int iVar1;
  int iVar2;
  
  this[5] = (QCameraVideoMemory)0x0;
  this[4] = (QCameraVideoMemory)param_3;
  *(undefined8 *)(this + 0x608) = 0;
  *(undefined8 *)(this + 0x610) = 0;
  *(int *)this = *(int *)(DAT_000c6650 + 0xc65da) + 8;
  __aeabi_memclr8(this + 8,0x600);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 0x18;
    *(undefined4 *)(this + iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(this + iVar1 + 0xc) = 0xffffffff;
    iVar1 = iVar2;
  } while (iVar2 != 0x600);
  *(void **)(this + 0x71c) = param_2;
  *(FuncDef101 **)(this + 0x618) = param_1;
  __aeabi_memclr8(this + 0x61c,0x100);
  *(int *)this = *(int *)(DAT_000c6654 + 0xc661a) + 8;
  __aeabi_memclr8(this + 0x720,0x100);
  __aeabi_memclr8(this + 0x82c,0x100);
  *(undefined4 *)(this + 0x824) = 0x400000;
  *(undefined4 *)(this + 0x828) = 0x15;
  *(QCameraMemType *)(this + 0x610) = param_4;
  this[0x820] = (QCameraVideoMemory)0x0;
  return this;
}

