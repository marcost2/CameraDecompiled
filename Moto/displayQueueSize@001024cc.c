
/* qcamera::BokehSyncNode::displayQueueSize() */

void __thiscall qcamera::BokehSyncNode::displayQueueSize(BokehSyncNode *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_00102520 + 0x1024d8);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    iVar1 = DAT_00102524 + 0x1024ea;
    iVar3 = DAT_00102528 + 0x1024ec;
    mm_camera_debug_log(1,4,iVar1,0xde,DAT_0010252c + 0x1024ee,iVar3,iVar1,
                        *(undefined4 *)(this + 0x18));
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,iVar1,0xdf,DAT_00102530 + 0x10250e,iVar3,iVar1,
                          *(undefined4 *)(this + 0x3c));
    }
  }
  return;
}

