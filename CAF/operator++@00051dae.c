
/* std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*,
   int>::TEMPNAMEPLACEHOLDERVALUE() */

__tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int_
* __thiscall
std::__1::
__tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>
::operator__(__tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int_
             *this)

{
  __tree_end_node *p_Var1;
  
  p_Var1 = __tree_next_iter_std____1____tree_end_node_std____1____tree_node_base_void______std____1____tree_node_base_void____
                     (*(__tree_node_base **)this);
  *(__tree_end_node **)this = p_Var1;
  return this;
}

