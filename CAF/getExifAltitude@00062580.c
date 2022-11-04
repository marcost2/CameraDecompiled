
/* qcamera::getExifAltitude(rat_t*, char*, double) */

undefined4 __thiscall
qcamera::getExifAltitude(qcamera *this,rat_t *param_1,char *param_2,double param_3)

{
  char *__nptr;
  undefined4 uVar1;
  undefined4 extraout_r1;
  int *piVar2;
  double dVar3;
  char local_32 [30];
  int local_14;
  
  piVar2 = *(int **)(DAT_00062608 + 0x6258e);
  local_14 = *piVar2;
  snprintf(local_32,(uint)param_1,param_2,DAT_0006260c + 0x625a0,param_2);
  if (local_32[0] == '\0') {
    uVar1 = 0xffffffea;
  }
  else {
    __nptr = local_32;
    atof(__nptr);
    dVar3 = (double)CONCAT44(extraout_r1,__nptr);
    *param_1 = (rat_t)0x0;
    if ((int)((uint)(dVar3 < 0.0) << 0x1f) < 0) {
      dVar3 = 0.0 - dVar3;
      *param_1 = (rat_t)0x1;
    }
    uVar1 = getRational((rat_t *)this,SUB84(ROUND(dVar3 * DAT_00062600),0),1000);
  }
  if (*piVar2 == local_14) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

