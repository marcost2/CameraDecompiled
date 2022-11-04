
/* qcamera::QCamera3HardwareInterface::resetIfNeededROI(cam_area_t*, cam_crop_region_t const*) */

undefined4
qcamera::QCamera3HardwareInterface::resetIfNeededROI(cam_area_t *param_1,cam_crop_region_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 4);
  iVar8 = iVar3 + *(int *)(param_2 + 0xc);
  if (iVar2 <= iVar8) {
    iVar4 = *(int *)param_2;
    iVar5 = *(int *)param_1;
    iVar9 = iVar4 + *(int *)(param_2 + 8);
    if (iVar5 <= iVar9) {
      iVar6 = *(int *)(param_1 + 8);
      iVar7 = iVar5 + iVar6;
      bVar10 = SBORROW4(iVar7,iVar4);
      iVar1 = iVar7 - iVar4;
      if (iVar4 <= iVar7) {
        iVar6 = *(int *)(param_1 + 0xc) + iVar2;
        bVar10 = SBORROW4(iVar6,iVar3);
        iVar1 = iVar6 - iVar3;
      }
      if (iVar1 < 0 == bVar10) {
        if (iVar5 < iVar4) {
          *(int *)param_1 = iVar4;
          iVar3 = *(int *)(param_2 + 4);
          iVar5 = iVar4;
        }
        if (iVar2 < iVar3) {
          *(int *)(param_1 + 4) = iVar3;
          iVar2 = iVar3;
        }
        if (iVar8 < iVar6) {
          iVar6 = iVar8;
        }
        if (iVar9 < iVar7) {
          iVar7 = iVar9;
        }
        *(int *)(param_1 + 8) = iVar7 - iVar5;
        *(int *)(param_1 + 0xc) = iVar6 - iVar2;
        return 1;
      }
    }
  }
  return 0;
}

