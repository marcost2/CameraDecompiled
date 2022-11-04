
/* qcamera::QCameraParameters::validateCameraAreas(cam_area_t*, int) */

undefined4 qcamera::QCameraParameters::validateCameraAreas(cam_area_t *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_r2;
  int in_r3;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  if (in_r2 == 1) {
    if ((((*(int *)param_2 == 0) && (*(int *)(param_2 + 4) == 0)) && (*(int *)(param_2 + 8) == 0))
       && ((*(int *)(param_2 + 0xc) == 0 && (*(int *)(param_2 + 0x10) == 0)))) {
      return 1;
    }
  }
  else if (in_r2 < 1) {
    return 1;
  }
  piVar2 = (int *)(param_2 + 8);
  iVar3 = 0;
  while( true ) {
    iVar1 = piVar2[-2];
    if (iVar1 + 1000 < 0 != SCARRY4(iVar1,1000)) {
      return 0;
    }
    iVar4 = piVar2[-1];
    bVar6 = SCARRY4(iVar4,1000);
    bVar5 = iVar4 + 1000 < 0;
    if (bVar5 == bVar6) {
      in_r3 = *piVar2;
      bVar6 = SBORROW4(in_r3,1);
      bVar5 = in_r3 + -1 < 0;
    }
    if (bVar5 != bVar6) {
      return 0;
    }
    if (1000 < in_r3 + iVar1) {
      return 0;
    }
    if (piVar2[1] < 1) break;
    in_r3 = piVar2[1] + iVar4;
    if (1000 < in_r3) {
      return 0;
    }
    if (999 < piVar2[2] - 1U) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 5;
    if (in_r2 <= iVar3) {
      return 1;
    }
  }
  return 0;
}

