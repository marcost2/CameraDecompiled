
/* android::sp<android::frameworks::displayservice::V1_0::IDisplayService>::TEMPNAMEPLACEHOLDERVALUE(android::frameworks::displayservice::V1_0::IDisplayService*)
    */

sp_android__frameworks__displayservice__V1_0__IDisplayService_ * __thiscall
android::sp<android::frameworks::displayservice::V1_0::IDisplayService>::operator_
          (sp_android__frameworks__displayservice__V1_0__IDisplayService_ *this,
          IDisplayService *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (param_1 != (IDisplayService *)0x0) {
    android::RefBase::incStrong(param_1 + *(int *)(*(int *)param_1 + -0xc));
  }
  if (piVar1 != (int *)0x0) {
    android::RefBase::decStrong((void *)(*(int *)(*piVar1 + -0xc) + (int)piVar1));
  }
  if (piVar1 != *(int **)this) {
    android::sp_report_race();
  }
  *(IDisplayService **)this = param_1;
  return this;
}

