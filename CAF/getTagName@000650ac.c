
/* android::hardware::camera2::params::VendorTagDescriptorCache::getTagName(unsigned int, unsigned
   long long) const */

undefined4 android::hardware::camera2::params::VendorTagDescriptorCache::getTagName(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char *in_r1;
  uint in_r2;
  uint in_r3;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  String8 aSStack36 [4];
  int local_20;
  
  piVar7 = *(int **)(DAT_000651b4 + 0x650b8);
  local_20 = *piVar7;
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 != 0) {
    uVar4 = ((in_r2 * 0x5bd1e995 ^ in_r2 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) *
            0x5bd1e995 ^ (in_r3 * 0x5bd1e995 ^ in_r3 * 0x5bd1e995 >> 0x18) * 0x5bd1e995;
    uVar9 = uVar3 - 1;
    uVar4 = (uVar4 ^ uVar4 >> 0xd) * 0x5bd1e995;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    if ((uVar9 & uVar3) == 0) {
      uVar8 = uVar9 & uVar4;
    }
    else {
      uVar8 = uVar4;
      if (uVar3 <= uVar4) {
        uVar8 = uVar4 - (uVar4 / uVar3) * uVar3;
      }
    }
    piVar1 = *(int **)(*(int *)param_1 + uVar8 * 4);
    if (piVar1 != (int *)0x0) {
      do {
        while( true ) {
          while( true ) {
            piVar1 = (int *)*piVar1;
            if (piVar1 == (int *)0x0) goto LAB_0006515c;
            uVar6 = piVar1[1];
            if (uVar4 != uVar6) break;
            if ((piVar1[2] ^ in_r2 | piVar1[3] ^ in_r3) == 0) {
              iVar5 = piVar1[4];
              android::String8::String8(aSStack36,in_r1);
              uVar10 = android::SortedVectorImpl::indexOf((key_value_pair_t *)(iVar5 + 0x18));
              android::String8::_String8(aSStack36,(char *)((ulonglong)uVar10 >> 0x20));
              if ((int)uVar10 < 0) goto LAB_0006516e;
              uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x1c) + (int)uVar10 * 8 + 4);
              goto LAB_00065170;
            }
          }
          if ((uVar9 & uVar3) == 0) break;
          if (uVar3 <= uVar6) {
            uVar6 = uVar6 - (uVar6 / uVar3) * uVar3;
          }
          if (uVar6 != uVar8) goto LAB_0006515c;
        }
      } while ((uVar6 & uVar9) == uVar8);
    }
  }
LAB_0006515c:
  __android_log_print();
LAB_0006516e:
  uVar2 = 0;
LAB_00065170:
  if (*piVar7 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

