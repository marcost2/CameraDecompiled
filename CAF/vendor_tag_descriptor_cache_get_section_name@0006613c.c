
/* android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_section_name(unsigned
   int, unsigned long long) */

undefined4
android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_section_name
          (uint param_1,ulonglong param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00066184 + 0x6614a));
  if (*(uint *)(DAT_00066188 + 0x66152) == 0) {
    __android_log_print();
    uVar1 = 0;
  }
  else {
    uVar1 = camera2::params::VendorTagDescriptorCache::getSectionName
                      (*(uint *)(DAT_00066188 + 0x66152));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00066198 + 0x6617c));
  return uVar1;
}

