
/* qcamera::MotSmoothZoom::startZoom(int) */

void __thiscall qcamera::MotSmoothZoom::startZoom(MotSmoothZoom *this,int param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x28));
  *(int *)(this + 0x30) = param_1;
  if (this[0x39] == (MotSmoothZoom)0x0) {
    this[0x38] = (MotSmoothZoom)0x0;
    *(undefined4 *)(this + 0x3c) = 1;
  }
  pthread_cond_signal((pthread_cond_t *)(this + 0x2c));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x28));
  return;
}

