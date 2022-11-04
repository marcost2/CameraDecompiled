
/* std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>,
   std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>>::release() */

undefined4 __thiscall
std::__1::
unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
::release(unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
          *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)launder_std____1__pair_unsigned_int_const_unsigned_int__((pair *)this);
  uVar2 = *puVar1;
  puVar1 = (undefined4 *)launder_std____1__pair_unsigned_int_const_unsigned_int__((pair *)this);
  *puVar1 = 0;
  return uVar2;
}

