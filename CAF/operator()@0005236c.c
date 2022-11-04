
/* std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>::TEMPNAMEPLACEHOLDERVALUE(std::__1::__value_type<unsigned
   int, unsigned int> const&, unsigned int const&) const */

void __thiscall
std::__1::
__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>
::operator__(__map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true_
             *this,__value_type *param_1,uint *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)__value_type<unsigned_int,unsigned_int>::__get_value
                             ((__value_type_unsigned_int_unsigned_int_ *)param_1);
  less<unsigned_int>::operator__((less_unsigned_int_ *)this,puVar1,param_2);
  return;
}

