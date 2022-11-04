
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::clearGlobalVendorTagDescriptor()
    */

void android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::
     clearGlobalVendorTagDescriptor(void)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010c8a8 + 0x10c85c));
  set_camera_metadata_vendor_ops(0);
  ppiVar3 = (int **)(DAT_0010c8ac + 0x10c86a);
  piVar4 = *ppiVar3;
  if (piVar4 != (int *)0x0) {
    piVar1 = piVar4 + 0x28;
    ExclusiveAccess(piVar1);
    iVar2 = *piVar1;
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0x1b);
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    if (piVar4 != *ppiVar3) {
      android::sp_report_race();
    }
    *ppiVar3 = (int *)0x0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010c8b0 + 0x10c8a2));
  return;
}

