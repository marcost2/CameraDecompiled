
/* qcamera::QCameraDisplay::~QCameraDisplay() */

void __thiscall qcamera::QCameraDisplay::_QCameraDisplay(QCameraDisplay *this)

{
  int iVar1;
  int *in_r1;
  sp *psVar2;
  sp *extraout_r1;
  
  iVar1 = *in_r1;
  *(int *)this = iVar1;
  psVar2 = (sp *)in_r1[5];
  *(sp **)(this + *(int *)(iVar1 + -0xc)) = psVar2;
  android::sp<android::frameworks::displayservice::V1_0::IDisplayService>::_sp
            ((sp_android__frameworks__displayservice__V1_0__IDisplayService_ *)(this + 0x98),psVar2)
  ;
  android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::_sp
            ((sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ *)(this + 0x94),
             extraout_r1);
  android::frameworks::displayservice::V1_0::IEventCallback::_IEventCallback((IEventCallback *)this)
  ;
  return;
}

