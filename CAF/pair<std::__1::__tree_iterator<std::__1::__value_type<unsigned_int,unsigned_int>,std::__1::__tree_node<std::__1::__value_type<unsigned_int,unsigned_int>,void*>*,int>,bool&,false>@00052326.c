
/* std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>,
   bool>::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>, bool&,
   false>(std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>,
   std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>&&, bool&)
    */

pair_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__bool_
* __thiscall
std::__1::
pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__tree_node<std::__1::__value_type<unsigned_int,unsigned_int>,void*>*,int>,bool>
::
pair_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__bool__false_
          (pair_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__bool_
           *this,__tree_iterator *param_1,bool *param_2)

{
  undefined4 *puVar1;
  pair_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__bool_
  *ppVar2;
  
  puVar1 = (undefined4 *)
           libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)param_1);
  *(undefined4 *)this = *puVar1;
  ppVar2 = (pair_std____1____tree_iterator_std____1____value_type_unsigned_int_unsigned_int__std____1____tree_node_std____1____value_type_unsigned_int_unsigned_int__void____int__bool_
            *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                        ((AbstractUnwindCursor *)param_2);
  this[4] = *ppVar2;
  return this;
}

