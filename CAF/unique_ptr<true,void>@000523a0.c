
/* std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>,
   std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>>::unique_ptr<true,
   void>(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*,
   std::__1::__dependent_type<std::__1::__unique_ptr_deleter_sfinae<std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>>, true>::__good_rval_ref_type) */

unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
* __thiscall
std::__1::
unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
::unique_ptr_true_void_
          (unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
           *this,__tree_node *param_1,__good_rval_ref_type param_2)

{
  __tree_node_destructor *p_Var1;
  int *piVar2;
  __tree_node *local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_000523d4 + 0x523ae);
  local_14 = *piVar2;
  local_18 = param_1;
  p_Var1 = (__tree_node_destructor *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_2);
  __compressed_pair<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
  ::
  __compressed_pair_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
            ((__compressed_pair_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
              *)this,&local_18,p_Var1);
  if (*piVar2 == local_14) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

