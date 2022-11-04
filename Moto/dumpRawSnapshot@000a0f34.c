
/* qcamera::QCamera3RawDumpChannel::dumpRawSnapshot(mm_camera_buf_def*) */

void __thiscall
qcamera::QCamera3RawDumpChannel::dumpRawSnapshot
          (QCamera3RawDumpChannel *this,mm_camera_buf_def *param_1)

{
  int iVar1;
  tm *ptVar2;
  ssize_t sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  QCamera3Stream *unaff_r5;
  int *piVar7;
  undefined4 local_11f8;
  undefined4 uStack4596;
  tm tStack4588;
  timeval tStack4544;
  cam_frame_len_offset_t acStack4536 [388];
  size_t local_1034;
  char acStack4144 [4108];
  
  piVar7 = *(int **)(DAT_000a10a4 + 0xa0f4a);
  iVar4 = *piVar7;
  if (*(int *)(this + 0x44) != 0) {
    unaff_r5 = *(QCamera3Stream **)(this + 0x24);
  }
  if (*(int *)(this + 0x44) != 0 && unaff_r5 != (QCamera3Stream *)0x0) {
    local_11f8 = 0;
    uStack4596 = 0;
    QCamera3Stream::getFrameDimension(unaff_r5,(cam_dimension_t *)&local_11f8);
    __aeabi_memclr8(acStack4536,0x188);
    QCamera3Stream::getFrameOffset(unaff_r5,acStack4536);
    gettimeofday(&tStack4544,(__timezone_ptr_t)0x0);
    ptVar2 = localtime_r(&tStack4544.tv_sec,&tStack4588);
    if (ptVar2 == (tm *)0x0) {
      if (*(int *)(*(int *)(DAT_000a10c4 + 0xa1064) + 0x20) == 0) goto LAB_000a0f7e;
      uVar6 = 0xa82;
      iVar1 = DAT_000a10c8 + 0xa1076;
      iVar5 = DAT_000a10cc + 0xa107e;
    }
    else {
      __aeabi_memclr8(acStack4144,0x1000);
      snprintf(acStack4144,0x1000,(char *)0x1000,DAT_000a10a8 + 0xa1016,ptVar2->tm_year + 0x76c,
               ptVar2->tm_mon + 1,ptVar2->tm_mday,ptVar2->tm_hour,ptVar2->tm_min,ptVar2->tm_sec,
               tStack4544.tv_usec,*(undefined4 *)(param_1 + 0x1c),local_11f8,uStack4596);
      iVar1 = open(acStack4144,0x42,0x1ff);
      if (-1 < iVar1) {
        sVar3 = write(iVar1,*(void **)(param_1 + 0x208),local_1034);
        if (*(int *)(*(int *)(DAT_000a10ac + 0xa103a) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000a10b4 + 0xa1054,0xa7c,DAT_000a10b0 + 0xa1048,sVar3);
        }
        close(iVar1);
        goto LAB_000a0f7e;
      }
      if (*(int *)(*(int *)(DAT_000a10b8 + 0xa1084) + 0x20) == 0) goto LAB_000a0f7e;
      uVar6 = 0xa7f;
      iVar1 = DAT_000a10bc + 0xa1098;
      iVar5 = DAT_000a10c0 + 0xa10a0;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000a10d0 + 0xa0f64) + 0x20) == 0) goto LAB_000a0f7e;
    uVar6 = 0xa85;
    iVar1 = DAT_000a10d4 + 0xa0f74;
    iVar5 = DAT_000a10d8 + 0xa0f7c;
  }
  mm_camera_debug_log(1,1,iVar5,uVar6,iVar1);
LAB_000a0f7e:
  if (*piVar7 != iVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

