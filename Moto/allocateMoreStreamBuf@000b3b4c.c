
/* qcamera::QCamera2HardwareInterface::allocateMoreStreamBuf(qcamera::QCameraMemory*, unsigned int,
   unsigned char&) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::allocateMoreStreamBuf
          (QCamera2HardwareInterface *this,QCameraMemory *param_1,uint param_2,uchar *param_3)

{
  uchar uVar1;
  undefined4 uVar2;
  
  if (*param_3 != '\0') {
    uVar2 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
    uVar1 = QCameraMemory::getCnt(param_1);
    *param_3 = uVar1;
    return uVar2;
  }
  return 0;
}

