
/* qcamera::QCamera3RegularChannel::queueBatchBuf() */

int __thiscall qcamera::QCamera3RegularChannel::queueBatchBuf(QCamera3RegularChannel *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x24) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(this + 0x24) + 0x24))();
    if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_00058d10 + 0x58cec) + 0x20) != 0)) {
      mm_camera_debug_log();
    }
  }
  return iVar1;
}

