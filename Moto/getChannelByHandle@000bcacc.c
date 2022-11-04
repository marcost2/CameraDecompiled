
/* qcamera::QCamera2HardwareInterface::getChannelByHandle(unsigned int) */

int __thiscall
qcamera::QCamera2HardwareInterface::getChannelByHandle(QCamera2HardwareInterface *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x9b4);
  if (((((((iVar1 == 0) || (*(uint *)(iVar1 + 0x10) != param_1)) &&
         ((iVar1 = *(int *)(this + 0x9b8), iVar1 == 0 || (*(uint *)(iVar1 + 0x10) != param_1)))) &&
        ((iVar1 = *(int *)(this + 0x9bc), iVar1 == 0 || (*(uint *)(iVar1 + 0x10) != param_1)))) &&
       ((iVar1 = *(int *)(this + 0x9c0), iVar1 == 0 || (*(uint *)(iVar1 + 0x10) != param_1)))) &&
      ((((iVar1 = *(int *)(this + 0x9c4), iVar1 == 0 || (*(uint *)(iVar1 + 0x10) != param_1)) &&
        ((iVar1 = *(int *)(this + 0x9c8), iVar1 == 0 || (*(uint *)(iVar1 + 0x10) != param_1)))) &&
       ((iVar1 = *(int *)(this + 0x9cc), iVar1 == 0 || (*(uint *)(iVar1 + 0x10) != param_1)))))) &&
     ((iVar1 = *(int *)(this + 0x9d0), iVar1 == 0 || (*(uint *)(iVar1 + 0x10) != param_1)))) {
    iVar1 = *(int *)(this + 0x9d4);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(iVar1 + 0x10) != param_1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

