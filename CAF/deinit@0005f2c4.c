
/* qcamera::QCamera3PostProcessor::deinit() */

undefined4 __thiscall qcamera::QCamera3PostProcessor::deinit(QCamera3PostProcessor *this)

{
  undefined4 uVar1;
  
  QCameraCmdThread::exit((QCameraCmdThread *)(this + 800));
  if (*(int **)(this + 0x1f0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1f0) + 0xc))();
    if (*(int **)(this + 0x1f0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1f0) + 4))();
    }
    *(undefined4 *)(this + 0x1f0) = 0;
  }
  if (*(int *)(this + 0x24) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(this + 0x20))();
    if (*(int *)(*(int *)(DAT_0005f340 + 0x5f306) + 0x28) != 0) {
      mm_camera_debug_log();
    }
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x1ec) = 0;
  return uVar1;
}

