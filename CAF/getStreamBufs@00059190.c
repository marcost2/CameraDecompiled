
/* qcamera::QCamera3MetadataChannel::getStreamBufs(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3MetadataChannel::getStreamBufs(QCamera3MetadataChannel *this,uint param_1)

{
  QCamera3StreamMem *pQVar1;
  int iVar2;
  metadata_buffer_t *pmVar3;
  
  if (param_1 < 0x1174b8) {
    if (*(int *)(*(int *)(DAT_0005923c + 0x591aa) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    return 0;
  }
  pQVar1 = (QCamera3StreamMem *)operator_new(0xe30);
  pQVar1 = (QCamera3StreamMem *)QCamera3StreamMem::QCamera3StreamMem(pQVar1,0x12,true);
  *(QCamera3StreamMem **)(this + 0x90) = pQVar1;
  iVar2 = QCamera3StreamMem::allocateAll(pQVar1,param_1);
  if (-1 < iVar2) {
    pmVar3 = (metadata_buffer_t *)QCamera3StreamMem::getPtr(*(uint *)(this + 0x90));
    clear_metadata_buffer(pmVar3);
    return *(undefined4 *)(this + 0x90);
  }
  if (*(int *)(*(int *)(DAT_00059248 + 0x5920a) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  *(undefined4 *)(this + 0x90) = 0;
  return 0;
}

