
/* android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>::~sp() */

sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor_ * __thiscall
android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>::_sp
          (sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor_ *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 0x28;
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0x1b);
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  return this;
}

