
/* qcamera::QCamera3RawDumpChannel::getStreamBufs(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3RawDumpChannel::getStreamBufs(QCamera3RawDumpChannel *this,uint param_1)

{
  QCamera3StreamMem *pQVar1;
  int iVar2;
  
  pQVar1 = (QCamera3StreamMem *)operator_new(0xe30);
  pQVar1 = (QCamera3StreamMem *)
           QCamera3StreamMem::QCamera3StreamMem(pQVar1,*(uint *)(this + 0x78),true);
  *(QCamera3StreamMem **)(this + 0xa0) = pQVar1;
  iVar2 = QCamera3StreamMem::allocateAll(pQVar1,param_1);
  if (-1 < iVar2) {
    return *(undefined4 *)(this + 0xa0);
  }
  if (*(int *)(*(int *)(DAT_000a1220 + 0xa11ee) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a1228 + 0xa1206,0xabc,DAT_000a1224 + 0xa11fe);
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  *(undefined4 *)(this + 0xa0) = 0;
  return 0;
}

