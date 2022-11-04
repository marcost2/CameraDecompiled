
/* qcamera::getExifLatitude(rat_t*, char*, double) */

undefined4 qcamera::getExifLatitude(rat_t *param_1,char *param_2,double param_3)

{
  char *__nptr;
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  char local_36 [30];
  int local_18;
  
  piVar3 = *(int **)(DAT_000ac064 + 0xac00a);
  local_18 = *piVar3;
  FUN_000ac068(local_36);
  if (local_36[0] == '\0') {
    uVar2 = 0xffffffea;
  }
  else {
    __nptr = local_36;
    parseGPSCoordinate(__nptr,param_1);
    uVar2 = 0;
    strtof(__nptr,(char **)0x0);
    cVar1 = 'N';
    param_2[1] = '\0';
    if ((int)((uint)((float)__nptr < 0.0) << 0x1f) < 0) {
      cVar1 = 'S';
    }
    *param_2 = cVar1;
  }
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

