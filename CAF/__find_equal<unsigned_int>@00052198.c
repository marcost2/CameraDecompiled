
/* std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int,
   unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int,
   unsigned int>, std::__1::less<unsigned int>, true>,
   std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int>>>::__find_equal<unsigned
   int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */

__tree_node_base ** __thiscall
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::__find_equal_unsigned_int_
          (__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
           *this,__tree_end_node **param_1,uint *param_2)

{
  int **this_00;
  __tree_node_base **pp_Var1;
  __map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_
  *p_Var2;
  int iVar3;
  int **this_01;
  
  this_00 = (int **)__root(this);
  pp_Var1 = (__tree_node_base **)__root_ptr(this);
  if (this_00 == (int **)0x0) {
    this_01 = (int **)__end_node(this);
    *param_1 = (__tree_end_node *)this_01;
  }
  else {
    while( true ) {
      while( true ) {
        p_Var2 = (__map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_
                  *)size(this);
        iVar3 = __map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>
                ::operator__(p_Var2,param_2,(__value_type *)(this_00 + 4));
        if (iVar3 == 0) break;
        if (*this_00 == (int *)0x0) {
          *param_1 = (__tree_end_node *)this_00;
          return (__tree_node_base **)this_00;
        }
        pp_Var1 = (__tree_node_base **)
                  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                            ((AbstractUnwindCursor *)this_00);
        this_00 = (int **)*this_00;
      }
      p_Var2 = (__map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_
                *)size(this);
      iVar3 = __map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>
              ::operator__(p_Var2,(__value_type *)(this_00 + 4),param_2);
      if (iVar3 == 0) {
        *param_1 = (__tree_end_node *)this_00;
        return pp_Var1;
      }
      this_01 = this_00 + 1;
      if (*this_01 == (int *)0x0) break;
      pp_Var1 = (__tree_node_base **)
                libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                          ((AbstractUnwindCursor *)this_01);
      this_00 = (int **)*this_01;
    }
    *param_1 = (__tree_end_node *)this_00;
  }
  return (__tree_node_base **)this_01;
}

