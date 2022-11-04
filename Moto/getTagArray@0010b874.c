
/* android::hardware::camera2::params::VendorTagDescriptorCache::getTagArray(unsigned int*, unsigned
   long long) const */

void android::hardware::camera2::params::VendorTagDescriptorCache::getTagArray
               (uint *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  int in_r1;
  uint in_r2;
  int iVar3;
  uint in_r3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar8 = uVar9 - 1;
    uVar5 = (in_r3 * 0x5bd1e995 ^ in_r3 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^
            ((in_r2 * 0x5bd1e995 ^ in_r2 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) *
            0x5bd1e995;
    uVar5 = (uVar5 ^ uVar5 >> 0xd) * 0x5bd1e995;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    if ((uVar8 & uVar9) == 0) {
      uVar6 = uVar8 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar9 <= uVar5) {
        uVar6 = uVar5 - (uVar5 / uVar9) * uVar9;
      }
    }
    piVar1 = *(int **)(*param_1 + uVar6 * 4);
    if (piVar1 != (int *)0x0) {
      do {
        while( true ) {
          while( true ) {
            piVar1 = (int *)*piVar1;
            if (piVar1 == (int *)0x0) goto LAB_0010b910;
            uVar7 = piVar1[1];
            if (uVar5 != uVar7) break;
            if ((piVar1[2] ^ in_r2 | piVar1[3] ^ in_r3) == 0) {
              iVar2 = piVar1[4];
              iVar3 = *(int *)(iVar2 + 0x20);
              if (iVar3 != 0) {
                iVar4 = 0;
                do {
                  *(undefined4 *)(in_r1 + iVar4 * 4) =
                       *(undefined4 *)(*(int *)(iVar2 + 0x1c) + iVar4 * 8);
                  iVar4 = iVar4 + 1;
                } while (iVar3 != iVar4);
              }
              return;
            }
          }
          if ((uVar8 & uVar9) == 0) break;
          if (uVar9 <= uVar7) {
            uVar7 = uVar7 - (uVar7 / uVar9) * uVar9;
          }
          if (uVar7 != uVar6) goto LAB_0010b910;
        }
      } while ((uVar7 & uVar8) == uVar6);
    }
  }
LAB_0010b910:
  __android_log_print(6,DAT_0010b944 + 0x10b91c,DAT_0010b948 + 0x10b91e,DAT_0010b94c + 0x10b920);
  return;
}

