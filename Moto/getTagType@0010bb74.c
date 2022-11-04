
/* android::hardware::camera2::params::VendorTagDescriptorCache::getTagType(unsigned int, unsigned
   long long) const */

uint android::hardware::camera2::params::VendorTagDescriptorCache::getTagType
               (uint param_1,ulonglong param_2)

{
  int *piVar1;
  uint **ppuVar2;
  uint in_r1;
  uint in_r2;
  uint in_r3;
  uint **ppuVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 4);
  if (uVar8 != 0) {
    uVar7 = uVar8 - 1;
    uVar4 = (in_r3 * 0x5bd1e995 ^ in_r3 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^
            ((in_r2 * 0x5bd1e995 ^ in_r2 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) *
            0x5bd1e995;
    uVar4 = (uVar4 ^ uVar4 >> 0xd) * 0x5bd1e995;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    if ((uVar7 & uVar8) == 0) {
      uVar5 = uVar7 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar8 <= uVar4) {
        uVar5 = uVar4 - (uVar4 / uVar8) * uVar8;
      }
    }
    piVar1 = *(int **)(*(int *)param_1 + uVar5 * 4);
    if (piVar1 != (int *)0x0) {
      do {
        while( true ) {
          while( true ) {
            piVar1 = (int *)*piVar1;
            if (piVar1 == (int *)0x0) goto LAB_0010bc10;
            uVar6 = piVar1[1];
            if (uVar4 != uVar6) break;
            ppuVar3 = (uint **)(piVar1[2] ^ in_r2 | piVar1[3] ^ in_r3);
            if (ppuVar3 == (uint **)0x0) {
              uVar8 = *(uint *)(piVar1[4] + 0x44);
              if (uVar8 != 0) {
                uVar4 = uVar8 - 1;
                if ((uVar4 & uVar8) == 0) {
                  uVar7 = uVar4 & in_r1;
                }
                else {
                  uVar7 = in_r1;
                  if (uVar8 <= in_r1) {
                    uVar7 = in_r1 - (in_r1 / uVar8) * uVar8;
                  }
                }
                ppuVar2 = *(uint ***)(*(int *)(piVar1[4] + 0x40) + uVar7 * 4);
                if (ppuVar2 != (uint **)0x0) {
                  ppuVar3 = (uint **)*ppuVar2;
                }
                if (ppuVar2 != (uint **)0x0 && ppuVar3 != (uint **)0x0) {
                  do {
                    uVar5 = (uint)ppuVar3[1];
                    if (uVar5 == in_r1) {
                      if (ppuVar3[2] == (uint *)in_r1) {
                        return (uint)ppuVar3[3];
                      }
                    }
                    else {
                      if ((uVar4 & uVar8) == 0) {
                        uVar5 = uVar5 & uVar4;
                      }
                      else if (uVar8 <= uVar5) {
                        uVar5 = uVar5 - (uVar5 / uVar8) * uVar8;
                      }
                      if (uVar5 != uVar7) {
                        return 0xffffffff;
                      }
                    }
                    ppuVar3 = (uint **)*ppuVar3;
                    if (ppuVar3 == (uint **)0x0) {
                      return 0xffffffff;
                    }
                  } while( true );
                }
              }
              return 0xffffffff;
            }
          }
          if ((uVar7 & uVar8) == 0) break;
          if (uVar8 <= uVar6) {
            uVar6 = uVar6 - (uVar6 / uVar8) * uVar8;
          }
          if (uVar6 != uVar5) goto LAB_0010bc10;
        }
      } while ((uVar6 & uVar7) == uVar5);
    }
  }
LAB_0010bc10:
  __android_log_print(6,DAT_0010bca8 + 0x10bc1c,DAT_0010bcac + 0x10bc1e,DAT_0010bcb0 + 0x10bc20);
  return 0;
}

