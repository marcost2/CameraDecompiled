
/* qcamera::QCameraStream::isTypeOf(cam_stream_type_t) */

undefined4 __thiscall
qcamera::QCameraStream::isTypeOf(QCameraStream *this,cam_stream_type_t param_1)

{
  if ((*(int *)(this + 0x70) != 0) && (*(cam_stream_type_t *)(*(int *)(this + 0x70) + 4) == param_1)
     ) {
    return 1;
  }
  return 0;
}

