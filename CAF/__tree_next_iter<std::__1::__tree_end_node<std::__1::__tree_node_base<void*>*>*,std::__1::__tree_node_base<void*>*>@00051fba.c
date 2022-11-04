
/* std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*
   std::__1::__tree_next_iter<std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*,
   std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*) */

__tree_end_node *
std::__1::
__tree_next_iter_std____1____tree_end_node_std____1____tree_node_base_void______std____1____tree_node_base_void____
          (__tree_node_base *param_1)

{
  bool bVar1;
  __tree_node_base *p_Var2;
  
  if (*(__tree_node_base **)(param_1 + 4) == (__tree_node_base *)0x0) {
    while (bVar1 = __tree_is_left_child_std____1____tree_node_base_void____(param_1), !bVar1) {
      param_1 = (__tree_node_base *)
                android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_1);
    }
    return *(__tree_end_node **)((_Node *)param_1 + 8);
  }
  p_Var2 = __tree_min_std____1____tree_node_base_void____(*(__tree_node_base **)(param_1 + 4));
  return (__tree_end_node *)p_Var2;
}

