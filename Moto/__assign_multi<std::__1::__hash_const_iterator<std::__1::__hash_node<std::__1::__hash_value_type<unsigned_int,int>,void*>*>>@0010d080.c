
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
  int *piVar2;
  int **ppiVar3;
  int iVar4;
  int *piVar5;
  int **ppiVar6;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*(int *)this + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
    *(undefined4 *)(this + 0xc) = 0;
    ppiVar3 = *(int ***)(this + 8);
    *(undefined4 *)(this + 8) = 0;
    while (ppiVar3 != (int **)0x0) {
      if (param_1 == param_2) goto LAB_0010d0c6;
      ppiVar3[2] = *(int **)(param_1 + 8);
      ppiVar3[3] = *(int **)(param_1 + 0xc);
      ppiVar6 = (int **)*ppiVar3;
      __node_insert_multi((int *)this,ppiVar3);
      param_1 = *(__hash_const_iterator *)param_1;
      ppiVar3 = ppiVar6;
    }
  }
joined_r0x0010d0d6:
  for (; param_1 != param_2; param_1 = *(__hash_const_iterator *)param_1) {
    ppiVar3 = (int **)operator_new(0x10);
    piVar2 = *(int **)(param_1 + 8);
    piVar5 = *(int **)(param_1 + 0xc);
    *ppiVar3 = (int *)0x0;
    ppiVar3[1] = piVar2;
    ppiVar3[2] = piVar2;
    ppiVar3[3] = piVar5;
    __node_insert_multi((int *)this,ppiVar3);
  }
  return;
LAB_0010d0c6:
  do {
    ppiVar6 = (int **)*ppiVar3;
    operator_delete(ppiVar3);
    ppiVar3 = ppiVar6;
  } while (ppiVar6 != (int **)0x0);
  goto joined_r0x0010d0d6;
}

