
undefined4
android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_tag_count(void)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010ca74 + 0x10ca3c));
  if (*(int *)(DAT_0010ca78 + 0x10ca44) == 0) {
    __android_log_print(6,DAT_0010ca7c + 0x10ca5e,DAT_0010ca80 + 0x10ca60,DAT_0010ca84 + 0x10ca62);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = camera2::params::VendorTagDescriptorCache::getTagCount(CONCAT44(unaff_r5,unaff_r4));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010ca88 + 0x10ca6e));
  return uVar1;
}

