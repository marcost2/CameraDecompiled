
/* qcamera::getExifGpsDateTimeStamp(char*, unsigned int, rat_t*, long long) */

undefined4
qcamera::getExifGpsDateTimeStamp(char *param_1,uint param_2,rat_t *param_3,longlong param_4)

{
  tm *ptVar1;
  undefined4 uVar2;
  int *piVar3;
  tm *unaff_r7;
  long local_40;
  char local_3a [30];
  int local_1c;
  
  piVar3 = *(int **)(DAT_000626c8 + 0x62622);
  local_1c = *piVar3;
  snprintf(local_3a,param_2,(char *)param_3,DAT_000626cc + 0x62638,(undefined4)param_4,param_4._4_4_
          );
  if (local_3a[0] != '\0') {
    local_40 = atol(local_3a);
    ptVar1 = gmtime(&local_40);
    if (param_3 != (rat_t *)0x0) {
      if (param_1 != (char *)0x0) {
        unaff_r7 = ptVar1;
      }
      if (param_1 != (char *)0x0 && ptVar1 != (tm *)0x0) {
        strftime(param_1,param_2,(char *)(DAT_000626d0 + 0x62696),unaff_r7);
        getRational(param_3,unaff_r7->tm_hour,1);
        getRational(param_3 + 8,unaff_r7->tm_min,1);
        getRational(param_3 + 0x10,unaff_r7->tm_sec,1);
        uVar2 = 0;
        goto LAB_00062682;
      }
    }
    if (*(int *)(*(int *)(DAT_000626d4 + 0x62664) + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
  uVar2 = 0xffffffea;
LAB_00062682:
  if (*piVar3 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

