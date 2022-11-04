
undefined4 FUN_0010cb4c(void)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010cb94 + 0x10cb5a));
  if (*(uint *)(DAT_0010cb98 + 0x10cb62) == 0) {
    __android_log_print(6,DAT_0010cb9c + 0x10cb7e,DAT_0010cba0 + 0x10cb80,DAT_0010cba4 + 0x10cb82);
    uVar1 = 0;
  }
  else {
    uVar1 = android::hardware::camera2::params::VendorTagDescriptorCache::getTagName
                      (*(uint *)(DAT_0010cb98 + 0x10cb62),CONCAT44(unaff_r5,unaff_r4));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010cba8 + 0x10cb8c));
  return uVar1;
}

