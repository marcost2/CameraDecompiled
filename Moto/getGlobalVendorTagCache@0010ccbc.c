
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache::getGlobalVendorTagCache()
    */

void __thiscall
android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache::getGlobalVendorTagCache
          (VendorTagDescriptorCache *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010ccf0 + 0x10ccc6));
  iVar2 = *(int *)(DAT_0010ccf4 + 0x10ccce);
  *(int *)this = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x48);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010ccf8 + 0x10ccea));
  return;
}

