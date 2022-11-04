
/* qcamera::QCamera3ReprocessChannel::doReprocess(int, void*, unsigned int, int&,
   mm_camera_super_buf_t*) */

int __thiscall
qcamera::QCamera3ReprocessChannel::doReprocess
          (QCamera3ReprocessChannel *this,int param_1,void *param_2,uint param_3,int *param_4,
          mm_camera_super_buf_t *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_7ee0;
  undefined4 local_7edc;
  undefined auStack32472 [4];
  int local_7ed4;
  undefined local_7ed0;
  undefined4 local_7ecc;
  undefined4 local_7ec8;
  int local_28;
  
  piVar1 = *(int **)(DAT_0005def8 + 0x5dd9e);
  local_28 = *piVar1;
  if (*(int *)(this + 0x44) == 0) {
    iVar2 = *(int *)(*(int *)(DAT_0005defc + 0x5de98) + 0x20);
  }
  else {
    if (param_5 != (mm_camera_super_buf_t *)0x0) {
      if (*(int *)(this + 0x44) == 0) {
        iVar2 = 0;
      }
      else {
        iVar3 = *(int *)(DAT_0005df14 + 0x5ddda);
        uVar4 = 0;
        do {
          iVar2 = QCamera3Stream::mapBuf
                            (*(QCamera3Stream **)(this + uVar4 * 4 + 0x24),'\x05',0,-1,param_1,
                             param_2,param_3);
          if (iVar2 == 0) {
            __aeabi_memclr4(auStack32472,0x7eac);
            local_7ed0 = 1;
            local_7edc = 0;
            local_7ee0 = 0x60;
            local_7ecc = QCamera3Stream::getMyServerID
                                   (*(QCamera3Stream **)(*(int *)(this + 0xec) + 0x24));
            local_7ec8 = *(undefined4 *)(*(int *)(param_5 + 0x10) + 0xc);
            if (*(int *)(iVar3 + 0x34) != 0) {
              mm_camera_debug_log();
            }
            iVar2 = QCamera3Stream::setParameter
                              (*(QCamera3Stream **)(this + uVar4 * 4 + 0x24),
                               (cam_stream_parm_buffer_t *)&local_7ee0);
            if (iVar2 == 0) {
              *param_4 = local_7ed4;
            }
            QCamera3Stream::unmapBuf(*(QCamera3Stream **)(this + uVar4 * 4 + 0x24),'\x05',0,-1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(this + 0x44));
      }
      goto LAB_0005ded4;
    }
    iVar2 = *(int *)(*(int *)(DAT_0005df08 + 0x5deb6) + 0x20);
  }
  if (iVar2 != 0) {
    mm_camera_debug_log();
  }
  iVar2 = -1;
LAB_0005ded4:
  if (*piVar1 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

