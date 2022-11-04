
/* qcamera::QCameraParametersIntf::setTintless(bool) */

void qcamera::QCameraParametersIntf::setTintless(bool param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)((int *)(uint)param_1 + 1);
  pthread_mutex_lock(__mutex);
  iVar1 = *(int *)(uint)param_1;
  if (iVar1 != 0) {
    QCameraParameters::setTintless(SUB41(iVar1,0));
    pthread_mutex_unlock(__mutex);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe6bc + 0xfe6b4,DAT_000fe6c0 + 0xfe6b6,DAT_000fe6c4 + 0xfe6b8);
}

