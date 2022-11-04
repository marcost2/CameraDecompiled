
/* android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::TEMPNAMEPLACEHOLDERVALUE(android::frameworks::displayservice::V1_0::IDisplayEventReceiver*)
    */

sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ * __thiscall
android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::operator_
          (sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ *this,
          IDisplayEventReceiver *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (param_1 != (IDisplayEventReceiver *)0x0) {
    android::RefBase::incStrong(param_1 + *(int *)(*(int *)param_1 + -0xc));
  }
  if (piVar1 != (int *)0x0) {
    android::RefBase::decStrong((void *)(*(int *)(*piVar1 + -0xc) + (int)piVar1));
  }
  if (piVar1 != *(int **)this) {
    android::sp_report_race();
  }
  *(IDisplayEventReceiver **)this = param_1;
  return this;
}

