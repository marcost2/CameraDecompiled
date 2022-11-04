
/* qcamera::MotSmoothZoom::startThread() */

void __thiscall qcamera::MotSmoothZoom::startThread(MotSmoothZoom *this)

{
  undefined4 uVar1;
  
  uVar1 = QCameraParametersIntf::getZoom((QCameraParametersIntf *)(*(int *)(this + 0x24) + 0x4ac));
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x28));
  *(undefined4 *)(this + 0x30) = uVar1;
  if (this[0x39] == (MotSmoothZoom)0x0) {
    this[0x38] = (MotSmoothZoom)0x0;
    *(undefined4 *)(this + 0x3c) = 1;
  }
  pthread_cond_signal((pthread_cond_t *)(this + 0x2c));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00104d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 8))(this,DAT_00104d70 + 0x104d6a,0xfffffffe,0);
  return;
}

