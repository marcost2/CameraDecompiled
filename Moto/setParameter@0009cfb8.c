
/* qcamera::QCamera3Stream::setParameter(cam_stream_parm_buffer_t&) */

int __thiscall
qcamera::QCamera3Stream::setParameter(QCamera3Stream *this,cam_stream_parm_buffer_t *param_1)

{
  int iVar1;
  
  __aeabi_memcpy8((void *)(*(int *)(this + 0x14) + 0x478),param_1,0x7eb4);
  iVar1 = (**(code **)(*(int *)(this + 0x10) + 0x5c))
                    (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc)
                     ,*(int *)(this + 0x14) + 0x478);
  if (iVar1 == 0) {
    __aeabi_memcpy8(param_1,(void *)(*(int *)(this + 0x14) + 0x478),0x7eb4);
  }
  return iVar1;
}

