
/* qcamera::QCamera3PostProcessor::releaseSuperBuf(mm_camera_super_buf_t*) */

void __thiscall
qcamera::QCamera3PostProcessor::releaseSuperBuf
          (QCamera3PostProcessor *this,mm_camera_super_buf_t *param_1)

{
  if (param_1 != (mm_camera_super_buf_t *)0x0) {
    this = *(QCamera3PostProcessor **)(this + 4);
  }
  if (param_1 != (mm_camera_super_buf_t *)0x0 && this != (QCamera3PostProcessor *)0x0) {
    QCamera3Channel::
    __ThumbV7PILongThunk__ZN7qcamera15QCamera3Channel7bufDoneEP21mm_camera_super_buf_t
              ((QCamera3Channel *)this,(uint)param_1);
    return;
  }
  return;
}

