
/* qcamera::QCameraMuxer::setMainJpegCallbackCookie(void*) */

undefined4 __thiscall
qcamera::QCameraMuxer::setMainJpegCallbackCookie(QCameraMuxer *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(void **)(this + 0xd0) = param_1;
    return 0;
  }
  return 0x80000001;
}

