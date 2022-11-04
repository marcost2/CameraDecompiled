
/* qcamera::QCameraParametersIntf::setStreamConfigure(bool, bool, bool, unsigned int*) */

undefined4
qcamera::QCameraParametersIntf::setStreamConfigure
          (bool param_1,bool param_2,bool param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)((int *)(uint)param_1 + 1);
  pthread_mutex_lock(__mutex);
  iVar1 = *(int *)(uint)param_1;
  if (iVar1 != 0) {
    uVar2 = QCameraParameters::setStreamConfigure(SUB41(iVar1,0),param_2,param_3,param_4);
    pthread_mutex_unlock(__mutex);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd63c + 0xfd636,DAT_000fd640 + 0xfd638,DAT_000fd644 + 0xfd63a);
}

