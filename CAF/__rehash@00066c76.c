
/* std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long
   long, android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long,
   std::__1::__hash_value_type<unsigned long long,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   std::__1::equal_to<unsigned long long>, true>,
   std::__1::allocator<std::__1::__hash_value_type<unsigned long long,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>>>::__rehash(unsigned
   int) */

void __thiscall
std::__1::
__hash_table<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::__unordered_map_hasher<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::hash<unsigned_long_long>,true>,std::__1::__unordered_map_equal<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::equal_to<unsigned_long_long>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>>>
::__rehash(__hash_table_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1____unordered_map_hasher_unsigned_long_long_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1__hash_unsigned_long_long__true__std____1____unordered_map_equal_unsigned_long_long_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1__equal_to_unsigned_long_long__true__std____1__allocator_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor____
           *this,uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  if (param_1 == 0) {
    pvVar1 = *(void **)this;
    *(undefined4 *)this = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = operator_new(param_1 << 2);
    pvVar2 = *(void **)this;
    *(void **)this = pvVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    uVar3 = 0;
    *(uint *)(this + 4) = param_1;
    do {
      *(undefined4 *)(*(int *)this + uVar3 * 4) = 0;
      uVar3 = uVar3 + 1;
    } while (param_1 != uVar3);
    piVar7 = *(int **)(this + 8);
    if (piVar7 != (int *)0x0) {
      uVar3 = piVar7[1];
      uVar9 = param_1 - 1;
      if ((uVar9 & param_1) == 0) {
        uVar3 = uVar3 & uVar9;
      }
      else if (param_1 <= uVar3) {
        uVar3 = uVar3 - (uVar3 / param_1) * param_1;
      }
      *(__hash_table_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1____unordered_map_hasher_unsigned_long_long_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1__hash_unsigned_long_long__true__std____1____unordered_map_equal_unsigned_long_long_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1__equal_to_unsigned_long_long__true__std____1__allocator_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor____
        **)(*(int *)this + uVar3 * 4) = this + 8;
      while (piVar8 = piVar7, piVar7 = (int *)*piVar8, piVar7 != (int *)0x0) {
        uVar4 = piVar7[1];
        if ((uVar9 & param_1) == 0) {
          uVar4 = uVar4 & uVar9;
        }
        else if (param_1 <= uVar4) {
          uVar4 = uVar4 - (uVar4 / param_1) * param_1;
        }
        if (uVar4 != uVar3) {
          if (*(int *)(*(int *)this + uVar4 * 4) == 0) {
            *(int **)(*(int *)this + uVar4 * 4) = piVar8;
            uVar3 = uVar4;
          }
          else {
            piVar6 = piVar7;
            do {
              puVar5 = piVar6;
              piVar6 = (int *)*puVar5;
              if (piVar6 == (undefined4 *)0x0) break;
            } while ((piVar6[2] ^ piVar7[2] | piVar6[3] ^ piVar7[3]) == 0);
            *piVar8 = (int)piVar6;
            *puVar5 = **(undefined4 **)(*(int *)this + uVar4 * 4);
            **(int **)(*(int *)this + uVar4 * 4) = (int)piVar7;
            piVar7 = piVar8;
          }
        }
      }
    }
  }
  return;
}

