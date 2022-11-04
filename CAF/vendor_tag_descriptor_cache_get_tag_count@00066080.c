
/* android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_tag_count(unsigned
   long long) */

undefined4
android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_tag_count
          (ulonglong param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_000660c4 + 0x6608c));
  if (*(VendorTagDescriptorCache **)(DAT_000660c8 + 0x66094) == (VendorTagDescriptorCache *)0x0) {
    __android_log_print();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = camera2::params::VendorTagDescriptorCache::getTagCount
                      (*(VendorTagDescriptorCache **)(DAT_000660c8 + 0x66094));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_000660d8 + 0x660be));
  return uVar1;
}

