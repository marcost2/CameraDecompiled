
/* qcamera::MotSmoothZoom::stopThread() */

void __thiscall qcamera::MotSmoothZoom::stopThread(MotSmoothZoom *this)

{
  (**(code **)(*(int *)this + 0xc))(this);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x28));
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  if (this[0x39] == (MotSmoothZoom)0x0) {
    this[0x38] = (MotSmoothZoom)0x0;
    *(undefined4 *)(this + 0x3c) = 1;
  }
  pthread_cond_signal((pthread_cond_t *)(this + 0x2c));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x28));
  android::Thread::requestExitAndWait();
  return;
}

