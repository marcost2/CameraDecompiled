
/* qcamera::QCamera3QCfaRawChannel::getStreamBufs(unsigned int) */

int * __thiscall
qcamera::QCamera3QCfaRawChannel::getStreamBufs(QCamera3QCfaRawChannel *this,uint param_1)

{
  QCamera3StreamMem *pQVar1;
  int iVar2;
  int **ppiVar3;
  
  pQVar1 = (QCamera3StreamMem *)operator_new(0xe30);
  pQVar1 = (QCamera3StreamMem *)
           QCamera3StreamMem::QCamera3StreamMem(pQVar1,*(uint *)(this + 0x78),true);
  *(QCamera3StreamMem **)(this + 0x118030) = pQVar1;
  ppiVar3 = (int **)(this + 0x118030);
  iVar2 = QCamera3StreamMem::allocateAll(pQVar1,param_1);
  if (-1 < iVar2) {
    return *ppiVar3;
  }
  if (*(int *)(*(int *)(DAT_000a175c + 0xa172e) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a1764 + 0xa1746,0xb5e,DAT_000a1760 + 0xa173e);
  }
  if (*ppiVar3 != (int *)0x0) {
    (**(code **)(**ppiVar3 + 4))();
  }
  *ppiVar3 = (int *)0x0;
  return (int *)0x0;
}

