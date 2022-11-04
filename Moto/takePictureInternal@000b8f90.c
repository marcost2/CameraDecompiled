
/* qcamera::QCamera2HardwareInterface::takePictureInternal() */

int __thiscall
qcamera::QCamera2HardwareInterface::takePictureInternal(QCamera2HardwareInterface *this)

{
  int iVar1;
  
  iVar1 = pthread_create((pthread_t *)(this + 0xaa4),(pthread_attr_t *)0x0,
                         *(__start_routine **)(DAT_000b8fbc + 0xb8fa0),this);
  if (iVar1 != 0) {
    return iVar1;
  }
  pthread_setname_np(*(pthread_t *)(this + 0xaa4),(char *)(DAT_000b8fc0 + 0xb8fb6));
  return 0;
}

