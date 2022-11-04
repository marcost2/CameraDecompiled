
/* void 
   std::__1::__tree_left_rotate<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*)
    */

void std::__1::__tree_left_rotate_std____1____tree_node_base_void____(__tree_node_base *param_1)

{
  bool bVar1;
  _Node *this;
  undefined4 *puVar2;
  int iVar3;
  __tree_node_base **pp_Var4;
  
  pp_Var4 = *(__tree_node_base ***)(param_1 + 4);
  this = (_Node *)*pp_Var4;
  *(_Node **)(param_1 + 4) = this;
  if (this != (_Node *)0x0) {
    android::List<qcamera::ReprocessBuffer>::_Node::setPrev(this,(_Node *)param_1);
  }
  pp_Var4[2] = *(__tree_node_base **)(param_1 + 8);
  bVar1 = __tree_is_left_child_std____1____tree_node_base_void____(param_1);
  if (bVar1) {
    puVar2 = *(undefined4 **)(param_1 + 8);
  }
  else {
    iVar3 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_1);
    puVar2 = (undefined4 *)(iVar3 + 4);
  }
  *puVar2 = pp_Var4;
  *pp_Var4 = param_1;
  android::List<qcamera::ReprocessBuffer>::_Node::setPrev((_Node *)param_1,(_Node *)pp_Var4);
  return;
}

