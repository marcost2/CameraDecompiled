
/* std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>, bool>
   std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int,
   unsigned int>>>::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int, unsigned
   int>>(unsigned int const&, std::__1::pair<unsigned int, unsigned int>&&) */

pair std::__1::
     __tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
     ::__emplace_unique_key_args_unsigned_int_std____1__pair_unsigned_int_unsigned_int__
               (uint *param_1,pair *param_2)

{
  __tree_node_base **pp_Var1;
  __tree_node_base *p_Var2;
  uint *in_r2;
  AbstractUnwindCursor *in_r3;
  _Node *p_Var3;
  int *piVar4;
  bool local_31;
  __tree_end_node *local_30;
  pair apStack44 [12];
  int local_20;
  
  piVar4 = *(int **)(DAT_00052194 + 0x52116);
  local_20 = *piVar4;
  pp_Var1 = __find_equal_unsigned_int_
                      ((__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
                        *)param_2,&local_30,in_r2);
  p_Var3 = (_Node *)*pp_Var1;
  local_31 = false;
  if (p_Var3 == (_Node *)0x0) {
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(in_r3);
    __construct_node_std____1__pair_unsigned_int_unsigned_int__(apStack44);
    p_Var2 = (__tree_node_base *)
             unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
             ::operator__((unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
                           *)apStack44);
    __insert_node_at((__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
                      *)param_2,local_30,pp_Var1,p_Var2);
    p_Var3 = (_Node *)unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
                      ::release((unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
                                 *)apStack44);
    local_31 = true;
    unique_ptr<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>,std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>>>>
    ::_unique_ptr((unique_ptr_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void___std____1____tree_node_destructor_std____1__allocator_std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void_____
                   *)apStack44);
  }
  android::List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)apStack44,p_Var3);
  pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>,bool>
  ::
  pair_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__bool__false_
            ((pair_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__bool_
              *)param_1,
             (__tree_iterator *)
             (_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
              *)apStack44,&local_31);
  if (*piVar4 == local_20) {
    return (pair)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

