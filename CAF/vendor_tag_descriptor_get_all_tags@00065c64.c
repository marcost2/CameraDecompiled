
/* android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_all_tags(vendor_tag_ops
   const*, unsigned int*) */

void android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_all_tags
               (vendor_tag_ops *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00065cb0 + 0x65c6e));
  iVar1 = *(int *)(DAT_00065cb4 + 0x65c76);
  if (iVar1 == 0) {
    __android_log_print();
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x20);
    if (iVar2 != 0) {
      iVar3 = 0;
      do {
        param_2[iVar3] = *(uint *)(*(int *)(iVar1 + 0x1c) + iVar3 * 8);
        iVar3 = iVar3 + 1;
      } while (iVar2 != iVar3);
    }
  }
  __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(DAT_00065cc4 + 0x65ca8));
  return;
}

