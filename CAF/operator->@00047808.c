
/* std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned
   int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*,
   int>>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::__1::
__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>>
::operator__(__map_iterator_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__
             *this)

{
  __value_type_unsigned_int_unsigned_int_ *this_00;
  pair *ppVar1;
  
  this_00 = (__value_type_unsigned_int_unsigned_int_ *)
            __tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>
            ::operator__((__tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int_
                          *)this);
  ppVar1 = (pair *)__value_type<unsigned_int,unsigned_int>::__get_value(this_00);
  launder_std____1__pair_unsigned_int_const_unsigned_int__(ppVar1);
  return;
}

