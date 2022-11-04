
/* qcamera::getExifDateTime(android::String8&, android::String8&) */

void qcamera::getExifDateTime(String8 *param_1,String8 *param_2)

{
  int iVar1;
  tm *ptVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  String8 aSStack84 [4];
  tm tStack80;
  timeval tStack36;
  int local_1c;
  
  piVar6 = *(int **)(DAT_000abe80 + 0xabd9a);
  local_1c = *piVar6;
  iVar1 = gettimeofday(&tStack36,(__timezone_ptr_t)0x0);
  if (iVar1 == 0) {
    ptVar2 = localtime_r(&tStack36.tv_sec,&tStack80);
    if (ptVar2 != (tm *)0x0) {
      android::String8::format
                ((char *)aSStack84,DAT_000abe84 + 0xabdf6,ptVar2->tm_year + 0x76c,ptVar2->tm_mon + 1
                 ,ptVar2->tm_mday,ptVar2->tm_hour,ptVar2->tm_min,ptVar2->tm_sec);
      android::String8::setTo(param_1);
      android::String8::_String8(aSStack84);
      android::String8::format((char *)aSStack84,DAT_000abe88 + 0xabe12,tStack36.tv_usec);
      android::String8::setTo(param_2);
      android::String8::_String8(aSStack84);
      uVar5 = 0;
      goto LAB_000abe6c;
    }
    if (*(int *)(*(int *)(DAT_000abe8c + 0xabe4e) + 0x20) != 0) {
      uVar5 = 0xa1d;
      iVar1 = DAT_000abe90 + 0xabe5e;
      iVar4 = DAT_000abe94 + 0xabe66;
      goto LAB_000abe64;
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(DAT_000abe98 + 0xabdae) + 0x20);
    if (iVar1 == -1) {
      if (iVar4 != 0) {
        piVar3 = (int *)__errno();
        strerror(*piVar3);
        uVar5 = 0xa21;
        iVar1 = DAT_000abe9c + 0xabe3c;
        iVar4 = DAT_000abea0 + 0xabe48;
        goto LAB_000abe64;
      }
    }
    else if (iVar4 != 0) {
      uVar5 = 0xa24;
      iVar1 = DAT_000abea4 + 0xabdc0;
      iVar4 = DAT_000abea8 + 0xabdcc;
LAB_000abe64:
      mm_camera_debug_log(1,1,iVar4,uVar5,iVar1);
    }
  }
  uVar5 = 0x80000000;
LAB_000abe6c:
  if (*piVar6 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

