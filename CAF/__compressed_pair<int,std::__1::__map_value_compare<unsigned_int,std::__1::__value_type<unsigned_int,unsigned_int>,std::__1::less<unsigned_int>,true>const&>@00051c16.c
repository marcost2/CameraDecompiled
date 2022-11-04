
/* std::__1::__compressed_pair<unsigned int, std::__1::__map_value_compare<unsigned int,
   std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>,
   true>>::__compressed_pair<int, std::__1::__map_value_compare<unsigned int,
   std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>
   const&>(int&&, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int,
   unsigned int>, std::__1::less<unsigned int>, true> const&) */

void __thiscall
std::__1::
__compressed_pair<unsigned_int,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>>
::
__compressed_pair_int_std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_const__
          (__compressed_pair_unsigned_int_std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__
           *this,int *param_1,__map_value_compare *param_2)

{
  int *piVar1;
  __map_value_compare *p_Var2;
  
  piVar1 = (int *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                            ((AbstractUnwindCursor *)param_1);
  __compressed_pair_elem<unsigned_int,0,false>::__compressed_pair_elem_int_void_
            ((__compressed_pair_elem_unsigned_int_0_false_ *)this,piVar1);
  p_Var2 = (__map_value_compare *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_2);
  __compressed_pair_elem<std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,1,true>
  ::
  __compressed_pair_elem_std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_const__void_
            ((__compressed_pair_elem_std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__1_true_
              *)this,p_Var2);
  return;
}

