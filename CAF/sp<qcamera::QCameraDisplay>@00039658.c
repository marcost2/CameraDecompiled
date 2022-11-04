
/* android::sp<android::frameworks::displayservice::V1_0::IEventCallback>::sp<qcamera::QCameraDisplay>(qcamera::QCameraDisplay*)
    */

sp_android__frameworks__displayservice__V1_0__IEventCallback_ * __thiscall
android::sp<android::frameworks::displayservice::V1_0::IEventCallback>::sp_qcamera__QCameraDisplay_
          (sp_android__frameworks__displayservice__V1_0__IEventCallback_ *this,
          QCameraDisplay *param_1)

{
  *(QCameraDisplay **)this = param_1;
  if (param_1 != (QCameraDisplay *)0x0) {
    android::RefBase::incStrong(param_1 + *(int *)(*(int *)param_1 + -0xc));
  }
  return this;
}

