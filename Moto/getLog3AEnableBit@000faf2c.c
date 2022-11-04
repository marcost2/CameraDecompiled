
/* qcamera::QCameraParameters::getLog3AEnableBit(char const*) */

int __thiscall qcamera::QCameraParameters::getLog3AEnableBit(QCameraParameters *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = strcmp(param_1,(char *)(DAT_000faf64 + 0xfaf38));
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp(param_1,(char *)(DAT_000faf68 + 0xfaf44));
  if (iVar1 != 0) {
    iVar1 = strcmp(param_1,(char *)(DAT_000faf6c + 0xfaf50));
    uVar2 = count_leading_zeroes(iVar1);
    return (uVar2 >> 5) << 2;
  }
  return 2;
}

