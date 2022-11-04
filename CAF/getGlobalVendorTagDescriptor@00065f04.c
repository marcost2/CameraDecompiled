
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::getGlobalVendorTagDescriptor()
    */

void __thiscall
android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::getGlobalVendorTagDescriptor
          (VendorTagDescriptor *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00065f38 + 0x65f0e));
  iVar2 = *(int *)(DAT_00065f3c + 0x65f16);
  *(int *)this = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0xa0);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00065f40 + 0x65f32));
  return;
}

