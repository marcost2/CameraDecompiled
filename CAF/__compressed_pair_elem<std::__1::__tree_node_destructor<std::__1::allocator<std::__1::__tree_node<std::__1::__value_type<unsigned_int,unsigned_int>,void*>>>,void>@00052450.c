
/* std::__1::__compressed_pair_elem<std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>, 1,
   false>::__compressed_pair_elem<std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>,
   void>(std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>&&) */

__compressed_pair_elem_std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____1_false_
* __thiscall
std::__1::
__compressed_pair_elem<std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>,1,false>
::
__compressed_pair_elem_std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____void_
          (__compressed_pair_elem_std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____1_false_
           *this,__tree_node_destructor *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_1);
  uVar2 = puVar1[1];
  *(undefined4 *)this = *puVar1;
  *(undefined4 *)(this + 4) = uVar2;
  return this;
}

