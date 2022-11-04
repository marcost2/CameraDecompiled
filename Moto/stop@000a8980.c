
/* qcamera::QCamera3PostProcessor::stop() */

undefined4 __thiscall qcamera::QCamera3PostProcessor::stop(QCamera3PostProcessor *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x5c0),2,'\x01','\x01');
  uVar1 = (uint)(char)this[0x470];
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      piVar2 = *(int **)(this + iVar3 * 4 + 0x474);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))(piVar2);
        (**(code **)(*piVar2 + 4))(piVar2);
        *(undefined4 *)(this + iVar3 * 4 + 0x474) = 0;
        uVar1 = (uint)(byte)this[0x470];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (char)uVar1);
  }
  this[0x470] = (QCamera3PostProcessor)0x0;
  return 0;
}

