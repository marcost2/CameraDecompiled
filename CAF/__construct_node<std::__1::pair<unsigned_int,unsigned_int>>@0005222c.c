
/* std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>,
   std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned
   int, unsigned int>, void*>>>> std::__1::__tree<std::__1::__value_type<unsigned int, unsigned
   int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned
   int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned
   int, unsigned int>>>::__construct_node<std::__1::pair<unsigned int, unsigned
   int>>(std::__1::pair<unsigned int, unsigned int>&&) */

unique_ptr
std::__1::
__tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
::__construct_node_std____1__pair_unsigned_int_unsigned_int__(pair *param_1)

{
  allocator *this;
  __tree_node *p_Var1;
  unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
  *this_00;
  int iVar2;
  allocator *paVar3;
  pair *ppVar4;
  __tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
  *in_r1;
  AbstractUnwindCursor *in_r2;
  pair *in_r3;
  int *piVar5;
  __tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____
  a_Stack44 [8];
  int local_24;
  
  piVar5 = *(int **)(DAT_000522a8 + 0x5223c);
  local_24 = *piVar5;
  this = (allocator *)__node_alloc(in_r1);
  p_Var1 = (__tree_node *)
           allocator_traits<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
           ::allocate(this,1);
  __tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
  ::__tree_node_destructor(a_Stack44,this,false);
  this_00 = (unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
             *)unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
               ::unique_ptr_true_void_
                         ((unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
                           *)param_1,p_Var1,(__good_rval_ref_type)a_Stack44);
  iVar2 = unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
          ::operator__(this_00);
  paVar3 = (allocator *)
           __tree_key_value_types<std::__1::__value_type<unsigned_int,unsigned_int>>::__get_ptr
                     ((__value_type *)(iVar2 + 0x10));
  ppVar4 = (pair *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(in_r2);
  allocator_traits<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>
  ::
  construct_std____1__pair_unsigned_int_const_unsigned_int__std____1__pair_unsigned_int_unsigned_int__
            ((allocator_traits_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____
              *)this,paVar3,ppVar4,in_r3);
  iVar2 = unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
          ::get_deleter((unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
                         *)param_1);
  *(undefined *)(iVar2 + 4) = 1;
  if (*piVar5 == local_24) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

