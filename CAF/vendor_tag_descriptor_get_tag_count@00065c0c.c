
/* android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_tag_count(vendor_tag_ops
   const*) */

int android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_tag_count
              (vendor_tag_ops *param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00065c4c + 0x65c14));
  if (*(int *)(DAT_00065c50 + 0x65c1c) == 0) {
    __android_log_print();
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_00065c50 + 0x65c1c) + 0x20);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00065c60 + 0x65c46));
  return iVar1;
}

