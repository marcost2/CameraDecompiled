
/* qcamera::BaseBSTBokeh::uninit() */

void __thiscall qcamera::BaseBSTBokeh::uninit(BaseBSTBokeh *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00100d94 + 0x100d2c);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00100d98 + 0x100d40,0x3a,DAT_00100da0 + 0x100d3e,
                        DAT_00100d9c + 0x100d3c,DAT_00100d98 + 0x100d40);
  }
  QCameraQueue::flush((QCameraQueue *)(this + 0x1c),true);
  QCameraQueue::flush((QCameraQueue *)(this + 0x40),true);
  QCameraQueue::flush((QCameraQueue *)(this + 100),true);
  BokehSyncNode::uninit(*(BokehSyncNode **)(this + 0x18));
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00100da4 + 0x100d84,0x3f,DAT_00100dac + 0x100d82,
                        DAT_00100da8 + 0x100d80,DAT_00100da4 + 0x100d84);
  }
  return;
}

