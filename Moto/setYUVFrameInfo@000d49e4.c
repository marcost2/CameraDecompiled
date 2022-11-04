
/* qcamera::QCameraPostProcessor::setYUVFrameInfo(mm_camera_super_buf_t*) */

void __thiscall
qcamera::QCameraPostProcessor::setYUVFrameInfo
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1)

{
  QCameraChannel *this_00;
  QCameraStream *this_01;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  cam_format_t local_1b8;
  int local_1b4;
  int iStack432;
  cam_frame_len_offset_t acStack428 [4];
  int local_1a8;
  undefined4 uStack420;
  int local_24;
  
  piVar4 = *(int **)(DAT_000d4b08 + 0xd49f4);
  local_24 = *piVar4;
  this_00 = (QCameraChannel *)
            QCamera2HardwareInterface::getChannelByHandle
                      (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_1 + 4));
  if (this_00 == (QCameraChannel *)0x0) {
    if (0 < (char)this[0x140]) {
      iVar1 = 0;
      do {
        this_00 = *(QCameraChannel **)(this + iVar1 * 4 + 0x144);
        if ((this_00 != (QCameraChannel *)0x0) &&
           (*(int *)(this_00 + 0x10) == *(int *)(param_1 + 4))) goto LAB_000d4a0a;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (char)this[0x140]);
    }
    if (*(int *)(*(int *)(DAT_000d4b0c + 0xd4a6e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d4b14 + 0xd4a8c,0xee3,DAT_000d4b10 + 0xd4a80,
                          *(undefined4 *)(param_1 + 4));
    }
  }
  else {
LAB_000d4a0a:
    if (*(int *)(param_1 + 8) != 0) {
      uVar3 = 0;
      do {
        this_01 = (QCameraStream *)
                  QCameraChannel::getStreamByHandle(this_00,**(uint **)(param_1 + uVar3 * 4 + 0x10))
        ;
        if ((this_01 != (QCameraStream *)0x0) &&
           ((iVar1 = QCameraStream::isTypeOf(this_01,3), iVar1 != 0 ||
            (iVar1 = QCameraStream::isOrignalTypeOf(this_01,3), iVar1 != 0)))) {
          QCameraStream::getFrameDimension(this_01,(cam_dimension_t *)&local_1b4);
          QCameraStream::getFrameOffset(this_01,acStack428);
          QCameraStream::getFormat(this_01,&local_1b8);
          uVar2 = QCameraParametersIntf::getFrameFmtString
                            ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac),local_1b8);
          if (*(int *)(*(int *)(DAT_000d4b18 + 0xd4ac0) + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000d4b20 + 0xd4aee,0xefc,DAT_000d4b1c + 0xd4ad2,local_1b4,
                                iStack432,uStack420,local_1a8 - iStack432 * local_1b4,uVar2);
          }
          uVar2 = 0;
          goto LAB_000d4af2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 8));
    }
  }
  uVar2 = 0xffffffea;
LAB_000d4af2:
  if (*piVar4 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

