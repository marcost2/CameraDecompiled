
/* std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, int>,
   std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, int>,
   std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int,
   std::__1::__hash_value_type<unsigned int, int>, std::__1::equal_to<unsigned int>, true>,
   std::__1::allocator<std::__1::__hash_value_type<unsigned int,
   int>>>::__node_insert_multi_prepare(unsigned int, std::__1::__hash_value_type<unsigned int,
   int>&) */

int * __thiscall
std::__1::
__hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
::__node_insert_multi_prepare
          (__hash_table_std____1____hash_value_type_unsigned_int_int__std____1____unordered_map_hasher_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__hash_unsigned_int__true__std____1____unordered_map_equal_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__equal_to_unsigned_int__true__std____1__allocator_std____1____hash_value_type_unsigned_int_int___
           *this,uint param_1,__hash_value_type *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  
  uVar2 = *(uint *)(this + 4);
  if ((uVar2 == 0) ||
     ((int)((uint)(*(float *)(this + 0x10) * (float)(ulonglong)uVar2 <
                  (float)(ulonglong)(*(int *)(this + 0xc) + 1)) << 0x1f) < 0)) {
    if (uVar2 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar2 & uVar2 - 1;
      if (uVar3 != 0) {
        uVar3 = 1;
      }
    }
    uVar3 = uVar3 | uVar2 << 1;
    uVar2 = FPToFixed((float)(ulonglong)(*(int *)(this + 0xc) + 1) / *(float *)(this + 0x10),0x20,
                      0x20,0,1,1);
    if (uVar3 < uVar2) {
      uVar3 = uVar2;
    }
    rehash(this,uVar3);
    uVar2 = *(uint *)(this + 4);
  }
  uVar3 = uVar2 - 1;
  if ((uVar3 & uVar2) == 0) {
    uVar4 = uVar3 & param_1;
  }
  else {
    uVar4 = param_1;
    if (uVar2 <= param_1) {
      uVar4 = param_1 - (param_1 / uVar2) * uVar2;
    }
  }
  piVar8 = *(int **)(*(int *)this + uVar4 * 4);
  if (piVar8 != (int *)0x0) {
    uVar6 = 0;
    while( true ) {
      uVar5 = uVar6;
      piVar1 = piVar8;
      piVar8 = (int *)*piVar8;
      if (piVar8 == (int *)0x0) {
        return piVar1;
      }
      uVar6 = piVar8[1];
      if ((uVar3 & uVar2) == 0) {
        uVar7 = uVar6 & uVar3;
      }
      else {
        uVar7 = uVar6;
        if (uVar2 <= uVar6) {
          uVar7 = uVar6 - (uVar6 / uVar2) * uVar2;
        }
      }
      if (uVar7 != uVar4) break;
      if (uVar6 == param_1) {
        uVar7 = count_leading_zeroes(piVar8[2] - *(int *)param_2);
        uVar7 = uVar7 >> 5;
      }
      else {
        uVar7 = 0;
      }
      uVar6 = uVar5 | uVar7;
      if ((uVar7 == 0) && (((uVar5 ^ 1) & 1) == 0)) {
        return piVar1;
      }
    }
    return piVar1;
  }
  return (int *)0x0;
}

