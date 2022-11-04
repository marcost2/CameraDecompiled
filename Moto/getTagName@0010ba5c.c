
/* android::hardware::camera2::params::VendorTagDescriptorCache::getTagName(unsigned int, unsigned
   long long) const */

void android::hardware::camera2::params::VendorTagDescriptorCache::getTagName
               (uint param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_r2;
  uint in_r3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  String8 aSStack36 [4];
  int local_20;
  
  piVar8 = *(int **)(DAT_0010bb64 + 0x10ba68);
  local_20 = *piVar8;
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 != 0) {
    uVar5 = ((in_r2 * 0x5bd1e995 ^ in_r2 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) *
            0x5bd1e995 ^ (in_r3 * 0x5bd1e995 ^ in_r3 * 0x5bd1e995 >> 0x18) * 0x5bd1e995;
    uVar10 = uVar4 - 1;
    uVar5 = (uVar5 ^ uVar5 >> 0xd) * 0x5bd1e995;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    if ((uVar10 & uVar4) == 0) {
      uVar9 = uVar10 & uVar5;
    }
    else {
      uVar9 = uVar5;
      if (uVar4 <= uVar5) {
        uVar9 = uVar5 - (uVar5 / uVar4) * uVar4;
      }
    }
    piVar1 = *(int **)(*(int *)param_1 + uVar9 * 4);
    if (piVar1 != (int *)0x0) {
      do {
        while( true ) {
          while( true ) {
            piVar1 = (int *)*piVar1;
            if (piVar1 == (int *)0x0) goto LAB_0010bb0c;
            uVar7 = piVar1[1];
            if (uVar5 != uVar7) break;
            if ((piVar1[2] ^ in_r2 | piVar1[3] ^ in_r3) == 0) {
              iVar6 = piVar1[4];
              android::String8::String8(aSStack36);
              iVar2 = android::SortedVectorImpl::indexOf((void *)(iVar6 + 0x18));
              android::String8::_String8(aSStack36);
              if (iVar2 < 0) goto LAB_0010bb1e;
              uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x1c) + iVar2 * 8 + 4);
              goto LAB_0010bb20;
            }
          }
          if ((uVar10 & uVar4) == 0) break;
          if (uVar4 <= uVar7) {
            uVar7 = uVar7 - (uVar7 / uVar4) * uVar4;
          }
          if (uVar7 != uVar9) goto LAB_0010bb0c;
        }
      } while ((uVar7 & uVar10) == uVar9);
    }
  }
LAB_0010bb0c:
  __android_log_print(6,DAT_0010bb68 + 0x10bb18,DAT_0010bb6c + 0x10bb1a,DAT_0010bb70 + 0x10bb1c);
LAB_0010bb1e:
  uVar3 = 0;
LAB_0010bb20:
  if (*piVar8 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

