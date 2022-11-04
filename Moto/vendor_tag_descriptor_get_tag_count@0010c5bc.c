
int android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_tag_count(void)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010c5fc + 0x10c5c4));
  if (*(int *)(DAT_0010c600 + 0x10c5cc) == 0) {
    __android_log_print(6,DAT_0010c604 + 0x10c5e6,DAT_0010c608 + 0x10c5e8,DAT_0010c60c + 0x10c5ea);
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_0010c600 + 0x10c5cc) + 0x20);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010c610 + 0x10c5f6));
  return iVar1;
}

