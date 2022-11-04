
/* android::sp<android::IServiceManager>::~sp() */

sp_android__IServiceManager_ * __thiscall
android::sp<android::IServiceManager>::_sp(sp_android__IServiceManager_ *this,sp *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)piVar1 + *(int *)(*piVar1 + -0xc)));
  }
  return this;
}

