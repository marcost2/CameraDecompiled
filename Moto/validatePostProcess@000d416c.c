
/* qcamera::QCameraPostProcessor::validatePostProcess(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::validatePostProcess
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1)

{
  int iVar1;
  QCameraStream *this_00;
  uint uVar2;
  QCameraChannel *this_01;
  byte bVar3;
  int iVar4;
  
  if (param_1 != (mm_camera_super_buf_t *)0x0) {
    iVar1 = QCamera2HardwareInterface::getChannelByHandle
                      (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_1 + 4));
    if (0 < (char)this[0x140]) {
      uVar2 = 0;
      do {
        this_01 = *(QCameraChannel **)(this + (uVar2 & 0xff) * 4 + 0x144);
        if (iVar1 == *(int *)(this_01 + 0x54)) {
          if (this_01 != (QCameraChannel *)0x0) {
            iVar1 = *(int *)(this_01 + 0x1c);
          }
          if (this_01 == (QCameraChannel *)0x0 || iVar1 == 0) {
            return 1;
          }
          uVar2 = 0;
          bVar3 = 0;
          while (((this_00 = (QCameraStream *)QCameraChannel::getStreamByIndex(this_01,uVar2),
                  this_00 == (QCameraStream *)0x0 || (*(int *)(this + 0x17c) < 1)) ||
                 (iVar4 = *(int *)(this + 0x1a0), iVar1 = QCameraStream::getNumQueuedBuf(this_00),
                 iVar4 < iVar1))) {
            bVar3 = bVar3 + 1;
            uVar2 = (uint)bVar3;
            if (*(uint *)(this_01 + 0x1c) <= uVar2) {
              return 1;
            }
          }
          if (*(int *)(*(int *)(DAT_000d421c + 0xd41e4) + 0x24) != 0) {
            mm_camera_debug_log(1,2,DAT_000d4224 + 0xd4212,0x381,DAT_000d4220 + 0xd41fe,
                                *(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x1a0),
                                *(undefined4 *)(this + 0x1c4),*(undefined4 *)(this + 0x1e8));
          }
          return 0;
        }
        uVar2 = (uint)(char)((char)uVar2 + '\x01');
      } while ((int)uVar2 < (int)(char)this[0x140]);
    }
  }
  return 1;
}

