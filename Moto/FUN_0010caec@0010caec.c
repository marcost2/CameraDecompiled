
undefined4 FUN_0010caec(void)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010cb34 + 0x10cafa));
  if (*(uint *)(DAT_0010cb38 + 0x10cb02) == 0) {
    __android_log_print(6,DAT_0010cb3c + 0x10cb1e,DAT_0010cb40 + 0x10cb20,DAT_0010cb44 + 0x10cb22);
    uVar1 = 0;
  }
  else {
    uVar1 = android::hardware::camera2::params::VendorTagDescriptorCache::getSectionName
                      (*(uint *)(DAT_0010cb38 + 0x10cb02),CONCAT44(unaff_r5,unaff_r4));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010cb48 + 0x10cb2c));
  return uVar1;
}

