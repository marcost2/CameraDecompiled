
/* qcamera::QCamera3Stream::getFormat(cam_format_t&) */

undefined4 __thiscall qcamera::QCamera3Stream::getFormat(QCamera3Stream *this,cam_format_t *param_1)

{
  if (*(int *)(this + 0x14) != 0) {
    *param_1 = *(cam_format_t *)(*(int *)(this + 0x14) + 8);
    return 0;
  }
  return 0xffffffff;
}

