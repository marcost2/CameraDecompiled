
/* qcamera::QCamera3HardwareInterface::internalMetaCb(mm_camera_super_buf_t*) */

void __thiscall
qcamera::QCamera3HardwareInterface::internalMetaCb
          (QCamera3HardwareInterface *this,mm_camera_super_buf_t *param_1)

{
  int *piVar1;
  QCamera3QCfaRawChannel *this_00;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  cam_frame_len_offset_t acStack420 [392];
  int local_1c;
  
  piVar6 = *(int **)(DAT_00090b48 + 0x90a08);
  local_1c = *piVar6;
  piVar3 = *(int **)(*(int *)(param_1 + 0x10) + 0x208);
  piVar2 = piVar3;
  piVar1 = piVar3;
  piVar5 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 0x3162;
    piVar5 = piVar3 + 0x314f;
    piVar2 = piVar3 + 0x3161;
    piVar3 = piVar3 + 0x314e;
  }
  if (((piVar1 == (int *)0x0) || (piVar5 == (int *)0x0 || piVar3 == (int *)0x0)) ||
     (piVar2 == (int *)0x0)) {
    if (*(int *)(*(int *)(DAT_00090b4c + 0x90a48) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00090b54 + 0x90a60,0x1891,DAT_00090b50 + 0x90a58);
    }
    QCamera3Channel::bufDone(*(QCamera3Channel **)(this + 0x8c),param_1);
    if (*piVar6 == local_1c) {
      free(param_1);
      return;
    }
    goto LAB_00090b44;
  }
  if (*piVar5 == 0) {
    if (*piVar3 != 0) {
      if (*(int *)(*(int *)(DAT_00090b64 + 0x90ade) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_00090b6c + 0x90afa,0x189f,DAT_00090b68 + 0x90aee,*piVar2);
      }
      if (*(int *)(this + 0x117f30) != 0) {
        QCamera3Stream::getFrameOffset
                  (*(QCamera3Stream **)(*(int *)(this + 0x8c) + 0x24),acStack420);
        this_00 = *(QCamera3QCfaRawChannel **)(this + 0x117f30);
        bVar4 = false;
        goto LAB_00090b22;
      }
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_00090b58 + 0x90a8e) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00090b60 + 0x90aaa,0x1898,DAT_00090b5c + 0x90a9e,*piVar1);
    }
    if (*(int *)(this + 0x117f30) != 0) {
      QCamera3Stream::getFrameOffset(*(QCamera3Stream **)(*(int *)(this + 0x8c) + 0x24),acStack420);
      this_00 = *(QCamera3QCfaRawChannel **)(this + 0x117f30);
      bVar4 = true;
LAB_00090b22:
      QCamera3QCfaRawChannel::queueReprocMetadata(this_00,param_1,acStack420,bVar4);
    }
  }
  QCamera3Channel::bufDone(*(QCamera3Channel **)(this + 0x8c),param_1);
  free(param_1);
  if (*piVar6 == local_1c) {
    return;
  }
LAB_00090b44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

