
undefined4
android::hardware::camera::common::V1_0::helper::vendor_tag_descriptor_get_tag_type
          (undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_0010c83c + 0x10c7a6));
  iVar2 = *(int *)(DAT_0010c840 + 0x10c7ae);
  if (iVar2 == 0) {
    __android_log_print(6,DAT_0010c844 + 0x10c7da,DAT_0010c848 + 0x10c7dc,DAT_0010c84c + 0x10c7de);
  }
  else {
    uVar1 = *(uint *)(iVar2 + 0x44);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if ((uVar7 & uVar1) == 0) {
        uVar5 = uVar7 & param_2;
      }
      else {
        uVar5 = param_2;
        if (uVar1 <= param_2) {
          uVar5 = param_2 - (param_2 / uVar1) * uVar1;
        }
      }
      piVar3 = *(int **)(*(int *)(iVar2 + 0x40) + uVar5 * 4);
      if (piVar3 != (int *)0x0) {
        for (piVar3 = (int *)*piVar3; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
          uVar4 = piVar3[1];
          if (uVar4 == param_2) {
            if (piVar3[2] == param_2) {
              uVar6 = piVar3[3];
              goto LAB_0010c82a;
            }
          }
          else {
            if ((uVar7 & uVar1) == 0) {
              uVar4 = uVar4 & uVar7;
            }
            else if (uVar1 <= uVar4) {
              if (uVar4 - (uVar4 / uVar1) * uVar1 == uVar5) goto LAB_0010c820;
              break;
            }
            if (uVar4 != uVar5) break;
          }
LAB_0010c820:
        }
      }
    }
  }
  uVar6 = 0xffffffff;
LAB_0010c82a:
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_0010c850 + 0x10c830));
  return uVar6;
}

