
/* android::sp<android::IBinder>::~sp() */

sp_android__IBinder_ * __thiscall
android::sp<android::IBinder>::_sp(sp_android__IBinder_ *this,sp *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)piVar1 + *(int *)(*piVar1 + -0xc)));
  }
  return this;
}

