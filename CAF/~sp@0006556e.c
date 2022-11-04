
/* android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache>::~sp() */

sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptorCache_ * __thiscall
android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache>::_sp
          (sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptorCache_ *this,
          sp *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  
  ppvVar1 = *(void ***)this;
  if (ppvVar1 != (void **)0x0) {
    ppvVar2 = ppvVar1 + 0x12;
    ExclusiveAccess(ppvVar2);
    pvVar5 = *ppvVar2;
    *ppvVar2 = (void *)((int)pvVar5 + -1);
    if (pvVar5 == (void *)0x1) {
      DataMemoryBarrier(0x1b);
      ppvVar2 = (void **)ppvVar1[2];
      while (ppvVar2 != (void **)0x0) {
        pvVar5 = *ppvVar2;
        piVar3 = (int *)ppvVar2[4];
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3 + 0x28;
          ExclusiveAccess(piVar4);
          iVar6 = *piVar4;
          *piVar4 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0x1b);
            (**(code **)(*piVar3 + 4))(piVar3);
          }
        }
        operator_delete(ppvVar2);
        ppvVar2 = (void **)pvVar5;
      }
      pvVar5 = *ppvVar1;
      *ppvVar1 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      operator_delete(ppvVar1);
    }
  }
  return this;
}

