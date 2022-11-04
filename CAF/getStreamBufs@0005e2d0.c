
/* qcamera::QCamera3SupportChannel::getStreamBufs(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3SupportChannel::getStreamBufs(QCamera3SupportChannel *this,uint param_1)

{
  QCamera3StreamMem *pQVar1;
  int iVar2;
  
  pQVar1 = (QCamera3StreamMem *)operator_new(0xe30);
  pQVar1 = (QCamera3StreamMem *)
           QCamera3StreamMem::QCamera3StreamMem(pQVar1,*(uint *)(this + 0x78),true);
  *(QCamera3StreamMem **)(this + 0x90) = pQVar1;
  iVar2 = QCamera3StreamMem::allocateAll(pQVar1,param_1);
  if (-1 < iVar2) {
    return *(undefined4 *)(this + 0x90);
  }
  if (*(int *)(*(int *)(DAT_0005e338 + 0x5e306) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  *(undefined4 *)(this + 0x90) = 0;
  return 0;
}

