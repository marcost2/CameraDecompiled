
/* std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, int>,
   std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, int>,
   std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int,
   std::__1::__hash_value_type<unsigned int, int>, std::__1::equal_to<unsigned int>, true>,
   std::__1::allocator<std::__1::__hash_value_type<unsigned int,
   int>>>::__node_insert_multi(std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, int>,
   void*>*) */

__hash_node * __thiscall
std::__1::
__hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
::__node_insert_multi
          (__hash_table_std____1____hash_value_type_unsigned_int_int__std____1____unordered_map_hasher_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__hash_unsigned_int__true__std____1____unordered_map_equal_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__equal_to_unsigned_int__true__std____1__allocator_std____1____hash_value_type_unsigned_int_int___
           *this,__hash_node *param_1)

{
  __hash_node **pp_Var1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 4) = uVar3;
  pp_Var1 = (__hash_node **)
            __node_insert_multi_prepare(this,uVar3,(__hash_value_type *)(param_1 + 8));
  uVar3 = *(uint *)(this + 4);
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = uVar3 - 1;
  uVar6 = uVar5 & uVar3;
  if (uVar6 == 0) {
    uVar4 = uVar4 & uVar5;
    if (pp_Var1 != (__hash_node **)0x0) goto LAB_00066780;
LAB_000667aa:
    pp_Var1 = (__hash_node **)(this + 8);
    *(__hash_node **)param_1 = *pp_Var1;
    *pp_Var1 = param_1;
    *(__hash_node ***)(*(int *)this + uVar4 * 4) = pp_Var1;
    if (*(int *)param_1 == 0) goto LAB_000667e4;
    uVar2 = *(uint *)(*(int *)param_1 + 4);
    if (uVar6 == 0) {
      uVar2 = uVar2 & uVar5;
    }
    else if (uVar3 <= uVar2) {
      uVar2 = uVar2 - (uVar2 / uVar3) * uVar3;
    }
  }
  else {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - (uVar4 / uVar3) * uVar3;
    }
    if (pp_Var1 == (__hash_node **)0x0) goto LAB_000667aa;
LAB_00066780:
    *(__hash_node **)param_1 = *pp_Var1;
    *pp_Var1 = param_1;
    if (*(int *)param_1 == 0) goto LAB_000667e4;
    uVar2 = *(uint *)(*(int *)param_1 + 4);
    if (uVar6 == 0) {
      uVar2 = uVar2 & uVar5;
    }
    else if (uVar3 <= uVar2) {
      uVar2 = uVar2 - (uVar2 / uVar3) * uVar3;
    }
    if (uVar2 == uVar4) goto LAB_000667e4;
  }
  *(__hash_node **)(*(int *)this + uVar2 * 4) = param_1;
LAB_000667e4:
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  return param_1;
}

