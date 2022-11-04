
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache::setAsGlobalVendorTagCache(android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache>
   const&) */

int android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache::
    setAsGlobalVendorTagCache(sp *param_1)

{
  bool bVar1;
  int *piVar2;
  void **ppvVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void **ppvVar9;
  int *piVar10;
  int iVar11;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00066054 + 0x65f52));
  piVar10 = (int *)(DAT_00066058 + 0x65f5a);
  ppvVar9 = (void **)*piVar10;
  iVar11 = *(int *)param_1;
  if (iVar11 != 0) {
    piVar2 = (int *)(iVar11 + 0x48);
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
  }
  if (ppvVar9 != (void **)0x0) {
    ppvVar3 = ppvVar9 + 0x12;
    ExclusiveAccess(ppvVar3);
    pvVar5 = *ppvVar3;
    *ppvVar3 = (void *)((int)pvVar5 + -1);
    if (pvVar5 == (void *)0x1) {
      DataMemoryBarrier(0x1b);
      ppvVar3 = (void **)ppvVar9[2];
      while (ppvVar3 != (void **)0x0) {
        pvVar5 = *ppvVar3;
        piVar2 = (int *)ppvVar3[4];
        if (piVar2 != (int *)0x0) {
          piVar4 = piVar2 + 0x28;
          ExclusiveAccess(piVar4);
          iVar6 = *piVar4;
          *piVar4 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0x1b);
            (**(code **)(*piVar2 + 4))(piVar2);
          }
        }
        operator_delete(ppvVar3);
        ppvVar3 = (void **)pvVar5;
      }
      pvVar5 = *ppvVar9;
      *ppvVar9 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      operator_delete(ppvVar9);
    }
  }
  if (ppvVar9 != (void **)*piVar10) {
    android::sp_report_race();
  }
  *piVar10 = iVar11;
  iVar11 = *(int *)param_1;
  if (iVar11 != 0) {
    *(int *)(iVar11 + 0x14) = DAT_0006605c + 0x66002;
    iVar6 = DAT_00066060 + 0x66010;
    iVar7 = DAT_00066064 + 0x66012;
    iVar8 = DAT_00066068 + 0x66014;
    *(int *)(iVar11 + 0x18) = DAT_0006606c + 0x66016;
    *(int *)(iVar11 + 0x1c) = iVar8;
    *(int *)(iVar11 + 0x20) = iVar7;
    *(int *)(iVar11 + 0x24) = iVar6;
  }
  iVar11 = set_camera_metadata_vendor_cache_ops();
  if (iVar11 != 0) {
    strerror(-iVar11);
    __android_log_print();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0006607c + 0x6604a));
  return iVar11;
}

