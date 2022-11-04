
/* std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>
   std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::find<unsigned int>(unsigned int const&) */

__tree_iterator __thiscall
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::find_unsigned_int_
          (__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
           *this,uint *param_1)

{
  __tree_iterator _Var1;
  __tree_node *p_Var2;
  __tree_end_node *p_Var3;
  int iVar4;
  __map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_
  *this_00;
  __value_type *p_Var5;
  int *piVar6;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  
  piVar6 = *(int **)(DAT_00052658 + 0x525f2);
  local_18 = *piVar6;
  p_Var2 = (__tree_node *)__root(this);
  p_Var3 = (__tree_end_node *)__end_node(this);
  _Var1 = __lower_bound_unsigned_int_(this,param_1,p_Var2,p_Var3);
  local_1c = (uint)(byte)_Var1;
  local_20 = end();
  iVar4 = operator__((__tree_iterator *)&local_1c,(__tree_iterator *)&local_20);
  if (iVar4 != 0) {
    this_00 = (__map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_
               *)size(this);
    p_Var5 = (__value_type *)
             __tree_const_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>
             ::operator_((__tree_const_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int_
                          *)&local_1c);
    iVar4 = __map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>
            ::operator__(this_00,param_1,p_Var5);
    if (iVar4 == 0) {
      _Var1 = SUB41(local_1c,0);
      goto LAB_00052648;
    }
  }
  _Var1 = (__tree_iterator)end();
LAB_00052648:
  if (*piVar6 == local_18) {
    return _Var1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

