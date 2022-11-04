
/* qcamera::QCamera3Channel::getStreamDefaultFormat(cam_stream_type_t) */

undefined4 __thiscall
qcamera::QCamera3Channel::getStreamDefaultFormat(QCamera3Channel *this,cam_stream_type_t param_1)

{
  if (param_1 == 8) {
    return 0x1c;
  }
  if (param_1 == 4 || param_1 == 1) {
    return 7;
  }
  return 2;
}

