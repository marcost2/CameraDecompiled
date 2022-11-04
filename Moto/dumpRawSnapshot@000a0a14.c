
/* qcamera::QCamera3RawChannel::dumpRawSnapshot(mm_camera_buf_def*) */

void __thiscall
qcamera::QCamera3RawChannel::dumpRawSnapshot(QCamera3RawChannel *this,mm_camera_buf_def *param_1)

{
  int iVar1;
  ssize_t sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  QCamera3Stream *unaff_r6;
  int *piVar6;
  undefined4 local_11c0;
  undefined4 uStack4540;
  cam_frame_len_offset_t acStack4536 [20];
  undefined4 local_11a4;
  undefined4 local_119c;
  char acStack4144 [4108];
  
  piVar6 = *(int **)(DAT_000a0b2c + 0xa0a2a);
  iVar3 = *piVar6;
  if (*(int *)(this + 0x44) != 0) {
    unaff_r6 = *(QCamera3Stream **)(this + 0x24);
  }
  if (*(int *)(this + 0x44) != 0 && unaff_r6 != (QCamera3Stream *)0x0) {
    __aeabi_memclr8(acStack4144,0x1000);
    local_11c0 = 0;
    uStack4540 = 0;
    QCamera3Stream::getFrameDimension(unaff_r6,(cam_dimension_t *)&local_11c0);
    __aeabi_memclr8(acStack4536,0x188);
    QCamera3Stream::getFrameOffset(unaff_r6,acStack4536);
    snprintf(acStack4144,0x1000,(char *)0x1000,DAT_000a0b30 + 0xa0aae,
             *(undefined4 *)(param_1 + 0x1c),local_11a4,local_119c);
    iVar1 = open(acStack4144,0x42,0x1a4);
    if (-1 < iVar1) {
      sVar2 = write(iVar1,*(void **)(param_1 + 0x208),*(size_t *)(param_1 + 0x20c));
      if (*(int *)(*(int *)(DAT_000a0b34 + 0xa0ad0) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a0b3c + 0xa0aea,0x9a7,DAT_000a0b38 + 0xa0ade,sVar2);
      }
      close(iVar1);
      goto LAB_000a0af2;
    }
    if (*(int *)(*(int *)(DAT_000a0b40 + 0xa0b0e) + 0x20) == 0) goto LAB_000a0af2;
    uVar5 = 0x9aa;
    iVar1 = DAT_000a0b44 + 0xa0b20;
    iVar4 = DAT_000a0b48 + 0xa0b28;
  }
  else {
    if (*(int *)(*(int *)(DAT_000a0b4c + 0xa0a48) + 0x20) == 0) goto LAB_000a0af2;
    uVar5 = 0x9ad;
    iVar1 = DAT_000a0b50 + 0xa0a5a;
    iVar4 = DAT_000a0b54 + 0xa0a62;
  }
  mm_camera_debug_log(1,1,iVar4,uVar5,iVar1);
LAB_000a0af2:
  if (*piVar6 != iVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

