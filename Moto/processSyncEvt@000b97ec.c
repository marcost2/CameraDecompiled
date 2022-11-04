
/* qcamera::QCamera2HardwareInterface::processSyncEvt(qcamera::qcamera_sm_evt_enum_t, void*) */

int __thiscall
qcamera::QCamera2HardwareInterface::processSyncEvt
          (QCamera2HardwareInterface *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(this + 0x99c);
  pthread_mutex_lock(__mutex);
  iVar1 = QCameraStateMachine::procEvt((QCameraStateMachine *)(this + 0x4dc),param_1,param_2);
  if (iVar1 == 0) {
    *(undefined8 *)(this + 0x9a4) = 0;
    *(undefined8 *)(this + 0x9ac) = 0;
    if (*(qcamera_sm_evt_enum_t *)(this + 0x9a8) != param_1) {
      do {
        pthread_cond_wait((pthread_cond_t *)(this + 0x9a0),__mutex);
      } while (*(qcamera_sm_evt_enum_t *)(this + 0x9a8) != param_1);
    }
    iVar1 = *(int *)(this + 0x9a4);
  }
  pthread_mutex_unlock(__mutex);
  return iVar1;
}

