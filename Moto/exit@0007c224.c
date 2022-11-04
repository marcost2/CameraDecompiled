
/* qcamera::QCameraCmdThread::exit() */

void __thiscall qcamera::QCameraCmdThread::exit(QCameraCmdThread *this,int __status)

{
  int iVar1;
  
  if (*(int *)(this + 0x24) != 0) {
    iVar1 = sendCmd(this,4,'\0','\x01');
    if (iVar1 == 0) {
      iVar1 = pthread_join(*(pthread_t *)(this + 0x24),(void **)0x0);
      if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_0007c2a4 + 0x7c276) + 0x48) != 0)) {
        mm_camera_debug_log(2,4,DAT_0007c2ac + 0x7c28c,0xdb,DAT_0007c2a8 + 0x7c284);
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    else if (*(int *)(*(int *)(DAT_0007c298 + 0x7c244) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0007c2a0 + 0x7c25c,0xd5,DAT_0007c29c + 0x7c252,iVar1);
    }
  }
  return;
}

