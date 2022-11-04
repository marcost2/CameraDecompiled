
/* qcamera::QCameraParametersIntf::cancelParameterChanges() */

void __thiscall qcamera::QCameraParametersIntf::cancelParameterChanges(QCameraParametersIntf *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    MotParamStateMachine::cancelSequence();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00103238 + 0x103230,DAT_0010323c + 0x103232,DAT_00103240 + 0x103234);
}

