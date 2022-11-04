
/* android::hardware::camera2::params::VendorTagDescriptorCache::addVendorDescriptor(unsigned long
   long, android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>) */

void android::hardware::camera2::params::VendorTagDescriptorCache::addVendorDescriptor
               (ulonglong param_1,sp param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint in_r2;
  uint in_r3;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  sp local_30 [2];
  ulonglong uStack40;
  int local_20;
  
  piVar7 = *(int **)(DAT_0010bdcc + 0x10bcea);
  local_20 = *piVar7;
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar1 != 0) {
    uVar8 = uVar1 - 1;
    uVar4 = (in_r3 * 0x5bd1e995 ^ in_r3 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^
            ((in_r2 * 0x5bd1e995 ^ in_r2 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) *
            0x5bd1e995;
    uVar4 = (uVar4 ^ uVar4 >> 0xd) * 0x5bd1e995;
    uVar4 = uVar4 ^ uVar4 >> 0xf;
    if ((uVar8 & uVar1) == 0) {
      uVar6 = uVar8 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar1 <= uVar4) {
        uVar6 = uVar4 - (uVar4 / uVar1) * uVar1;
      }
    }
    piVar3 = *(int **)(*(int *)param_2 + uVar6 * 4);
    if (piVar3 != (int *)0x0) {
      do {
        while( true ) {
          while( true ) {
            piVar3 = (int *)*piVar3;
            if (piVar3 == (int *)0x0) goto LAB_0010bd8e;
            uVar5 = piVar3[1];
            if (uVar5 != uVar4) break;
            if ((piVar3[2] ^ in_r2 | piVar3[3] ^ in_r3) == 0) {
              __android_log_print(6,DAT_0010bdd0 + 0x10bdbc,DAT_0010bdd4 + 0x10bdbe,
                                  DAT_0010bdd8 + 0x10bdc0);
              uVar2 = 0xffffffea;
              goto LAB_0010bda0;
            }
          }
          if ((uVar8 & uVar1) == 0) break;
          if (uVar1 <= uVar5) {
            uVar5 = uVar5 - (uVar5 / uVar1) * uVar1;
          }
          if (uVar5 != uVar6) goto LAB_0010bd8e;
        }
      } while ((uVar5 & uVar8) == uVar6);
    }
  }
LAB_0010bd8e:
  std::__1::
  __hash_table<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::__unordered_map_hasher<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::hash<unsigned_long_long>,true>,std::__1::__unordered_map_equal<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::equal_to<unsigned_long_long>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>>>
  ::
  __emplace_unique_key_args_unsigned_long_long_unsigned_long_long__android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___
            (&uStack40,(ulonglong *)param_2,local_30);
  uVar2 = 0;
LAB_0010bda0:
  if (*piVar7 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

