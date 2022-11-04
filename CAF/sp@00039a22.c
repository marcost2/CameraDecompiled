
/* android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::sp(android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>
   const&) */

sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ * __thiscall
android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::sp
          (sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ *this,sp *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)param_1;
  *(int **)this = piVar1;
  if (piVar1 != (int *)0x0) {
    android::RefBase::incStrong((void *)((int)piVar1 + *(int *)(*piVar1 + -0xc)));
  }
  return this;
}

