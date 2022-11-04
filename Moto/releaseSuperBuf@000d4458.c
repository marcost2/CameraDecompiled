
/* qcamera::QCameraPostProcessor::releaseSuperBuf(mm_camera_super_buf_t*, cam_stream_type_t) */

void __thiscall
qcamera::QCameraPostProcessor::releaseSuperBuf
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1,cam_stream_type_t param_2)

{
  int *this_00;
  QCameraStream *this_01;
  cam_stream_type_t cVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != (mm_camera_super_buf_t *)0x0) {
    this_00 = (int *)QCamera2HardwareInterface::getChannelByHandle
                               (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_1 + 4));
    if (this_00 == (int *)0x0) {
      if (0 < (char)this[0x140]) {
        iVar2 = 0;
        do {
          this_00 = *(int **)(this + iVar2 * 4 + 0x144);
          if ((this_00 != (int *)0x0) && (this_00[4] == *(int *)(param_1 + 4))) goto LAB_000d4474;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (char)this[0x140]);
      }
      if (*(int *)(*(int *)(DAT_000d451c + 0xd44da) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d4524 + 0xd44f8,0x7ce,DAT_000d4520 + 0xd44ec,
                            *(undefined4 *)(param_1 + 4));
        return;
      }
    }
    else {
LAB_000d4474:
      if (*(int *)(param_1 + 8) != 0) {
        uVar3 = 0;
        do {
          if (((*(uint **)(param_1 + uVar3 * 4 + 0x10) != (uint *)0x0) &&
              (this_01 = (QCameraStream *)
                         QCameraChannel::getStreamByHandle
                                   ((QCameraChannel *)this_00,
                                    **(uint **)(param_1 + uVar3 * 4 + 0x10)),
              this_01 != (QCameraStream *)0x0)) &&
             ((cVar1 = QCameraStream::getMyType(this_01), cVar1 == param_2 ||
              (cVar1 = QCameraStream::getMyOriginalType(this_01), cVar1 == param_2)))) {
                    /* WARNING: Could not recover jumptable at 0x000d4518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*this_00 + 0x20))
                      (this_00,param_1,**(undefined4 **)(param_1 + uVar3 * 4 + 0x10));
            return;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 8));
      }
    }
  }
  return;
}

