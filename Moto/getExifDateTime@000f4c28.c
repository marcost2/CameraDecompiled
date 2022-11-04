
/* qcamera::QCameraParameters::getExifDateTime(android::String8&, android::String8&) */

void __thiscall
qcamera::QCameraParameters::getExifDateTime
          (QCameraParameters *this,String8 *param_1,String8 *param_2)

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
  
  piVar6 = *(int **)(DAT_000f4d20 + 0xf4c3a);
  local_1c = *piVar6;
  iVar1 = gettimeofday(&tStack36,(__timezone_ptr_t)0x0);
  if (iVar1 == 0) {
    ptVar2 = localtime_r(&tStack36.tv_sec,&tStack80);
    if (ptVar2 != (tm *)0x0) {
      android::String8::format
                ((char *)aSStack84,DAT_000f4d24 + 0xf4c96,ptVar2->tm_year + 0x76c,ptVar2->tm_mon + 1
                 ,ptVar2->tm_mday,ptVar2->tm_hour,ptVar2->tm_min,ptVar2->tm_sec);
      android::String8::setTo(param_1);
      android::String8::_String8(aSStack84);
      android::String8::format((char *)aSStack84,DAT_000f4d28 + 0xf4cb2,tStack36.tv_usec);
      android::String8::setTo(param_2);
      android::String8::_String8(aSStack84);
      uVar5 = 0;
      goto LAB_000f4d0c;
    }
    if (*(int *)(*(int *)(DAT_000f4d2c + 0xf4cee) + 0x20) != 0) {
      uVar5 = 0x2f30;
      iVar1 = DAT_000f4d30 + 0xf4cfe;
      iVar4 = DAT_000f4d34 + 0xf4d06;
      goto LAB_000f4d04;
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(DAT_000f4d38 + 0xf4c4e) + 0x20);
    if (iVar1 == -1) {
      if (iVar4 != 0) {
        piVar3 = (int *)__errno();
        strerror(*piVar3);
        uVar5 = 0x2f34;
        iVar1 = DAT_000f4d3c + 0xf4cdc;
        iVar4 = DAT_000f4d40 + 0xf4ce8;
        goto LAB_000f4d04;
      }
    }
    else if (iVar4 != 0) {
      uVar5 = 0x2f37;
      iVar1 = DAT_000f4d44 + 0xf4c60;
      iVar4 = DAT_000f4d48 + 0xf4c6c;
LAB_000f4d04:
      mm_camera_debug_log(1,1,iVar4,uVar5,iVar1);
    }
  }
  uVar5 = 0x80000000;
LAB_000f4d0c:
  if (*piVar6 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

