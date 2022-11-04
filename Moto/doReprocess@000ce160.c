
/* qcamera::QCameraReprocessChannel::doReprocess(int, void*, unsigned int, int&) */

int __thiscall
qcamera::QCameraReprocessChannel::doReprocess
          (QCameraReprocessChannel *this,int param_1,void *param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_7ee0;
  undefined4 local_7edc;
  undefined auStack32472 [4];
  int local_7ed4;
  
  piVar1 = *(int **)(DAT_000ce250 + 0xce174);
  iVar2 = *piVar1;
  if (*(int *)(this + 0x1c) == 0) {
    if (*(int *)(*(int *)(DAT_000ce254 + 0xce214) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ce25c + 0xce22c,0x67d,DAT_000ce258 + 0xce224);
    }
    iVar4 = -1;
  }
  else {
    uVar5 = 0;
    iVar4 = 0;
    do {
      iVar3 = *(int *)(*(int *)(this + 0x18) + uVar5 * 4);
      if (((iVar3 == 0) || (*(int *)(this + 0x10) == *(int *)(iVar3 + 100))) &&
         (iVar4 = QCameraStream::mapBuf
                            ((uchar)iVar3,5,0,-1,(void *)param_1,(uint)param_2,
                             (mm_camera_map_unmap_ops_tbl_t *)param_3), iVar4 == 0)) {
        __aeabi_memclr8(auStack32472,0x7eac);
        local_7edc = 0;
        local_7ee0 = 0x60;
        iVar4 = QCameraStream::setParameter
                          (*(QCameraStream **)(*(int *)(this + 0x18) + uVar5 * 4),
                           (cam_stream_parm_buffer_t *)&local_7ee0);
        if (iVar4 == 0) {
          *param_4 = local_7ed4;
        }
        QCameraStream::unmapBuf
                  (*(QCameraStream **)(*(int *)(this + 0x18) + uVar5 * 4),'\x05',0,-1,
                   (mm_camera_map_unmap_ops_tbl_t *)0x0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(this + 0x1c));
  }
  if (*piVar1 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

