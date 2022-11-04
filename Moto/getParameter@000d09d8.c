
/* qcamera::QCameraStream::getParameter(cam_stream_parm_buffer_t&) */

int __thiscall
qcamera::QCameraStream::getParameter(QCameraStream *this,cam_stream_parm_buffer_t *param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x2dc));
  __aeabi_memcpy8((void *)(*(int *)(this + 0x70) + 0x478),param_1,0x7eb4);
  iVar1 = (**(code **)(*(int *)(this + 0x6c) + 0x60))
                    (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                     *(undefined4 *)(this + 0x68),*(int *)(this + 0x70) + 0x478);
  if (iVar1 == 0) {
    __aeabi_memcpy8(param_1,(void *)(*(int *)(this + 0x70) + 0x478),0x7eb4);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2dc));
  return iVar1;
}

