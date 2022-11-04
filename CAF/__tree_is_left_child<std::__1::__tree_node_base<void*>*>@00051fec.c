
/* bool 
   std::__1::__tree_is_left_child<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*)
    */

bool std::__1::__tree_is_left_child_std____1____tree_node_base_void____(__tree_node_base *param_1)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(**(int **)(param_1 + 8) - (int)param_1);
  return SUB41(uVar1 >> 5,0);
}

