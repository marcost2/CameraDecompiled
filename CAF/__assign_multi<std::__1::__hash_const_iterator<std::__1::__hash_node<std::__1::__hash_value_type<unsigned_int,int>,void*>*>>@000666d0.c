
/* void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, int>,
   std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, int>,
   std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int,
   std::__1::__hash_value_type<unsigned int, int>, std::__1::equal_to<unsigned int>, true>,
   std::__1::allocator<std::__1::__hash_value_type<unsigned int,
   int>>>::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned
   int, int>,
   void*>*>>(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned
   int, int>, void*>*>,
   std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int,
   int>, void*>*>) */

void __thiscall
std::__1::
__hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
::
__assign_multi_std____1____hash_const_iterator_std____1____hash_node_std____1____hash_value_type_unsigned_int_int__void_____
          (__hash_table_std____1____hash_value_type_unsigned_int_int__std____1____unordered_map_hasher_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__hash_unsigned_int__true__std____1____unordered_map_equal_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__equal_to_unsigned_int__true__std____1__allocator_std____1____hash_value_type_unsigned_int_int___
           *this,__hash_const_iterator param_1,__hash_const_iterator param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  __hash_node **pp_Var4;
  int iVar5;
  undefined4 uVar6;
  __hash_node *p_Var7;
  __hash_node **pp_Var8;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    iVar5 = 0;
    do {
      *(undefined4 *)(*(int *)this + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
    *(undefined4 *)(this + 0xc) = 0;
    pp_Var4 = *(__hash_node ***)(this + 8);
    *(undefined4 *)(this + 8) = 0;
    while (pp_Var4 != (__hash_node **)0x0) {
      if (param_1 == param_2) goto LAB_00066716;
      pp_Var4[2] = (__hash_node *)*(undefined4 *)(param_1 + 8);
      pp_Var4[3] = (__hash_node *)*(undefined4 *)(param_1 + 0xc);
      p_Var7 = *pp_Var4;
      __node_insert_multi(this,(__hash_node *)pp_Var4);
      param_1 = *(__hash_const_iterator *)param_1;
      pp_Var4 = (__hash_node **)p_Var7;
    }
  }
joined_r0x00066726:
  for (; param_1 != param_2; param_1 = *(__hash_const_iterator *)param_1) {
    puVar2 = (undefined4 *)operator_new(0x10);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar6 = *(undefined4 *)(param_1 + 0xc);
    *puVar2 = 0;
    puVar2[1] = uVar3;
    puVar2[2] = uVar3;
    puVar2[3] = uVar6;
    __node_insert_multi(this,(__hash_node *)puVar2);
  }
  return;
LAB_00066716:
  do {
    pp_Var8 = (__hash_node **)*pp_Var4;
    operator_delete(pp_Var4);
    pp_Var4 = pp_Var8;
  } while (pp_Var8 != (__hash_node **)0x0);
  goto joined_r0x00066726;
}

