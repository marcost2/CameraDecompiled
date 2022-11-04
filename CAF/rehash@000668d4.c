
/* std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, int>,
   std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, int>,
   std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int,
   std::__1::__hash_value_type<unsigned int, int>, std::__1::equal_to<unsigned int>, true>,
   std::__1::allocator<std::__1::__hash_value_type<unsigned int, int>>>::rehash(unsigned int) */

void __thiscall
std::__1::
__hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
::rehash(__hash_table_std____1____hash_value_type_unsigned_int_int__std____1____unordered_map_hasher_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__hash_unsigned_int__true__std____1____unordered_map_equal_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__equal_to_unsigned_int__true__std____1__allocator_std____1____hash_value_type_unsigned_int_int___
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
  if (param_1 >= uVar3 && param_1 != uVar3) {
LAB_000668f6:
    __ThumbV7PILongThunk__ZNSt3__112__hash_tableINS_17__hash_value_typeIjiEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEj
              (this,param_1);
    return;
  }
  if (param_1 < uVar3) {
    if (uVar3 < 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = count_leading_zeroes(uVar3 - 1 & uVar3);
      uVar1 = uVar1 >> 5;
    }
    uVar4 = FPToFixed((float)(ulonglong)*(uint *)(this + 0xc) / *(float *)(this + 0x10),0x20,0x20,0,
                      1,1);
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
    if (param_1 < uVar3) goto LAB_000668f6;
  }
  return;
}

