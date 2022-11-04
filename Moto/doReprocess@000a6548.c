
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
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_7ee0;
  undefined4 local_7edc;
  undefined4 uStack32472;
  int local_7ed4;
  undefined local_7ed0;
  undefined4 local_7ecc;
  undefined4 local_7ec8;
  
  piVar1 = *(int **)(DAT_000a66a4 + 0xa655c);
  iVar2 = *piVar1;
  if (*(int *)(this + 0x44) == 0) {
    if (*(int *)(*(int *)(DAT_000a66a8 + 0xa664c) + 0x20) != 0) {
      uVar6 = 0x15f2;
      iVar3 = DAT_000a66ac + 0xa665c;
      iVar4 = DAT_000a66b0 + 0xa6664;
LAB_000a6680:
      mm_camera_debug_log(1,1,iVar4,uVar6,iVar3);
    }
  }
  else {
    if (param_5 != (mm_camera_super_buf_t *)0x0) {
      uVar7 = 0;
      iVar8 = *(int *)(DAT_000a66b4 + 0xa658e);
      iVar3 = DAT_000a66b8 + 0xa6596;
      iVar4 = DAT_000a66bc + 0xa659c;
      do {
        iVar5 = QCamera3Stream::mapBuf
                          (*(QCamera3Stream **)(this + uVar7 * 4 + 0x24),'\x05',0,-1,param_1,param_2
                           ,param_3);
        if (iVar5 == 0) {
          __aeabi_memclr8(&uStack32472,0x7eac);
          local_7ed0 = 1;
          local_7edc = 0;
          local_7ee0 = 0x60;
          local_7ecc = QCamera3Stream::getMyServerID
                                 (*(QCamera3Stream **)(*(int *)(this + 0xfc) + 0x24));
          local_7ec8 = *(undefined4 *)(*(int *)(param_5 + 0x10) + 0xc);
          if (*(int *)(iVar8 + 0x34) != 0) {
            mm_camera_debug_log(1,6,iVar4,0x160b,iVar3,uStack32472,local_7edc,local_7ec8);
          }
          iVar5 = QCamera3Stream::setParameter
                            (*(QCamera3Stream **)(this + uVar7 * 4 + 0x24),
                             (cam_stream_parm_buffer_t *)&local_7ee0);
          if (iVar5 == 0) {
            *param_4 = local_7ed4;
          }
          QCamera3Stream::unmapBuf(*(QCamera3Stream **)(this + uVar7 * 4 + 0x24),'\x05',0,-1);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(this + 0x44));
      goto LAB_000a6688;
    }
    if (*(int *)(*(int *)(DAT_000a66c0 + 0xa666a) + 0x20) != 0) {
      uVar6 = 0x15f6;
      iVar3 = DAT_000a66c4 + 0xa667a;
      iVar4 = DAT_000a66c8 + 0xa6682;
      goto LAB_000a6680;
    }
  }
  iVar5 = -1;
LAB_000a6688:
  if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}

