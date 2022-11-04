
/* android::hardware::camera2::params::VendorTagDescriptorCache::addVendorDescriptor(unsigned long
   long, android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>) */

undefined4
android::hardware::camera2::params::VendorTagDescriptorCache::addVendorDescriptor
          (ulonglong param_1,sp param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint in_r2;
  uint in_r3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  sp local_30 [8];
  ulonglong uStack40;
  int local_20;
  
  puVar1 = (ulonglong *)(uint)(byte)param_2;
  piVar8 = *(int **)(DAT_0006541c + 0x6533a);
  local_20 = *piVar8;
  uVar2 = *(uint *)((int)puVar1 + 4);
  if (uVar2 != 0) {
    uVar9 = uVar2 - 1;
    uVar5 = (in_r3 * 0x5bd1e995 ^ in_r3 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^
            ((in_r2 * 0x5bd1e995 ^ in_r2 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) *
            0x5bd1e995;
    uVar5 = (uVar5 ^ uVar5 >> 0xd) * 0x5bd1e995;
    uVar5 = uVar5 ^ uVar5 >> 0xf;
    if ((uVar9 & uVar2) == 0) {
      uVar7 = uVar9 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar2 <= uVar5) {
        uVar7 = uVar5 - (uVar5 / uVar2) * uVar2;
      }
    }
    piVar4 = *(int **)(*(int *)puVar1 + uVar7 * 4);
    if (piVar4 != (int *)0x0) {
      do {
        while( true ) {
          while( true ) {
            piVar4 = (int *)*piVar4;
            if (piVar4 == (int *)0x0) goto LAB_000653de;
            uVar6 = piVar4[1];
            if (uVar6 != uVar5) break;
            if ((piVar4[2] ^ in_r2 | piVar4[3] ^ in_r3) == 0) {
              __android_log_print();
              uVar3 = 0xffffffea;
              goto LAB_000653f0;
            }
          }
          if ((uVar9 & uVar2) == 0) break;
          if (uVar2 <= uVar6) {
            uVar6 = uVar6 - (uVar6 / uVar2) * uVar2;
          }
          if (uVar6 != uVar7) goto LAB_000653de;
        }
      } while ((uVar6 & uVar9) == uVar7);
    }
  }
LAB_000653de:
  std::__1::
  __hash_table<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::__unordered_map_hasher<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::hash<unsigned_long_long>,true>,std::__1::__unordered_map_equal<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::equal_to<unsigned_long_long>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>>>
  ::
  __emplace_unique_key_args_unsigned_long_long_unsigned_long_long__android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___
            (&uStack40,puVar1,local_30);
  uVar3 = 0;
LAB_000653f0:
  if (*piVar8 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

