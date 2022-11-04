
/* qcamera::QCameraMuxer::setMemoryCallback(camera_memory* (*)(int, unsigned int, unsigned int,
   void*)) */

undefined4 __thiscall
qcamera::QCameraMuxer::setMemoryCallback(QCameraMuxer *this,FuncDef98 *param_1)

{
  if (param_1 != (FuncDef98 *)0x0) {
    *(FuncDef98 **)(this + 0x28) = param_1;
    return 0;
  }
  return 0x80000001;
}

