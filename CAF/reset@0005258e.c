
/* std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>,
   std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>>::reset(std::__1::__tree_node<std::__1::__value_type<unsigned int,
   unsigned int>, void*>*) */

void __thiscall
std::__1::
unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
::reset(unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
        *this,__tree_node *param_1)

{
  __tree_node **pp_Var1;
  __tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____
  *this_00;
  __tree_node *p_Var2;
  
  pp_Var1 = (__tree_node **)launder_std____1__pair_unsigned_int_const_unsigned_int__((pair *)this);
  p_Var2 = *pp_Var1;
  pp_Var1 = (__tree_node **)launder_std____1__pair_unsigned_int_const_unsigned_int__((pair *)this);
  *pp_Var1 = param_1;
  if (p_Var2 != (__tree_node *)0x0) {
    this_00 = (__tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____
               *)__compressed_pair<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
                 ::second((__compressed_pair_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
                           *)this);
    __tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
    ::operator__(this_00,p_Var2);
    return;
  }
  return;
}

