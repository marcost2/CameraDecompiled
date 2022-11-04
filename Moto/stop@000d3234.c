
/* qcamera::QCameraPostProcessor::stop() */

undefined4 __thiscall qcamera::QCameraPostProcessor::stop(QCameraPostProcessor *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (this[0x168] == (QCameraPostProcessor)0x1) {
    QCameraCbNotifier::stopSnapshots((QCameraCbNotifier *)(*(int *)(this + 8) + 0x854));
    if (*(int *)(this + 0x164) != 0) {
      (**(code **)(*(int *)(this + 0x164) + 0xc))();
      *(undefined4 *)(this + 0x164) = 0;
    }
    QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x244),2,'\x01','\x01');
  }
  uVar1 = (uint)(char)this[0x140];
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      piVar2 = *(int **)(this + iVar3 * 4 + 0x144);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x18))(piVar2);
        (**(code **)(*piVar2 + 4))(piVar2);
        uVar1 = (uint)(byte)this[0x140];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (char)uVar1);
  }
  *(undefined4 *)(this + 0x2ec) = 0;
  this[0x140] = (QCameraPostProcessor)0x0;
  android::VectorImpl::clear();
  if (*(int **)(this + 4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 4) + 0xc))();
    if (*(int **)(this + 4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 4) + 0x2c))();
    }
    *(undefined4 *)(this + 4) = 0;
  }
  return 0;
}

