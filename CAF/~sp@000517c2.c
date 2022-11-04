
/* android::sp<qService::IQService>::~sp() */

sp_qService__IQService_ * __thiscall
android::sp<qService::IQService>::_sp(sp_qService__IQService_ *this,sp *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)piVar1 + *(int *)(*piVar1 + -0xc)));
  }
  return this;
}

