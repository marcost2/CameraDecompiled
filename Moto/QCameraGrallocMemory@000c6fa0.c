
/* qcamera::QCameraGrallocMemory::QCameraGrallocMemory(camera_memory* (*)(int, unsigned int,
   unsigned int, void*), void*) */

QCameraGrallocMemory * __thiscall
qcamera::QCameraGrallocMemory::QCameraGrallocMemory
          (QCameraGrallocMemory *this,FuncDef102 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined2 *)(this + 4) = 1;
  *(undefined8 *)(this + 0x608) = 0;
  *(undefined8 *)(this + 0x610) = 0;
  *(int *)this = *(int *)(DAT_000c7060 + 0xc6fc4) + 8;
  __aeabi_memclr8(this + 8,0x600);
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 0x18;
    *(undefined4 *)(this + iVar4 + 8) = 0xffffffff;
    *(undefined4 *)(this + iVar4 + 0xc) = 0xffffffff;
    uVar2 = DAT_000c7058;
    uVar1 = DAT_000c7050;
    iVar4 = iVar3;
  } while (iVar3 != 0x600);
  this[0xa88] = (QCameraGrallocMemory)0x0;
  *(undefined4 *)(this + 0xa80) = 0;
  *(undefined4 *)(this + 0xa84) = 1;
  *(undefined4 *)(this + 0x958) = 0;
  *(undefined4 *)(this + 0x96c) = 0;
  *(undefined4 *)(this + 0x970) = 0;
  *(FuncDef102 **)(this + 0x978) = param_1;
  *(void **)(this + 0x97c) = param_2;
  *(undefined8 *)(this + 0x95c) = uVar1;
  *(undefined8 *)(this + 0x964) = uVar2;
  *(int *)this = *(int *)(DAT_000c7064 + 0xc7020) + 8;
  __aeabi_memclr8(this + 0x618,0x240);
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 4;
    *(undefined4 *)(this + iVar4 + 0x980) = 0;
    *(undefined4 *)(this + iVar4 + 0x858) = 0;
    iVar4 = iVar3;
  } while (iVar3 != 0x100);
  return this;
}

