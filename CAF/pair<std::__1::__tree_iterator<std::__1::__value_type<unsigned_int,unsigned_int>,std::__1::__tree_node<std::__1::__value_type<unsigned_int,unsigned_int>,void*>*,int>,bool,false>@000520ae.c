
/* std::__1::pair<std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned
   int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>,
   void*>*, int>>, bool>::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int,
   unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*,
   int>, bool, false>(std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int,
   unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*,
   int>, bool>&&) */

pair_std____1____map_iterator_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int___bool_
* __thiscall
std::__1::
pair<std::__1::__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>>,bool>
::
pair_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__bool_false_
          (pair_std____1____map_iterator_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int___bool_
           *this,pair *param_1)

{
  _Node **pp_Var1;
  pair_std____1____map_iterator_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int___bool_
  *ppVar2;
  
  pp_Var1 = (_Node **)
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_1);
  android::List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)this,*pp_Var1);
  ppVar2 = (pair_std____1____map_iterator_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int___bool_
            *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                        ((AbstractUnwindCursor *)(param_1 + 4));
  this[4] = *ppVar2;
  return this;
}

