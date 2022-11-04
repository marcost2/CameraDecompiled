
/* qcamera::QCamera3ReprocessChannel::timeoutFrame(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::timeoutFrame(QCamera3ReprocessChannel *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000a5e38 + 0xa5da6);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000a5e40 + 0xa5dc0,0x14f0,DAT_000a5e3c + 0xa5db6,param_1);
  }
  if (*(int *)(this + 0xd4) == 1) {
    iVar1 = QCamera3StreamMem::getFrameNumber(*(QCamera3StreamMem **)(this + 0x100),param_1);
  }
  else {
    iVar1 = QCamera3StreamMem::getGrallocBufferIndex((QCamera3StreamMem *)(this + 0x108),param_1);
  }
  if (iVar1 < 0) {
    if (*(int *)(iVar3 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000a5e48 + 0xa5e2c,0x14f9,DAT_000a5e44 + 0xa5e1e,param_1,iVar1);
    }
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = (**(code **)(**(int **)(this + 0x24) + 0x10))();
    if (*(int *)(iVar3 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000a5e50 + 0xa5e0c,0x14fd,DAT_000a5e4c + 0xa5e02,param_1);
    }
  }
  return uVar2;
}

