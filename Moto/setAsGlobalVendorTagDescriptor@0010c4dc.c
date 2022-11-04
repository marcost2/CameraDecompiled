
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::setAsGlobalVendorTagDescriptor(android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>
   const&) */

int android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::
    setAsGlobalVendorTagDescriptor(sp *param_1)

{
  bool bVar1;
  int *piVar2;
  sp sVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int **ppiVar8;
  int *piVar9;
  int *piVar10;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010c590 + 0x10c4e8));
  ppiVar8 = (int **)(DAT_0010c594 + 0x10c4f0);
  piVar10 = *ppiVar8;
  piVar9 = (int *)*param_1;
  if (piVar9 != (int *)0x0) {
    piVar2 = piVar9 + 0x28;
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
  }
  if (piVar10 != (int *)0x0) {
    piVar2 = piVar10 + 0x28;
    ExclusiveAccess(piVar2);
    iVar5 = *piVar2;
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0x1b);
      (**(code **)(*piVar10 + 4))(piVar10);
    }
  }
  if (piVar10 != *ppiVar8) {
    android::sp_report_race();
  }
  *ppiVar8 = piVar9;
  sVar3 = *param_1;
  if (sVar3 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)(sVar3 + 0x6c);
    *piVar9 = DAT_0010c598 + 0x10c540;
    iVar5 = DAT_0010c59c + 0x10c54e;
    iVar6 = DAT_0010c5a0 + 0x10c550;
    iVar7 = DAT_0010c5a4 + 0x10c552;
    *(int *)(sVar3 + 0x70) = DAT_0010c5a8 + 0x10c554;
    *(int *)(sVar3 + 0x74) = iVar7;
    *(int *)(sVar3 + 0x78) = iVar6;
    *(int *)(sVar3 + 0x7c) = iVar5;
  }
  iVar5 = set_camera_metadata_vendor_ops(piVar9);
  if (iVar5 != 0) {
    pcVar4 = strerror(-iVar5);
    __android_log_print(6,DAT_0010c5ac + 0x10c57c,DAT_0010c5b0 + 0x10c57e,DAT_0010c5b4 + 0x10c580,
                        pcVar4,iVar5);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010c5b8 + 0x10c588));
  return iVar5;
}

