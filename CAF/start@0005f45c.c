
/* qcamera::QCamera3PostProcessor::start(qcamera::reprocess_config_t const&) */

int __thiscall qcamera::QCamera3PostProcessor::start(QCamera3PostProcessor *this)

{
  int *piVar1;
  int iVar2;
  QCamera3ProcessingChannel *in_r1;
  reprocess_config_t *prVar3;
  int iVar4;
  
  if (*(int *)(in_r1 + 0x1a4) != 0) {
    prVar3 = *(reprocess_config_t **)(*(int *)(this + 4) + 4);
    if (*(int **)(this + 0x1f0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1f0) + 0xc))();
      if (*(int **)(this + 0x1f0) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x1f0) + 4))();
      }
      *(undefined4 *)(this + 0x1f0) = 0;
    }
    iVar4 = *(int *)(DAT_0005f530 + 0x5f494);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    piVar1 = (int *)QCamera3HardwareInterface::addOfflineReprocChannel(prVar3,in_r1);
    *(int **)(this + 0x1f0) = piVar1;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log();
      }
      return -0x80000000;
    }
    if ((*(int *)(in_r1 + 0x1a4) == 1) && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 != 0)) {
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log();
      }
      if (*(int **)(this + 0x1f0) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x1f0) + 4))();
      }
      *(undefined4 *)(this + 0x1f0) = 0;
      return iVar2;
    }
  }
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 800),1,'\x01','\0');
  return 0;
}

