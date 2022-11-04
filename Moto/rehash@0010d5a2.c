
/* std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long
   long, android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long,
   std::__1::__hash_value_type<unsigned long long,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   std::__1::equal_to<unsigned long long>, true>,
   std::__1::allocator<std::__1::__hash_value_type<unsigned long long,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>>>::rehash(unsigned
   int) */

void __thiscall
std::__1::
__hash_table<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::__unordered_map_hasher<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::hash<unsigned_long_long>,true>,std::__1::__unordered_map_equal<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::equal_to<unsigned_long_long>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>>>
::rehash(__hash_table_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1____unordered_map_hasher_unsigned_long_long_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1__hash_unsigned_long_long__true__std____1____unordered_map_equal_unsigned_long_long_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1__equal_to_unsigned_long_long__true__std____1__allocator_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor____
         *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 1) {
    param_1 = 2;
  }
  else if ((param_1 - 1 & param_1) != 0) {
    param_1 = std::__1::__next_prime(param_1);
  }
  uVar3 = *(uint *)(this + 4);
  if (param_1 <= uVar3) {
    if (param_1 < uVar3) {
      if (uVar3 < 3) {
        uVar1 = 0;
      }
      else {
        uVar1 = count_leading_zeroes(uVar3 - 1 & uVar3);
        uVar1 = uVar1 >> 5;
      }
      uVar4 = FPToFixed((float)(ulonglong)*(uint *)(this + 0xc) / *(float *)(this + 0x10),0x20,0x20,
                        0,1,1);
      if (uVar1 == 0) {
        uVar4 = std::__1::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        iVar2 = count_leading_zeroes(uVar4 - 1);
        uVar4 = 1 << (0x20U - iVar2 & 0xff);
      }
      if (param_1 < uVar4) {
        param_1 = uVar4;
      }
      if (param_1 < uVar3) goto LAB_0010d5c4;
    }
    return;
  }
LAB_0010d5c4:
  (*(code *)PTR___rehash_0011ab54)(this,param_1);
  return;
}

