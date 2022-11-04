
/* qcamera::QCamera3GrallocMemory::QCamera3GrallocMemory(unsigned int) */

QCamera3GrallocMemory * __thiscall
qcamera::QCamera3GrallocMemory::QCamera3GrallocMemory(QCamera3GrallocMemory *this,uint param_1)

{
  int iVar1;
  
  iVar1 = QCamera3Memory::QCamera3Memory((QCamera3Memory *)this);
  *(uint *)(iVar1 + 0x80c) = param_1;
  *(int *)this = *(int *)(DAT_000538c0 + 0x538ac) + 8;
  __aeabi_memclr4(this + 0x60c,0x200);
  return this;
}

