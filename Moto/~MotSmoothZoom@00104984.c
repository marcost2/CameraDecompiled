
/* qcamera::MotSmoothZoom::~MotSmoothZoom() */

void __thiscall qcamera::MotSmoothZoom::_MotSmoothZoom(MotSmoothZoom *this)

{
  int iVar1;
  int *in_r1;
  pthread_mutex_t *__mutex;
  
  iVar1 = *in_r1;
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = in_r1[3];
  (**(code **)(*(int *)this + 0xc))(this);
  __mutex = (pthread_mutex_t *)(this + 0x28);
  pthread_mutex_lock(__mutex);
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  if (this[0x39] == (MotSmoothZoom)0x0) {
    this[0x38] = (MotSmoothZoom)0x0;
    *(undefined4 *)(this + 0x3c) = 1;
  }
  pthread_cond_signal((pthread_cond_t *)(this + 0x2c));
  pthread_mutex_unlock(__mutex);
  android::Thread::requestExitAndWait();
  pthread_cond_destroy((pthread_cond_t *)(this + 0x2c));
  pthread_mutex_destroy(__mutex);
  (*(code *)PTR__Thread_0011a9dc)(this,in_r1 + 1);
  return;
}

