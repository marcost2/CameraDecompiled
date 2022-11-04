
/* android::frameworks::displayservice::V1_0::IEventCallback::IEventCallback() */

void __thiscall
android::frameworks::displayservice::V1_0::IEventCallback::IEventCallback(IEventCallback *this)

{
  int *piVar1;
  int *in_r1;
  int iVar2;
  
  piVar1 = (int *)hidl::base::V1_0::IBase::IBase((IBase *)this);
  iVar2 = *in_r1;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = in_r1[3];
  return;
}

