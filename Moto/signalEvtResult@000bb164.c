
/* qcamera::QCamera2HardwareInterface::signalEvtResult(qcamera::qcamera_api_result_t*) */

void __thiscall
qcamera::QCamera2HardwareInterface::signalEvtResult
          (QCamera2HardwareInterface *this,qcamera_api_result_t *param_1)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x99c));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x9a4) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x9ac) = uVar1;
  pthread_cond_signal((pthread_cond_t *)(this + 0x9a0));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x99c));
  return;
}

