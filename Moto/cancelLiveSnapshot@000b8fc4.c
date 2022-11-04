
/* qcamera::QCamera2HardwareInterface::cancelLiveSnapshot() */

int __thiscall
qcamera::QCamera2HardwareInterface::cancelLiveSnapshot(QCamera2HardwareInterface *this)

{
  int iVar1;
  pthread_t *__newthread;
  
  __newthread = (pthread_t *)(this + 0xaa0);
  if (*(pthread_t *)(this + 0xaa0) != 0) {
    pthread_join(*(pthread_t *)(this + 0xaa0),(void **)0x0);
    *__newthread = 0;
  }
  this[0x10] = (QCamera2HardwareInterface)0x0;
  iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,
                         *(__start_routine **)(DAT_000b9008 + 0xb8fea),this);
  if (iVar1 != 0) {
    return iVar1;
  }
  pthread_setname_np(*__newthread,(char *)(DAT_000b900c + 0xb9000));
  return 0;
}

