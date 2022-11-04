
/* std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>,
   void*>>>::TEMPNAMEPLACEHOLDERVALUE(std::__1::__tree_node<std::__1::__value_type<unsigned int,
   unsigned int>, void*>*) */

void __thiscall
std::__1::
__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
::operator__(__tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____
             *this,__tree_node *param_1)

{
  pair *ppVar1;
  
  if (this[4] !=
      (__tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____
       )0x0) {
    ppVar1 = *(pair **)this;
    __tree_key_value_types<std::__1::__value_type<unsigned_int,unsigned_int>>::__get_ptr
              ((__value_type *)(param_1 + 0x10));
    launder_std____1__pair_unsigned_int_const_unsigned_int__(ppVar1);
  }
  if (param_1 != (__tree_node *)0x0) {
    allocator_traits<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
    ::deallocate(*(allocator **)this,param_1,1);
    return;
  }
  return;
}

