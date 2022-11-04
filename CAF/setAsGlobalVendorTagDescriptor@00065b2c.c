
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::setAsGlobalVendorTagDescriptor(android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>
   const&) */

int android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::
    setAsGlobalVendorTagDescriptor(sp *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00065be0 + 0x65b38));
  ppiVar7 = (int **)(DAT_00065be4 + 0x65b40);
  piVar9 = *ppiVar7;
  piVar8 = *(int **)param_1;
  if (piVar8 != (int *)0x0) {
    piVar2 = piVar8 + 0x28;
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
  }
  if (piVar9 != (int *)0x0) {
    piVar2 = piVar9 + 0x28;
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0x1b);
      (**(code **)(*piVar9 + 4))(piVar9);
    }
  }
  if (piVar9 != *ppiVar7) {
    android::sp_report_race();
  }
  *ppiVar7 = piVar8;
  iVar3 = *(int *)param_1;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x6c) = DAT_00065be8 + 0x65b90;
    iVar4 = DAT_00065bec + 0x65b9e;
    iVar5 = DAT_00065bf0 + 0x65ba0;
    iVar6 = DAT_00065bf4 + 0x65ba2;
    *(int *)(iVar3 + 0x70) = DAT_00065bf8 + 0x65ba4;
    *(int *)(iVar3 + 0x74) = iVar6;
    *(int *)(iVar3 + 0x78) = iVar5;
    *(int *)(iVar3 + 0x7c) = iVar4;
  }
  iVar3 = set_camera_metadata_vendor_ops();
  if (iVar3 != 0) {
    strerror(-iVar3);
    __android_log_print();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00065c08 + 0x65bd8));
  return iVar3;
}

