
/* void 
   std::__1::__tree_right_rotate<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*)
    */

void std::__1::__tree_right_rotate_std____1____tree_node_base_void____(__tree_node_base *param_1)

{
  bool bVar1;
  _Node *this;
  _Node **pp_Var2;
  int iVar3;
  _Node *p_Var4;
  
  p_Var4 = *(_Node **)param_1;
  this = *(_Node **)(p_Var4 + 4);
  *(_Node **)param_1 = this;
  if (this != (_Node *)0x0) {
    android::List<qcamera::ReprocessBuffer>::_Node::setPrev(this,(_Node *)param_1);
  }
  *(undefined4 *)(p_Var4 + 8) = *(undefined4 *)(param_1 + 8);
  bVar1 = __tree_is_left_child_std____1____tree_node_base_void____(param_1);
  if (bVar1) {
    pp_Var2 = *(_Node ***)(param_1 + 8);
  }
  else {
    iVar3 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_1);
    pp_Var2 = (_Node **)(iVar3 + 4);
  }
  *pp_Var2 = p_Var4;
  *(__tree_node_base **)(p_Var4 + 4) = param_1;
  android::List<qcamera::ReprocessBuffer>::_Node::setPrev((_Node *)param_1,p_Var4);
  return;
}

