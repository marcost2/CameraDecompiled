
/* qcamera::QCameraParameters::getAnalysisInfo(bool, bool, unsigned long long, cam_analysis_info_t*)
    */

void __thiscall
qcamera::QCameraParameters::getAnalysisInfo
          (QCameraParameters *this,bool param_1,bool param_2,ulonglong param_3,
          cam_analysis_info_t *param_4)

{
  QCameraCommon::getAnalysisInfo
            ((bool)((char)this + -0x30),param_1,param_3,(cam_analysis_info_t *)(uint)param_2);
  return;
}

