
/* qcamera::QCameraStream::isOrignalTypeOf(cam_stream_type_t) */

undefined4 __thiscall
qcamera::QCameraStream::isOrignalTypeOf(QCameraStream *this,cam_stream_type_t param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x70);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 4) == 9)) &&
     (((*(int *)(iVar1 + 0x248) == 0 && (*(cam_stream_type_t *)(iVar1 + 0x250) == param_1)) ||
      ((*(int *)(iVar1 + 0x248) == 1 && (*(cam_stream_type_t *)(iVar1 + 0x3e4) == param_1)))))) {
    return 1;
  }
  return 0;
}

