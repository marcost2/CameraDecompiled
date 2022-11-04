
void android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_all_tags
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010c660 + 0x10c61e));
  iVar1 = *(int *)(DAT_0010c664 + 0x10c626);
  if (iVar1 == 0) {
    __android_log_print(6,DAT_0010c668 + 0x10c64c,DAT_0010c66c + 0x10c64e,DAT_0010c670 + 0x10c650);
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x20);
    if (iVar2 != 0) {
      iVar3 = 0;
      do {
        *(undefined4 *)(param_2 + iVar3 * 4) = *(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar3 * 8);
        iVar3 = iVar3 + 1;
      } while (iVar2 != iVar3);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010c674 + 0x10c658));
  return;
}

