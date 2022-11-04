
/* android::sp<android::frameworks::displayservice::V1_0::IDisplayService>::TEMPNAMEPLACEHOLDERVALUE(android::sp<android::frameworks::displayservice::V1_0::IDisplayService>&&)
    */

sp_android__frameworks__displayservice__V1_0__IDisplayService_ * __thiscall
android::sp<android::frameworks::displayservice::V1_0::IDisplayService>::operator_
          (sp_android__frameworks__displayservice__V1_0__IDisplayService_ *this,sp *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    android::RefBase::decStrong((void *)(*(int *)(*piVar1 + -0xc) + (int)piVar1));
  }
  if (piVar1 != *(int **)this) {
    android::sp_report_race();
  }
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = 0;
  return this;
}

