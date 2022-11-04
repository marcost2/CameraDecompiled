
void android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_cache_get_all_tags(void)

{
  uint *puVar1;
  undefined4 unaff_r4;
  uint **ppuVar2;
  undefined4 in_stack_ffffffe8;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010cad4 + 0x10ca9c));
  ppuVar2 = (uint **)(DAT_0010cad8 + 0x10caa4);
  puVar1 = *ppuVar2;
  if (puVar1 == (uint *)0x0) {
    __android_log_print(6,DAT_0010cadc + 0x10cab2,DAT_0010cae0 + 0x10cab4,DAT_0010cae4 + 0x10cab6);
    puVar1 = *ppuVar2;
  }
  camera2::params::VendorTagDescriptorCache::getTagArray
            (puVar1,CONCAT44(unaff_r4,in_stack_ffffffe8));
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010cae8 + 0x10caca));
  return;
}

