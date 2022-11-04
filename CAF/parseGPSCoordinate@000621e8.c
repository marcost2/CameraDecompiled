
/* qcamera::parseGPSCoordinate(char const*, rat_t*) */

undefined4 qcamera::parseGPSCoordinate(char *param_1,rat_t *param_2)

{
  int iVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  double dVar4;
  
  if (param_2 == (rat_t *)0x0) {
    if (*(int *)(*(int *)(DAT_000622b0 + 0x62276) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    uVar3 = 0xffffffea;
  }
  else {
    atof(param_1);
    dVar4 = (double)CONCAT44(extraout_r1,param_1);
    if ((int)((uint)((double)CONCAT44(extraout_r1,param_1) < 0.0) << 0x1f) < 0) {
      dVar4 = (double)(CONCAT44(extraout_r1,param_1) ^ 0x8000000000000000);
    }
    getRational(param_2,SUB84(ROUND(dVar4),0),1);
    dVar2 = DAT_000622a0;
    dVar4 = (dVar4 - (double)(longlong)SUB84(ROUND(dVar4),0)) * DAT_000622a0;
    iVar1 = SUB84(ROUND(dVar4),0);
    getRational(param_2 + 8,iVar1,1);
    getRational(param_2 + 0x10,
                SUB84(ROUND((dVar4 - (double)(longlong)iVar1) * dVar2 * DAT_000622a8),0),10000);
    uVar3 = 0;
  }
  return uVar3;
}

