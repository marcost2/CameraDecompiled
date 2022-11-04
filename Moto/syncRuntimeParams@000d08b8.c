
/* qcamera::QCameraStream::syncRuntimeParams() */

int __thiscall qcamera::QCameraStream::syncRuntimeParams(QCameraStream *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  QCameraStream *pQVar5;
  pthread_mutex_t *__mutex;
  
  pQVar5 = this + 0x2f8;
  __aeabi_memclr8(pQVar5,0x7eb4);
  __mutex = (pthread_mutex_t *)(this + 0x2dc);
  *(undefined4 *)(this + 0x2f8) = 99;
  pthread_mutex_lock(__mutex);
  __aeabi_memcpy8((void *)(*(int *)(this + 0x70) + 0x478),pQVar5,0x7eb4);
  iVar1 = (**(code **)(*(int *)(this + 0x6c) + 0x60))
                    (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                     *(undefined4 *)(this + 0x68),*(int *)(this + 0x70) + 0x478);
  if (iVar1 == 0) {
    __aeabi_memcpy8(pQVar5,(void *)(*(int *)(this + 0x70) + 0x478),0x7eb4);
    pthread_mutex_unlock(__mutex);
    pQVar5 = this + 0x81ac;
    __aeabi_memclr8(pQVar5,0x7eb4);
    *(undefined4 *)(this + 0x81ac) = 0xa6;
    pthread_mutex_lock(__mutex);
    __aeabi_memcpy8((void *)(*(int *)(this + 0x70) + 0x478),pQVar5,0x7eb4);
    iVar1 = (**(code **)(*(int *)(this + 0x6c) + 0x60))
                      (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                       *(undefined4 *)(this + 0x68),*(int *)(this + 0x70) + 0x478);
    if (iVar1 == 0) {
      __aeabi_memcpy8(pQVar5,(void *)(*(int *)(this + 0x70) + 0x478),0x7eb4);
      pthread_mutex_unlock(__mutex);
      return 0;
    }
    pthread_mutex_unlock(__mutex);
    if (*(int *)(*(int *)(DAT_000d09cc + 0xd0984) + 0x20) == 0) {
      return iVar1;
    }
    uVar4 = 0x3b0;
    iVar2 = DAT_000d09d0 + 0xd0994;
    iVar3 = DAT_000d09d4 + 0xd099c;
  }
  else {
    pthread_mutex_unlock(__mutex);
    if (*(int *)(*(int *)(DAT_000d09c0 + 0xd090c) + 0x20) == 0) {
      return iVar1;
    }
    uVar4 = 0x3a7;
    iVar2 = DAT_000d09c4 + 0xd091e;
    iVar3 = DAT_000d09c8 + 0xd0926;
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar2);
  return iVar1;
}

