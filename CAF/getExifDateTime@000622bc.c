
/* qcamera::getExifDateTime(android::String8&, android::String8&) */

undefined4 qcamera::getExifDateTime(String8 *param_1,String8 *param_2)

{
  int iVar1;
  tm *ptVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *extraout_r1;
  char *extraout_r1_00;
  int *piVar6;
  String8 aSStack84 [4];
  tm tStack80;
  timeval tStack36;
  int local_1c;
  
  piVar6 = *(int **)(DAT_000623b4 + 0x622cc);
  local_1c = *piVar6;
  iVar1 = gettimeofday(&tStack36,(__timezone_ptr_t)0x0);
  if (iVar1 == 0) {
    ptVar2 = localtime_r(&tStack36.tv_sec,&tStack80);
    if (ptVar2 != (tm *)0x0) {
      android::String8::format
                ((char *)aSStack84,DAT_000623b8 + 0x62328,ptVar2->tm_year + 0x76c,ptVar2->tm_mon + 1
                 ,ptVar2->tm_mday,ptVar2->tm_hour,ptVar2->tm_min,ptVar2->tm_sec);
      android::String8::operator_(param_1,aSStack84);
      android::String8::_String8(aSStack84,extraout_r1);
      android::String8::format((char *)aSStack84,DAT_000623bc + 0x62344,tStack36.tv_usec);
      android::String8::operator_(param_2,aSStack84);
      android::String8::_String8(aSStack84,extraout_r1_00);
      uVar4 = 0;
      goto LAB_000623a0;
    }
    iVar5 = *(int *)(*(int *)(DAT_000623c0 + 0x62382) + 0x20);
joined_r0x00062384:
    if (iVar5 != 0) {
LAB_00062398:
      mm_camera_debug_log();
    }
  }
  else {
    iVar5 = *(int *)(*(int *)(DAT_000623cc + 0x622e0) + 0x20);
    if (iVar1 != -1) goto joined_r0x00062384;
    if (iVar5 != 0) {
      piVar3 = (int *)__errno();
      strerror(*piVar3);
      goto LAB_00062398;
    }
  }
  uVar4 = 0x80000000;
LAB_000623a0:
  if (*piVar6 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

