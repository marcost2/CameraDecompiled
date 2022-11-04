
/* qcamera::QCameraCmdThread::launch(void* (*)(void*), void*) */

undefined4 __thiscall
qcamera::QCameraCmdThread::launch(QCameraCmdThread *this,FuncDef57 *param_1,void *param_2)

{
  pthread_create((pthread_t *)(this + 0x24),(pthread_attr_t *)0x0,(__start_routine *)param_1,param_2
                );
  return 0;
}

