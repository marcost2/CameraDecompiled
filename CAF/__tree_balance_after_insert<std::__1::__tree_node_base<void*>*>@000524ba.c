
/* void 
   std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*,
   std::__1::__tree_node_base<void*>*) */

void std::__1::__tree_balance_after_insert_std____1____tree_node_base_void____
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  __tree_node_base *p_Var4;
  _Node *p_Var5;
  char *pcVar6;
  
  iVar2 = (int)param_2 - (int)param_1;
  uVar3 = count_leading_zeroes(iVar2);
  param_2[0xc] = SUB41(uVar3 >> 5,0);
  do {
    if ((iVar2 == 0) ||
       (iVar2 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_2),
       *(char *)(iVar2 + 0xc) != '\0')) {
      return;
    }
    p_Var4 = (__tree_node_base *)
             android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_2);
    bVar1 = __tree_is_left_child_std____1____tree_node_base_void____(p_Var4);
    p_Var5 = (_Node *)android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_2);
    if (bVar1) {
      iVar2 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev(p_Var5);
      if ((*(int *)(iVar2 + 4) == 0) ||
         (pcVar6 = (char *)(*(int *)(iVar2 + 4) + 0xc), *pcVar6 != '\0')) {
        bVar1 = __tree_is_left_child_std____1____tree_node_base_void____(param_2);
        if (!bVar1) {
          param_2 = (__tree_node_base *)
                    android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_2);
          __tree_left_rotate_std____1____tree_node_base_void____(param_2);
        }
        p_Var5 = (_Node *)android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_2);
        p_Var5[0xc] = (_Node)0x1;
        p_Var4 = (__tree_node_base *)android::List<qcamera::ReprocessBuffer>::_Node::getPrev(p_Var5)
        ;
        p_Var4[0xc] = (__tree_node_base)0x0;
        __ThumbV7PILongThunk__ZNSt3__119__tree_right_rotateIPNS_16__tree_node_baseIPvEEEEvT_(p_Var4)
        ;
        return;
      }
    }
    else if ((**(int **)(p_Var5 + 8) == 0) ||
            (pcVar6 = (char *)(**(int **)(p_Var5 + 8) + 0xc), *pcVar6 != '\0')) {
      bVar1 = __tree_is_left_child_std____1____tree_node_base_void____(param_2);
      if (bVar1) {
        param_2 = (__tree_node_base *)
                  android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_2);
        __tree_right_rotate_std____1____tree_node_base_void____(param_2);
      }
      p_Var5 = (_Node *)android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_2);
      p_Var5[0xc] = (_Node)0x1;
      p_Var4 = (__tree_node_base *)android::List<qcamera::ReprocessBuffer>::_Node::getPrev(p_Var5);
      p_Var4[0xc] = (__tree_node_base)0x0;
      __ThumbV7PILongThunk__ZNSt3__118__tree_left_rotateIPNS_16__tree_node_baseIPvEEEEvT_(p_Var4);
      return;
    }
    p_Var5 = (_Node *)android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)param_2);
    p_Var5[0xc] = (_Node)0x1;
    param_2 = (__tree_node_base *)android::List<qcamera::ReprocessBuffer>::_Node::getPrev(p_Var5);
    iVar2 = (int)param_2 - (int)param_1;
    uVar3 = count_leading_zeroes(iVar2);
    ((_Node *)param_2)[0xc] = SUB41(uVar3 >> 5,0);
    *pcVar6 = '\x01';
  } while( true );
}

