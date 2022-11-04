
/* qcamera::QCamera3HardwareInterface::resetIfNeededROI(cam_area_t*, cam_crop_region_t const*) */

undefined4
qcamera::QCamera3HardwareInterface::resetIfNeededROI(cam_area_t *param_1,cam_crop_region_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 1;
  }
  iVar6 = *(int *)(param_2 + 4);
  iVar7 = iVar6 + *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 <= iVar7) {
    iVar4 = *(int *)param_2;
    iVar8 = iVar4 + *(int *)(param_2 + 8);
    iVar5 = *(int *)param_1;
    if (iVar5 <= iVar8) {
      iVar3 = *(int *)(param_1 + 8) + iVar5;
      bVar9 = SBORROW4(iVar3,iVar4);
      iVar1 = iVar3 - iVar4;
      if (iVar4 <= iVar3) {
        unaff_r5 = *(int *)(param_1 + 0xc) + iVar2;
        bVar9 = SBORROW4(unaff_r5,iVar6);
        iVar1 = unaff_r5 - iVar6;
      }
      if (iVar1 < 0 == bVar9) {
        if (iVar5 < iVar4) {
          *(int *)param_1 = iVar4;
        }
        if (iVar2 < *(int *)(param_2 + 4)) {
          *(int *)(param_1 + 4) = *(int *)(param_2 + 4);
        }
        if (iVar8 < iVar3) {
          iVar3 = iVar8;
        }
        if (iVar7 < unaff_r5) {
          unaff_r5 = iVar7;
        }
        *(int *)(param_1 + 8) = iVar3 - *(int *)param_1;
        *(int *)(param_1 + 0xc) = unaff_r5 - *(int *)(param_1 + 4);
        return 1;
      }
    }
  }
  return 0;
}

