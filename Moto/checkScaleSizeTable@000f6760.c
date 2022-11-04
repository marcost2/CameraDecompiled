
/* qcamera::QCameraParameters::QCameraReprocScaleParam::checkScaleSizeTable(unsigned int,
   cam_dimension_t*, unsigned int, cam_dimension_t*) */

int __thiscall
qcamera::QCameraParameters::QCameraReprocScaleParam::checkScaleSizeTable
          (QCameraReprocScaleParam *this,uint param_1,cam_dimension_t *param_2,uint param_3,
          cam_dimension_t *param_4)

{
  double dVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  dVar1 = DAT_000f6820;
  if (((param_3 == 0) || (param_1 == 0 || param_2 == (cam_dimension_t *)0x0)) ||
     (param_4 == (cam_dimension_t *)0x0)) {
    return 0;
  }
  uVar2 = param_1 - 1;
  if (-1 < (int)uVar2) {
    iVar4 = *(int *)param_4;
    piVar3 = (int *)(param_2 + param_1 * 8 + -4);
    do {
      if (iVar4 < piVar3[-1]) break;
      if ((piVar3[-1] == iVar4) && (*(int *)(param_4 + 4) < *piVar3)) {
        param_1 = uVar2 + 1;
        break;
      }
      piVar3 = piVar3 + -2;
      uVar2 = uVar2 - 1;
      param_1 = param_1 - 1;
    } while (uVar2 < 0x80000000);
    iVar7 = *(int *)(param_4 + 4);
    if (0 < (int)param_1) {
      piVar3 = (int *)(param_2 + 4);
      iVar5 = 0;
      do {
        iVar6 = iVar5;
        if (ABS((double)(longlong)iVar4 / (double)(longlong)iVar7 -
                (double)(longlong)piVar3[-1] / (double)(longlong)*piVar3) < dVar1) {
          iVar6 = iVar5 + 1;
          *(int *)(this + iVar5 * 8 + 0x10) = piVar3[-1];
          *(int *)(this + iVar5 * 8 + 0x14) = *piVar3;
        }
        piVar3 = piVar3 + 2;
        param_1 = param_1 - 1;
        iVar5 = iVar6;
      } while (param_1 != 0);
      return iVar6;
    }
  }
  return 0;
}

