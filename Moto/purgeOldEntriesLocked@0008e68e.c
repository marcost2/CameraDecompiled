
/* qcamera::FrameNumberRegistry::purgeOldEntriesLocked() */

void __thiscall qcamera::FrameNumberRegistry::purgeOldEntriesLocked(FrameNumberRegistry *this)

{
  __tree_node_base **pp_Var1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  
  p_Var4 = *(__tree_node_base **)this;
  while (((__tree_node_base *)(this + 4) != p_Var4 &&
         (*(uint *)(p_Var4 + 0x10) < *(int *)(this + 0xc) - 0x100U))) {
    pp_Var2 = *(__tree_node_base ***)(p_Var4 + 4);
    if (*(__tree_node_base ***)(p_Var4 + 4) == (__tree_node_base **)0x0) {
      pp_Var2 = (__tree_node_base **)(p_Var4 + 8);
      pp_Var1 = (__tree_node_base **)*pp_Var2;
      if (*pp_Var1 != p_Var4) {
        do {
          p_Var3 = *pp_Var2;
          pp_Var2 = (__tree_node_base **)(p_Var3 + 8);
          pp_Var1 = (__tree_node_base **)*pp_Var2;
        } while (*pp_Var1 != p_Var3);
      }
    }
    else {
      do {
        pp_Var1 = pp_Var2;
        pp_Var2 = (__tree_node_base **)*pp_Var1;
      } while ((__tree_node_base **)*pp_Var1 != (__tree_node_base **)0x0);
    }
    *(__tree_node_base ***)this = pp_Var1;
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    std::__1::__tree_remove_std____1____tree_node_base_void____
              (*(__tree_node_base **)(this + 4),p_Var4);
    operator_delete(p_Var4);
    p_Var4 = *(__tree_node_base **)this;
  }
  return;
}

