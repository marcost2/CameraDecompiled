
/* qcamera::getExifLongitude(rat_t*, char*, double) */

undefined4 __thiscall
qcamera::getExifLongitude(qcamera *this,rat_t *param_1,char *param_2,double param_3)

{
  char *__nptr;
  rat_t rVar1;
  undefined4 uVar2;
  int *piVar3;
  char local_36 [30];
  int local_18;
  
  piVar3 = *(int **)(DAT_00062574 + 0x62516);
  local_18 = *piVar3;
  snprintf(local_36,(uint)param_1,param_2,DAT_00062578 + 0x62528,param_2);
  if (local_36[0] == '\0') {
    uVar2 = 0xffffffea;
  }
  else {
    __nptr = local_36;
    parseGPSCoordinate(__nptr,(rat_t *)this);
    uVar2 = 0;
    strtof(__nptr,(char **)0x0);
    param_1[1] = (rat_t)0x0;
    rVar1 = (rat_t)0x45;
    if ((int)((uint)((float)__nptr < 0.0) << 0x1f) < 0) {
      rVar1 = (rat_t)0x57;
    }
    *param_1 = rVar1;
  }
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

