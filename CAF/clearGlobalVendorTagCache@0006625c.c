
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache::clearGlobalVendorTagCache()
    */

void android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache::
     clearGlobalVendorTagCache(void)

{
  void **ppvVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  void **ppvVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00066300 + 0x66266));
  set_camera_metadata_vendor_cache_ops();
  puVar6 = (undefined4 *)(DAT_00066304 + 0x66274);
  ppvVar7 = (void **)*puVar6;
  if (ppvVar7 != (void **)0x0) {
    ppvVar1 = ppvVar7 + 0x12;
    ExclusiveAccess(ppvVar1);
    pvVar4 = *ppvVar1;
    *ppvVar1 = (void *)((int)pvVar4 + -1);
    if (pvVar4 == (void *)0x1) {
      DataMemoryBarrier(0x1b);
      ppvVar1 = (void **)ppvVar7[2];
      while (ppvVar1 != (void **)0x0) {
        pvVar4 = *ppvVar1;
        piVar2 = (int *)ppvVar1[4];
        if (piVar2 != (int *)0x0) {
          piVar3 = piVar2 + 0x28;
          ExclusiveAccess(piVar3);
          iVar5 = *piVar3;
          *piVar3 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0x1b);
            (**(code **)(*piVar2 + 4))(piVar2);
          }
        }
        operator_delete(ppvVar1);
        ppvVar1 = (void **)pvVar4;
      }
      pvVar4 = *ppvVar7;
      *ppvVar7 = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      operator_delete(ppvVar7);
    }
    if (ppvVar7 != (void **)*puVar6) {
      android::sp_report_race();
    }
    *puVar6 = 0;
  }
  __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(DAT_00066308 + 0x662fa));
  return;
}

