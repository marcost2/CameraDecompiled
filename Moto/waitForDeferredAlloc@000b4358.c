
/* qcamera::QCamera2HardwareInterface::waitForDeferredAlloc(cam_stream_type_t) */

void __thiscall
qcamera::QCamera2HardwareInterface::waitForDeferredAlloc
          (QCamera2HardwareInterface *this,cam_stream_type_t param_1)

{
  if (param_1 == 7) {
    waitDeferredWork(this,(uint *)(this + 0x1dac));
    return;
  }
  return;
}

