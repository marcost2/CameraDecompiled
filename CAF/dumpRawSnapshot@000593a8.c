
/* qcamera::QCamera3RawChannel::dumpRawSnapshot(mm_camera_buf_def*) */

void __thiscall
qcamera::QCamera3RawChannel::dumpRawSnapshot(QCamera3RawChannel *this,mm_camera_buf_def *param_1)

{
  QCamera3Stream *this_00;
  int iVar1;
  int *piVar2;
  undefined4 local_11b8;
  undefined4 uStack4532;
  cam_frame_len_offset_t acStack4528 [20];
  undefined4 local_119c;
  undefined4 local_1194;
  char acStack4136 [4100];
  int local_24;
  
  piVar2 = *(int **)(DAT_000594c0 + 0x593ba);
  local_24 = *piVar2;
  this_00 = (QCamera3Stream *)QCamera3Channel::getStreamByIndex((QCamera3Channel *)this,0);
  if (this_00 == (QCamera3Stream *)0x0) {
    iVar1 = *(int *)(*(int *)(DAT_000594e0 + 0x59468) + 0x20);
  }
  else {
    __aeabi_memclr4(acStack4136,0x1000);
    local_11b8 = 0;
    uStack4532 = 0;
    QCamera3Stream::getFrameDimension(this_00,(cam_dimension_t *)&local_11b8);
    __aeabi_memclr4(acStack4528,0x188);
    QCamera3Stream::getFrameOffset(this_00,acStack4528);
    snprintf(acStack4136,0x1000,(char *)0x1000,DAT_000594c4 + 0x59412,
             *(undefined4 *)(param_1 + 0x1c),local_119c,local_1194);
    iVar1 = open(acStack4136,0x42,0x1a4);
    if (-1 < iVar1) {
      write(iVar1,*(void **)(param_1 + 0x208),*(size_t *)(param_1 + 0x20c));
      if (*(int *)(*(int *)(DAT_000594c8 + 0x5943e) + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      close(iVar1);
      goto LAB_000594a0;
    }
    iVar1 = *(int *)(*(int *)(DAT_000594d4 + 0x59486) + 0x20);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
LAB_000594a0:
  if (*piVar2 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

