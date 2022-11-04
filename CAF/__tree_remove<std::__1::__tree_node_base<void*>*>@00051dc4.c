
/* void 
   std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*,
   std::__1::__tree_node_base<void*>*) */

void std::__1::__tree_remove_std____1____tree_node_base_void____
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  __tree_node_base **pp_Var4;
  int iVar5;
  undefined4 *puVar6;
  _Node *p_Var7;
  __tree_node_base *p_Var8;
  __tree_node_base **pp_Var9;
  __tree_node_base **this;
  
  pp_Var4 = (__tree_node_base **)param_2;
  if ((*(int *)param_2 != 0) && (*(int *)(param_2 + 4) != 0)) {
    pp_Var4 = (__tree_node_base **)__tree_next_std____1____tree_node_base_void____(param_2);
  }
  pp_Var9 = (__tree_node_base **)*pp_Var4;
  if ((pp_Var9 == (__tree_node_base **)0x0) &&
     (pp_Var9 = (__tree_node_base **)pp_Var4[1], pp_Var9 == (__tree_node_base **)0x0)) {
    bVar3 = false;
    pp_Var9 = (__tree_node_base **)0x0;
  }
  else {
    pp_Var9[2] = pp_Var4[2];
    bVar3 = true;
  }
  bVar2 = __tree_is_left_child_std____1____tree_node_base_void____((__tree_node_base *)pp_Var4);
  if (bVar2) {
    *(__tree_node_base ***)pp_Var4[2] = pp_Var9;
    if (pp_Var4 == (__tree_node_base **)param_1) {
      this = (__tree_node_base **)0x0;
      param_1 = (__tree_node_base *)pp_Var9;
      goto LAB_00051e1c;
    }
    iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)pp_Var4);
    puVar6 = (undefined4 *)(iVar5 + 4);
  }
  else {
    iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)pp_Var4);
    *(__tree_node_base ***)(iVar5 + 4) = pp_Var9;
    puVar6 = (undefined4 *)pp_Var4[2];
  }
  this = (__tree_node_base **)*puVar6;
