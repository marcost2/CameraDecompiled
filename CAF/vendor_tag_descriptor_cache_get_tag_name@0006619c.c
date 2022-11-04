
/* android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_tag_name(unsigned
   int, unsigned long long) */

undefined4
android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_tag_name
          (uint param_1,ulonglong param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_000661e4 + 0x661aa));
  if (*(uint *)(DAT_000661e8 + 0x661b2) == 0) {
    __android_log_print();
    uVar1 = 0;
  }
  else {
    uVar1 = camera2::params::VendorTagDescriptorCache::getTagName(*(uint *)(DAT_000661e8 + 0x661b2))
    ;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_000661f8 + 0x661dc));
  return uVar1;
}

