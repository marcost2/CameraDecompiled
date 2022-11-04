
/* qcamera::QCamera3RawDumpChannel::dumpRawSnapshot(mm_camera_buf_def*) */

void __thiscall
qcamera::QCamera3RawDumpChannel::dumpRawSnapshot
          (QCamera3RawDumpChannel *this,mm_camera_buf_def *param_1)

{
  QCamera3Stream *this_00;
  tm *ptVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_11f0;
  undefined4 uStack4588;
  tm tStack4580;
  timeval tStack4536;
  cam_frame_len_offset_t acStack4528 [388];
  size_t local_102c;
  char acStack4136 [4100];
  int local_24;
  
  piVar3 = *(int **)(DAT_00059970 + 0x597fc);
  local_24 = *piVar3;
  this_00 = (QCamera3Stream *)QCamera3Channel::getStreamByIndex((QCamera3Channel *)this,0);
  if (this_00 == (QCamera3Stream *)0x0) {
    if (*(int *)(*(int *)(DAT_0005999c + 0x598e4) + 0x20) != 0) {
      mm_camera_debug_log();
      if (*piVar3 == local_24) {
        return;
      }
      goto LAB_0005996c;
    }
  }
  else {
    local_11f0 = 0;
    uStack4588 = 0;
    QCamera3Stream::getFrameDimension(this_00,(cam_dimension_t *)&local_11f0);
    __aeabi_memclr4(acStack4528,0x188);
    QCamera3Stream::getFrameOffset(this_00,acStack4528);
    gettimeofday(&tStack4536,(__timezone_ptr_t)0x0);
    ptVar1 = localtime_r(&tStack4536.tv_sec,&tStack4580);
    if (ptVar1 == (tm *)0x0) {
      iVar2 = *(int *)(*(int *)(DAT_00059990 + 0x5991c) + 0x20);
    }
    else {
      __aeabi_memclr4(acStack4136,0x1000);
      snprintf(acStack4136,0x1000,(char *)0x1000,DAT_00059974 + 0x5988c,ptVar1->tm_year + 0x76c,
               ptVar1->tm_mon + 1,ptVar1->tm_mday,ptVar1->tm_hour,ptVar1->tm_min,ptVar1->tm_sec,
               tStack4536.tv_usec,*(undefined4 *)(param_1 + 0x1c),local_11f0,uStack4588);
      iVar2 = open(acStack4136,0x42,0x1ff);
      if (-1 < iVar2) {
        write(iVar2,*(void **)(param_1 + 0x208),local_102c);
        if (*(int *)(*(int *)(DAT_00059978 + 0x598ba) + 0x2c) != 0) {
          mm_camera_debug_log();
        }
        close(iVar2);
        goto LAB_00059954;
      }
      iVar2 = *(int *)(*(int *)(DAT_00059984 + 0x5993a) + 0x20);
    }
    if (iVar2 != 0) {
      mm_camera_debug_log();
    }
  }
LAB_00059954:
  if (*piVar3 == local_24) {
    return;
  }
LAB_0005996c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