LAB_00051e1c:
  cVar1 = *(char *)(pp_Var4 + 3);
  if (pp_Var4 != (__tree_node_base **)param_2) {
    pp_Var4[2] = *(__tree_node_base **)(param_2 + 8);
    bVar2 = __tree_is_left_child_std____1____tree_node_base_void____(param_2);
    if (bVar2) {
      puVar6 = (undefined4 *)pp_Var4[2];
    }
    else {
      iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)pp_Var4);
      puVar6 = (undefined4 *)(iVar5 + 4);
    }
    *puVar6 = pp_Var4;
    p_Var7 = *(_Node **)param_2;
    *pp_Var4 = (__tree_node_base *)p_Var7;
    android::List<qcamera::ReprocessBuffer>::_Node::setPrev(p_Var7,(_Node *)pp_Var4);
    p_Var7 = *(_Node **)(param_2 + 4);
    pp_Var4[1] = (__tree_node_base *)p_Var7;
    if (p_Var7 != (_Node *)0x0) {
      android::List<qcamera::ReprocessBuffer>::_Node::setPrev(p_Var7,(_Node *)pp_Var4);
    }
    *(__tree_node_base *)(pp_Var4 + 3) = param_2[0xc];
    if (param_1 == param_2) {
      param_1 = (__tree_node_base *)pp_Var4;
    }
  }
  if ((cVar1 != '\0') && ((__tree_node_base **)param_1 != (__tree_node_base **)0x0)) {
    if (!bVar3) {
      while( true ) {
        bVar3 = __tree_is_left_child_std____1____tree_node_base_void____((__tree_node_base *)this);
        if (bVar3) break;
        if (*(char *)(this + 3) == '\0') {
          *(undefined *)(this + 3) = 1;
          iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
          *(undefined *)(iVar5 + 0xc) = 0;
          p_Var8 = (__tree_node_base *)
                   android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
          __tree_left_rotate_std____1____tree_node_base_void____(p_Var8);
          if (param_1 == *this) {
            param_1 = (__tree_node_base *)this;
          }
          this = *(__tree_node_base ***)((int)*this + 4);
        }
        p_Var8 = *this;
        if (((p_Var8 != (__tree_node_base *)0x0) && (p_Var8[0xc] == (__tree_node_base)0x0)) ||
           ((this[1] != (__tree_node_base *)0x0 && (this[1][0xc] == (__tree_node_base)0x0)))) {
          if ((this[1] == (__tree_node_base *)0x0) || (this[1][0xc] != (__tree_node_base)0x0)) {
            p_Var8[0xc] = (__tree_node_base)0x1;
            *(undefined *)(this + 3) = 0;
            __tree_right_rotate_std____1____tree_node_base_void____((__tree_node_base *)this);
            this = (__tree_node_base **)
                   android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
          }
          iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
          *(undefined *)(this + 3) = *(undefined *)(iVar5 + 0xc);
          iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
          *(undefined *)(iVar5 + 0xc) = 1;
          this[1][0xc] = (__tree_node_base)0x1;
          p_Var8 = (__tree_node_base *)
                   android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
          __ThumbV7PILongThunk__ZNSt3__118__tree_left_rotateIPNS_16__tree_node_baseIPvEEEEvT_
                    (p_Var8);
          return;
        }
LAB_00051efe:
        *(undefined *)(this + 3) = 0;
        pp_Var9 = (__tree_node_base **)
                  android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
        pp_Var4 = pp_Var9;
        if (pp_Var9 != (__tree_node_base **)param_1) {
          pp_Var4 = (__tree_node_base **)(uint)*(byte *)(pp_Var9 + 3);
        }
        if (pp_Var9 == (__tree_node_base **)param_1 || pp_Var4 == (__tree_node_base **)0x0) {
          *(undefined *)(pp_Var9 + 3) = 1;
          return;
        }
        bVar3 = __tree_is_left_child_std____1____tree_node_base_void____
                          ((__tree_node_base *)pp_Var9);
        if (bVar3) {
          iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)pp_Var9);
          this = *(__tree_node_base ***)(iVar5 + 4);
        }
        else {
          this = *(__tree_node_base ***)pp_Var9[2];
        }
      }
      if (*(char *)(this + 3) == '\0') {
        *(undefined *)(this + 3) = 1;
        iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
        *(undefined *)(iVar5 + 0xc) = 0;
        p_Var8 = (__tree_node_base *)
                 android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
        __tree_right_rotate_std____1____tree_node_base_void____(p_Var8);
        if (param_1 == this[1]) {
          param_1 = (__tree_node_base *)this;
        }
        this = *(__tree_node_base ***)this[1];
      }
      p_Var8 = *this;
      if ((p_Var8 == (__tree_node_base *)0x0) || (p_Var8[0xc] != (__tree_node_base)0x0)) {
        if ((this[1] == (__tree_node_base *)0x0) || (this[1][0xc] != (__tree_node_base)0x0))
        goto LAB_00051efe;
        if (p_Var8 != (__tree_node_base *)0x0) goto LAB_00051f78;
      }
      else {
LAB_00051f78:
        if (p_Var8[0xc] == (__tree_node_base)0x0) goto LAB_00051f94;
      }
      this[1][0xc] = (__tree_node_base)0x1;
      *(undefined *)(this + 3) = 0;
      __tree_left_rotate_std____1____tree_node_base_void____((__tree_node_base *)this);
      this = (__tree_node_base **)
             android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
LAB_00051f94:
      iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
      *(undefined *)(this + 3) = *(undefined *)(iVar5 + 0xc);
      iVar5 = android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
      *(undefined *)(iVar5 + 0xc) = 1;
      (*this)[0xc] = (__tree_node_base)0x1;
      p_Var8 = (__tree_node_base *)
               android::List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this);
      __ThumbV7PILongThunk__ZNSt3__119__tree_right_rotateIPNS_16__tree_node_baseIPvEEEEvT_(p_Var8);
      return;
    }
    *(__tree_node_base *)(pp_Var9 + 3) = (__tree_node_base)0x1;
  }
  return;
}

