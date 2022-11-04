
/* android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_tag_type(unsigned
   int, unsigned long long) */

undefined4
android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_tag_type
          (uint param_1,ulonglong param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00066244 + 0x6620a));
  if (*(VendorTagDescriptorCache **)(DAT_00066248 + 0x66212) == (VendorTagDescriptorCache *)0x0) {
    __android_log_print();
    uVar1 = 0;
  }
  else {
    uVar1 = camera2::params::VendorTagDescriptorCache::getTagType
                      (*(VendorTagDescriptorCache **)(DAT_00066248 + 0x66212),param_1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_00066258 + 0x6623c));
  return uVar1;
}

