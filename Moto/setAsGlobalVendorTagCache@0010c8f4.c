
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache::setAsGlobalVendorTagCache(android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache>
   const&) */

int android::hardware::camera::common::V1_0::helper::VendorTagDescriptorCache::
    setAsGlobalVendorTagCache(sp *param_1)

{
  bool bVar1;
  int *piVar2;
  void **ppvVar3;
  int *piVar4;
  char *pcVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void **ppvVar10;
  sp *psVar11;
  sp sVar12;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010ca04 + 0x10c902));
  psVar11 = (sp *)(DAT_0010ca08 + 0x10c90a);
  ppvVar10 = (void **)*psVar11;
  sVar12 = *param_1;
  if (sVar12 != 0) {
    piVar2 = (int *)(sVar12 + 0x48);
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
  }
  if (ppvVar10 != (void **)0x0) {
    ppvVar3 = ppvVar10 + 0x12;
    ExclusiveAccess(ppvVar3);
    pvVar6 = *ppvVar3;
    *ppvVar3 = (void *)((int)pvVar6 + -1);
    if (pvVar6 == (void *)0x1) {
      DataMemoryBarrier(0x1b);
      ppvVar3 = (void **)ppvVar10[2];
      while (ppvVar3 != (void **)0x0) {
        pvVar6 = *ppvVar3;
        piVar2 = (int *)ppvVar3[4];
        if (piVar2 != (int *)0x0) {
          piVar4 = piVar2 + 0x28;
          ExclusiveAccess(piVar4);
          iVar7 = *piVar4;
          *piVar4 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0x1b);
            (**(code **)(*piVar2 + 4))(piVar2);
          }
        }
        operator_delete(ppvVar3);
        ppvVar3 = (void **)pvVar6;
      }
      pvVar6 = *ppvVar10;
      *ppvVar10 = (void *)0x0;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      operator_delete(ppvVar10);
    }
  }
  if (ppvVar10 != (void **)*psVar11) {
    android::sp_report_race();
  }
  *psVar11 = sVar12;
  sVar12 = *param_1;
  if (sVar12 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(sVar12 + 0x14);
    *piVar2 = DAT_0010ca0c + 0x10c9b2;
    iVar7 = DAT_0010ca10 + 0x10c9c0;
    iVar8 = DAT_0010ca14 + 0x10c9c2;
    iVar9 = DAT_0010ca18 + 0x10c9c4;
    *(int *)(sVar12 + 0x18) = DAT_0010ca1c + 0x10c9c6;
    *(int *)(sVar12 + 0x1c) = iVar9;
    *(int *)(sVar12 + 0x20) = iVar8;
    *(int *)(sVar12 + 0x24) = iVar7;
  }
  iVar7 = set_camera_metadata_vendor_cache_ops(piVar2);
  if (iVar7 != 0) {
    pcVar5 = strerror(-iVar7);
    __android_log_print(6,DAT_0010ca20 + 0x10c9ee,DAT_0010ca24 + 0x10c9f0,DAT_0010ca28 + 0x10c9f2,
                        pcVar5,iVar7);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010ca2c + 0x10c9fa));
  return iVar7;
}

