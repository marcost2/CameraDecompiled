
/* qcamera::QCameraParametersIntf::getAnalysisInfo(bool, bool, unsigned long long,
   cam_analysis_info_t*) */

undefined4
qcamera::QCameraParametersIntf::getAnalysisInfo
          (bool param_1,bool param_2,ulonglong param_3,cam_analysis_info_t *param_4)

{
  QCameraParameters *this;
  undefined4 uVar1;
  pthread_mutex_t *__mutex;
  cam_analysis_info_t *in_stack_00000008;
  
  __mutex = (pthread_mutex_t *)((QCameraParameters **)(uint)param_1 + 1);
  pthread_mutex_lock(__mutex);
  this = *(QCameraParameters **)(uint)param_1;
  if (this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getAnalysisInfo
                      (this,param_2,SUB41(param_4,0),param_3,in_stack_00000008);
    pthread_mutex_unlock(__mutex);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fedd8 + 0xfedd2,DAT_000feddc + 0xfedd4,DAT_000fede0 + 0xfedd6);
}

