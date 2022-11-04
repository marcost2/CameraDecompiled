
/* qcamera::QCameraStream::getFormat(cam_format_t&) */

undefined4 __thiscall qcamera::QCameraStream::getFormat(QCameraStream *this,cam_format_t *param_1)

{
  if (*(int *)(this + 0x70) != 0) {
    *param_1 = *(cam_format_t *)(*(int *)(this + 0x70) + 8);
    return 0;
  }
  return 0xffffffff;
}

