
/* android::hardware::camera2::params::VendorTagDescriptorCache::getSectionName(unsigned int,
   unsigned long long) const */

undefined4
android::hardware::camera2::params::VendorTagDescriptorCache::getSectionName(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_r2;
  uint in_r3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  
  piVar9 = *(int **)(DAT_0006509c + 0x64fac);
  iVar7 = *piVar9;
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 != 0) {
    uVar6 = ((in_r2 * 0x5bd1e995 ^ in_r2 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) *
            0x5bd1e995 ^ (in_r3 * 0x5bd1e995 ^ in_r3 * 0x5bd1e995 >> 0x18) * 0x5bd1e995;
    uVar11 = uVar4 - 1;
    uVar6 = (uVar6 ^ uVar6 >> 0xd) * 0x5bd1e995;
    uVar6 = uVar6 ^ uVar6 >> 0xf;
    if ((uVar11 & uVar4) == 0) {
      uVar10 = uVar11 & uVar6;
    }
    else {
      uVar10 = uVar6;
      if (uVar4 <= uVar6) {
        uVar10 = uVar6 - (uVar6 / uVar4) * uVar4;
      }
    }
    piVar1 = *(int **)(*(int *)param_1 + uVar10 * 4);
    if (piVar1 != (int *)0x0) {
      do {
        while( true ) {
          while( true ) {
            piVar1 = (int *)*piVar1;
            if (piVar1 == (int *)0x0) goto LAB_00065050;
            uVar8 = piVar1[1];
            if (uVar6 != uVar8) break;
            if ((piVar1[2] ^ in_r2 | piVar1[3] ^ in_r3) == 0) {
              iVar5 = piVar1[4];
              iVar2 = android::SortedVectorImpl::indexOf((key_value_pair_t *)(iVar5 + 0x2c));
              if (iVar2 < 0) goto LAB_00065062;
              uVar3 = *(undefined4 *)
                       (*(int *)(iVar5 + 0x58) +
                       *(int *)(*(int *)(iVar5 + 0x30) + iVar2 * 8 + 4) * 4);
              goto LAB_00065064;
            }
          }
          if ((uVar11 & uVar4) == 0) break;
          if (uVar4 <= uVar8) {
            uVar8 = uVar8 - (uVar8 / uVar4) * uVar4;
          }
          if (uVar8 != uVar10) goto LAB_00065050;
        }
      } while ((uVar8 & uVar11) == uVar10);
    }
  }
LAB_00065050:
  __android_log_print();
LAB_00065062:
  uVar3 = 0;
LAB_00065064:
  if (*piVar9 != iVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

