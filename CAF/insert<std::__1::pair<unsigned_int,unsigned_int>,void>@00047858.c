
/* std::__1::pair<std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned
   int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>*, int>>, bool> std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>,
   std::__1::allocator<std::__1::pair<unsigned int const, unsigned
   int>>>::insert<std::__1::pair<unsigned int, unsigned int>, void>(std::__1::pair<unsigned int,
   unsigned int>&&) */

pair std::__1::
     map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
     ::insert_std____1__pair_unsigned_int_unsigned_int__void_(pair *param_1)

{
  AbstractUnwindCursor *in_r2;
  int *piVar1;
  pair apStack32 [8];
  int local_18;
  
  piVar1 = *(int **)(DAT_00047894 + 0x47866);
  local_18 = *piVar1;
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(in_r2);
  __tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
  ::__insert_unique_std____1__pair_unsigned_int_unsigned_int__void_(apStack32);
  pair<std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>>,bool>
  ::
  pair_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__bool_false_
            ((pair_std____1____map_iterator_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int___bool_
              *)param_1,apStack32);
  if (*piVar1 == local_18) {
    return (pair)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

