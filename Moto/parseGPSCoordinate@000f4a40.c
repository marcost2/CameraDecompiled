
/* qcamera::QCameraParameters::parseGPSCoordinate(char const*, rat_t*) */

undefined4 __thiscall
qcamera::QCameraParameters::parseGPSCoordinate(QCameraParameters *this,char *param_1,rat_t *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  double dVar5;
  
  if (param_2 == (rat_t *)0x0) {
    if (*(int *)(*(int *)(DAT_000f4b80 + 0xf4aa8) + 0x20) == 0) {
      uVar4 = 0xffffffea;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000f4b88 + 0xf4ac2,0x2efc,DAT_000f4b84 + 0xf4aba);
      uVar4 = 0xffffffea;
    }
  }
  else {
    atof(param_1);
    dVar3 = DAT_000f4b70;
    dVar5 = (double)CONCAT44(extraout_r1,param_1);
    if ((int)((uint)((double)CONCAT44(extraout_r1,param_1) < 0.0) << 0x1f) < 0) {
      dVar5 = (double)(CONCAT44(extraout_r1,param_1) ^ 0x8000000000000000);
    }
    iVar1 = SUB84(ROUND(dVar5),0);
    dVar5 = (dVar5 - (double)(longlong)iVar1) * DAT_000f4b70;
    iVar2 = SUB84(ROUND(dVar5),0);
    if (iVar1 < 0) {
      if (*(int *)(*(int *)(DAT_000f4b8c + 0xf4ad0) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000f4b94 + 0xf4ae8,0x2f4f,DAT_000f4b90 + 0xf4ae0);
      }
    }
    else {
      *(int *)param_2 = iVar1;
      *(undefined4 *)(param_2 + 4) = 1;
    }
    if (iVar2 < 0) {
      if (*(int *)(*(int *)(DAT_000f4b98 + 0xf4b02) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000f4ba0 + 0xf4b1a,0x2f4f,DAT_000f4b9c + 0xf4b12);
      }
    }
    else {
      *(int *)(param_2 + 8) = iVar2;
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
    iVar1 = SUB84(ROUND((dVar5 - (double)(longlong)iVar2) * dVar3 * DAT_000f4b78),0);
    if (iVar1 < 0) {
      if (*(int *)(*(int *)(DAT_000f4ba4 + 0xf4b42) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000f4bac + 0xf4b5a,0x2f4f,DAT_000f4ba8 + 0xf4b52);
      }
    }
    else {
      *(int *)(param_2 + 0x10) = iVar1;
      *(undefined4 *)(param_2 + 0x14) = 10000;
    }
    uVar4 = 0;
  }
  return uVar4;
}

