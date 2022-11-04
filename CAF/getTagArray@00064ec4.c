
/* android::hardware::camera2::params::VendorTagDescriptorCache::getTagArray(unsigned int*, unsigned
   long long) const */

void __thiscall
android::hardware::camera2::params::VendorTagDescriptorCache::getTagArray
          (VendorTagDescriptorCache *this,uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint in_r2;
  int iVar3;
  uint in_r3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(this + 4);
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
    piVar1 = *(int **)(*(int *)this + uVar6 * 4);
    if (piVar1 != (int *)0x0) {
      do {
        while( true ) {
          while( true ) {
            piVar1 = (int *)*piVar1;
            if (piVar1 == (int *)0x0) goto LAB_00064f60;
            uVar7 = piVar1[1];
            if (uVar5 != uVar7) break;
            if ((piVar1[2] ^ in_r2 | piVar1[3] ^ in_r3) == 0) {
              iVar2 = piVar1[4];
              iVar3 = *(int *)(iVar2 + 0x20);
              if (iVar3 != 0) {
                iVar4 = 0;
                do {
                  param_1[iVar4] = *(uint *)(*(int *)(iVar2 + 0x1c) + iVar4 * 8);
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
          if (uVar7 != uVar6) goto LAB_00064f60;
        }
      } while ((uVar7 & uVar8) == uVar6);
    }
  }
LAB_00064f60:
  __ThumbV7PILongThunk___android_log_print();
  return;
}

