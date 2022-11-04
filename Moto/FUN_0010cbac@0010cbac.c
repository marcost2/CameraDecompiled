
undefined4 FUN_0010cbac(void)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010cbf4 + 0x10cbba));
  if (*(uint *)(DAT_0010cbf8 + 0x10cbc2) == 0) {
    __android_log_print(6,DAT_0010cbfc + 0x10cbde,DAT_0010cc00 + 0x10cbe0,DAT_0010cc04 + 0x10cbe2);
    uVar1 = 0;
  }
  else {
    uVar1 = android::hardware::camera2::params::VendorTagDescriptorCache::getTagType
                      (*(uint *)(DAT_0010cbf8 + 0x10cbc2),CONCAT44(unaff_r5,unaff_r4));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010cc08 + 0x10cbec));
  return uVar1;
}

