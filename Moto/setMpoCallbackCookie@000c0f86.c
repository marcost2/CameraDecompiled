
/* qcamera::QCameraMuxer::setMpoCallbackCookie(void*) */

undefined4 __thiscall qcamera::QCameraMuxer::setMpoCallbackCookie(QCameraMuxer *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(void **)(this + 0xcc) = param_1;
    return 0;
  }
  return 0x80000001;
}

