
/* qcamera::QCameraStream::setSyncDataCB(void (*)(mm_camera_super_buf_t*, qcamera::QCameraStream*,
   void*)) */

undefined4 __thiscall qcamera::QCameraStream::setSyncDataCB(QCameraStream *this,FuncDef107 *param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x6c) != 0) {
    *(FuncDef107 **)(this + 0x98) = param_1;
    iVar1 = (**(code **)(*(int *)(this + 0x6c) + 0x9c))
                      (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                       *(undefined4 *)(this + 0x68),*(undefined4 *)(DAT_000d20d0 + 0xd2094),1,this);
    if (iVar1 == 0) {
      this[0x10084] = (QCameraStream)0x1;
      return 0;
    }
  }
  if (*(int *)(*(int *)(DAT_000d20d4 + 0xd209e) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000d20dc + 0xd20b6,0xb33,DAT_000d20d8 + 0xd20ae);
  }
  return 0x80000000;
}

