
/* qcamera::QCameraParameters::parseGains(char const*, double&, double&, double&) */

undefined4 __thiscall
qcamera::QCameraParameters::parseGains
          (QCameraParameters *this,char *param_1,double *param_2,double *param_3,double *param_4)

{
  size_t sVar1;
  char *__s;
  char *pcVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar3;
  int *piVar4;
  char *pcStack36;
  int iStack32;
  
  piVar4 = *(int **)(DAT_000f28ac + 0xf27ae);
  iStack32 = *piVar4;
  pcStack36 = (char *)0x0;
  sVar1 = strlen(param_1);
  __s = (char *)calloc(1,sVar1 + 1);
  if (__s == (char *)0x0) {
    if (*(int *)(*(int *)(DAT_000f28b0 + 0xf2876) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f28b8 + 0xf288e,0x254a,DAT_000f28b4 + 0xf2886);
    }
    uVar3 = 0xfffffff4;
    goto LAB_000f2894;
  }
  strlcpy(__s,param_1,sVar1 + 1);
  pcVar2 = strtok_r(__s,(char *)(DAT_000f28bc + 0xf27e2),&pcStack36);
  if (pcVar2 == (char *)0x0) {
LAB_000f2844:
    if (*(int *)(*(int *)(DAT_000f28c8 + 0xf284a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f28d0 + 0xf2862,0x255d,DAT_000f28cc + 0xf285a);
    }
    uVar3 = 0xffffffea;
  }
  else {
    atof(pcVar2);
    *param_2 = (double)(float)(double)CONCAT44(extraout_r1,pcVar2);
    pcVar2 = strtok_r((char *)0x0,(char *)(DAT_000f28c0 + 0xf2804),&pcStack36);
    if (pcVar2 == (char *)0x0) goto LAB_000f2844;
    atof(pcVar2);
    *param_3 = (double)(float)(double)CONCAT44(extraout_r1_00,pcVar2);
    pcVar2 = strtok_r((char *)0x0,(char *)(DAT_000f28c4 + 0xf2826),&pcStack36);
    if (pcVar2 == (char *)0x0) goto LAB_000f2844;
    atof(pcVar2);
    *param_4 = (double)(float)(double)CONCAT44(extraout_r1_01,pcVar2);
    uVar3 = 0;
  }
  free(__s);
LAB_000f2894:
  if (*piVar4 == iStack32) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

