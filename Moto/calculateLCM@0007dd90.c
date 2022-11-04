
/* qcamera::QCameraCommon::calculateLCM(int, int) */

uint qcamera::QCameraCommon::calculateLCM(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = param_2;
  if (param_2 < 1) {
    uVar1 = 0;
  }
  bVar3 = SBORROW4(param_1,1);
  iVar2 = param_1 + -1;
  if (0 < param_1) {
    bVar3 = SBORROW4(param_2,1);
    iVar2 = param_2 + -1;
    uVar1 = param_1;
  }
  if (iVar2 < 0 == bVar3) {
    uVar1 = param_2;
    iVar2 = param_2;
    if (param_2 < param_1) {
      uVar1 = param_1;
      iVar2 = param_1;
    }
    while ((uVar1 != (uVar1 / (uint)param_1) * param_1 ||
           (uVar1 != (uVar1 / (uint)param_2) * param_2))) {
      uVar1 = uVar1 + iVar2;
    }
  }
  return uVar1;
}

