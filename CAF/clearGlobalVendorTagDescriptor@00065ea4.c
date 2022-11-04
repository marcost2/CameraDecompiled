
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::clearGlobalVendorTagDescriptor()
    */

void android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::
     clearGlobalVendorTagDescriptor(void)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00065ef8 + 0x65eac));
  set_camera_metadata_vendor_ops();
  ppiVar3 = (int **)(DAT_00065efc + 0x65eba);
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
  __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(DAT_00065f00 + 0x65ef2));
  return;
}

