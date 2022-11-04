
/* android::hardware::camera2::params::VendorTagDescriptorCache::getTagCount(unsigned long long)
   const */

int android::hardware::camera2::params::VendorTagDescriptorCache::getTagCount(ulonglong param_1)

{
  int *in_r0;
  int *piVar1;
  int iVar2;
  uint in_r2;
  uint in_r3;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = in_r0[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    uVar4 = (in_r3 * 0x5bd1e995 ^ in_r3 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^
            ((in_r2 * 0x5bd1e995 ^ in_r2 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) *
            0x5bd1e995;
    uVar4 = (uVar4 ^ uVar4 >> 0xd) * 0x5bd1e995;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    if ((uVar7 & uVar6) == 0) {
      uVar3 = uVar7 & uVar4;
    }
    else {
      uVar3 = uVar4;
      if (uVar6 <= uVar4) {
        uVar3 = uVar4 - (uVar4 / uVar6) * uVar6;
      }
    }
    piVar1 = *(int **)(*in_r0 + uVar3 * 4);
    if (piVar1 != (int *)0x0) {
      do {
        while( true ) {
          while( true ) {
            piVar1 = (int *)*piVar1;
            if (piVar1 == (int *)0x0) goto LAB_0010b840;
            uVar5 = piVar1[1];
            if (uVar4 != uVar5) break;
            if ((piVar1[2] ^ in_r2 | piVar1[3] ^ in_r3) == 0) {
              iVar2 = *(int *)(piVar1[4] + 0x20);
              if (iVar2 == 0) {
                iVar2 = -1;
              }
              return iVar2;
            }
          }
          if ((uVar7 & uVar6) == 0) break;
          if (uVar6 <= uVar5) {
            uVar5 = uVar5 - (uVar5 / uVar6) * uVar6;
          }
          if (uVar5 != uVar3) goto LAB_0010b840;
        }
      } while ((uVar5 & uVar7) == uVar3);
    }
  }
LAB_0010b840:
  __android_log_print(6,DAT_0010b868 + 0x10b84c,DAT_0010b86c + 0x10b84e,DAT_0010b870 + 0x10b850);
  return 0;
}

