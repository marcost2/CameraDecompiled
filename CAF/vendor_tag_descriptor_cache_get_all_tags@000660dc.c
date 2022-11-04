
/* android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_all_tags(unsigned
   int*, unsigned long long) */

void android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_all_tags
               (uint *param_1,ulonglong param_2)

{
  VendorTagDescriptorCache *this;
  VendorTagDescriptorCache **ppVVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00066124 + 0x660ec));
  ppVVar1 = (VendorTagDescriptorCache **)(DAT_00066128 + 0x660f4);
  this = *ppVVar1;
  if (this == (VendorTagDescriptorCache *)0x0) {
    __android_log_print();
    this = *ppVVar1;
  }
  camera2::params::VendorTagDescriptorCache::getTagArray(this,param_1);
  __ThumbV7PILongThunk_pthread_mutex_unlock((pthread_mutex_t *)(DAT_00066138 + 0x6611a));
  return;
}

