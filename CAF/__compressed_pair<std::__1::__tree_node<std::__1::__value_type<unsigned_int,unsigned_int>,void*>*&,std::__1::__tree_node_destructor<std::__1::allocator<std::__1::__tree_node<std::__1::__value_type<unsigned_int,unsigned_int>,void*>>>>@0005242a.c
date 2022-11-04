
/* std::__1::__compressed_pair<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned
   int>, void*>*,
   std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>,
   void*>>>>::__compressed_pair<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned
   int>, void*>*&,
   std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>>(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned
   int>, void*>*&,
   std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>&&) */

__compressed_pair_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
* __thiscall
std::__1::
__compressed_pair<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
::
__compressed_pair_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
          (__compressed_pair_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
           *this,__tree_node **param_1,__tree_node_destructor *param_2)

{
  int *piVar1;
  __tree_node_destructor *p_Var2;
  
  piVar1 = (int *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                            ((AbstractUnwindCursor *)param_1);
  __compressed_pair_elem<unsigned_int,0,false>::__compressed_pair_elem_int_void_
            ((__compressed_pair_elem_unsigned_int_0_false_ *)this,piVar1);
  p_Var2 = (__tree_node_destructor *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_2);
  __compressed_pair_elem<std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>,1,false>
  ::
  __compressed_pair_elem_std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____void_
            ((__compressed_pair_elem_std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____1_false_
              *)(this + 4),p_Var2);
  return this;
}

