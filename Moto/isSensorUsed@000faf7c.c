
/* qcamera::QCameraParameters::isSensorUsed(char const*) */

uint __thiscall qcamera::QCameraParameters::isSensorUsed(QCameraParameters *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = strncmp((char *)(*(int *)(this + 0x1d4) + 0x3748),param_1,0x20);
  uVar2 = count_leading_zeroes(iVar1);
  return uVar2 >> 5;
}

