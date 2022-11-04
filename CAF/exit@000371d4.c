
/* qcamera::QCameraCmdThread::exit() */

int __thiscall qcamera::QCameraCmdThread::exit(QCameraCmdThread *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x24) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = sendCmd(this,4,'\0','\x01');
    if (iVar1 == 0) {
      iVar1 = 0;
      iVar2 = pthread_join(*(pthread_t *)(this + 0x24),(void **)0x0);
      if ((iVar2 != 0) && (*(int *)(*(int *)(DAT_00037254 + 0x37226) + 0x48) != 0)) {
        mm_camera_debug_log();
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    else if (*(int *)(*(int *)(DAT_00037248 + 0x371f4) + 0x3c) != 0) {
      mm_camera_debug_log();
    }
  }
  return iVar1;
}

