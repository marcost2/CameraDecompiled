
/* void 
   std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*,
   std::__1::__tree_node_base<void*>*) */

void std::__1::__tree_remove_std____1____tree_node_base_void____
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  __tree_node_base **pp_Var4;
  undefined4 *puVar5;
  __tree_node_base **pp_Var6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  __tree_node_base **pp_Var9;
  __tree_node_base **pp_Var10;
  
  pp_Var10 = *(__tree_node_base ***)param_2;
  pp_Var6 = (__tree_node_base **)param_2;
  if (pp_Var10 == (__tree_node_base **)0x0) {
LAB_000990de:
    pp_Var10 = (__tree_node_base **)pp_Var6[1];
    if (pp_Var10 != (__tree_node_base **)0x0) goto LAB_000990f4;
    bVar2 = false;
    pp_Var10 = (__tree_node_base **)0x0;
  }
  else {
    pp_Var4 = *(__tree_node_base ***)(param_2 + 4);
    if (*(__tree_node_base ***)(param_2 + 4) != (__tree_node_base **)0x0) {
      do {
        pp_Var6 = pp_Var4;
        pp_Var4 = (__tree_node_base **)*pp_Var6;
      } while ((__tree_node_base **)*pp_Var6 != (__tree_node_base **)0x0);
      goto LAB_000990de;
    }
LAB_000990f4:
    bVar2 = true;
    pp_Var10[2] = pp_Var6[2];
  }
  pp_Var4 = (__tree_node_base **)pp_Var6[2];
  if ((__tree_node_base **)*pp_Var4 == pp_Var6) {
    *pp_Var4 = (__tree_node_base *)pp_Var10;
    if (pp_Var6 == (__tree_node_base **)param_1) {
      pp_Var4 = (__tree_node_base **)0x0;
      param_1 = (__tree_node_base *)pp_Var10;
      goto LAB_0009911e;
    }
    puVar5 = (undefined4 *)(pp_Var6[2] + 4);
  }
  else {
    pp_Var4[1] = (__tree_node_base *)pp_Var10;
    puVar5 = (undefined4 *)pp_Var6[2];
  }
  pp_Var4 = (__tree_node_base **)*puVar5;
LAB_0009911e:
  cVar1 = *(char *)(pp_Var6 + 3);
  if (pp_Var6 != (__tree_node_base **)param_2) {
    puVar5 = *(undefined4 **)(param_2 + 8);
    pp_Var6[2] = (__tree_node_base *)puVar5;
    if (**(__tree_node_base ***)(param_2 + 8) != param_2) {
      puVar5 = puVar5 + 1;
    }
    *puVar5 = pp_Var6;
    p_Var7 = *(__tree_node_base **)param_2;
    *pp_Var6 = p_Var7;
    *(__tree_node_base ***)(p_Var7 + 8) = pp_Var6;
    p_Var7 = *(__tree_node_base **)(param_2 + 4);
    pp_Var6[1] = p_Var7;
    if (p_Var7 != (__tree_node_base *)0x0) {
      *(__tree_node_base ***)(p_Var7 + 8) = pp_Var6;
    }
    *(__tree_node_base *)(pp_Var6 + 3) = param_2[0xc];
    if (param_1 == param_2) {
      param_1 = (__tree_node_base *)pp_Var6;
    }
  }
  if (cVar1 == '\0' || (__tree_node_base **)param_1 == (__tree_node_base **)0x0) {
    return;
  }
  if (bVar2) {
    *(__tree_node_base *)(pp_Var10 + 3) = (__tree_node_base)0x1;
    return;
  }
  do {
    puVar5 = (undefined4 *)pp_Var4[2];
    if ((__tree_node_base **)*puVar5 == pp_Var4) {
      if (*(char *)(pp_Var4 + 3) == '\0') {
        *(undefined *)(pp_Var4 + 3) = 1;
        *(undefined *)(puVar5 + 3) = 0;
        pp_Var6 = (__tree_node_base **)pp_Var4[2];
        p_Var7 = *pp_Var6;
        p_Var8 = *(__tree_node_base **)(p_Var7 + 4);
        *pp_Var6 = p_Var8;
        if (p_Var8 != (__tree_node_base *)0x0) {
          *(__tree_node_base ***)(p_Var8 + 8) = pp_Var6;
        }
        *(__tree_node_base **)(p_Var7 + 8) = pp_Var6[2];
        pp_Var9 = (__tree_node_base **)pp_Var6[2];
        pp_Var10 = pp_Var9 + 1;
        if ((__tree_node_base **)*pp_Var9 == pp_Var6) {
          pp_Var10 = pp_Var9;
        }
        *pp_Var10 = p_Var7;
        *(__tree_node_base ***)(p_Var7 + 4) = pp_Var6;
        pp_Var6[2] = p_Var7;
        if (param_1 == pp_Var4[1]) {
          param_1 = (__tree_node_base *)pp_Var4;
        }
        pp_Var4 = *(__tree_node_base ***)pp_Var4[1];
      }
      p_Var7 = *pp_Var4;
      if ((p_Var7 != (__tree_node_base *)0x0) && (p_Var7[0xc] == (__tree_node_base)0x0)) {
LAB_000992be:
        *(__tree_node_base *)(pp_Var4 + 3) = pp_Var4[2][0xc];
        pp_Var4[2][0xc] = (__tree_node_base)0x1;
        (*pp_Var4)[0xc] = (__tree_node_base)0x1;
        pp_Var6 = (__tree_node_base **)pp_Var4[2];
        p_Var7 = *pp_Var6;
        p_Var8 = *(__tree_node_base **)(p_Var7 + 4);
        *pp_Var6 = p_Var8;
        if (p_Var8 != (__tree_node_base *)0x0) {
          *(__tree_node_base ***)(p_Var8 + 8) = pp_Var6;
        }
        *(__tree_node_base **)(p_Var7 + 8) = pp_Var6[2];
        pp_Var4 = (__tree_node_base **)pp_Var6[2];
        pp_Var10 = pp_Var4 + 1;
        if ((__tree_node_base **)*pp_Var4 == pp_Var6) {
          pp_Var10 = pp_Var4;
        }
        *pp_Var10 = p_Var7;
        *(__tree_node_base ***)(p_Var7 + 4) = pp_Var6;
        pp_Var6[2] = p_Var7;
        return;
      }
      p_Var8 = pp_Var4[1];
      if ((p_Var8 != (__tree_node_base *)0x0) && (p_Var8[0xc] == (__tree_node_base)0x0)) {
        if (p_Var7 != (__tree_node_base *)0x0) {
          if (p_Var7[0xc] == (__tree_node_base)0x0) goto LAB_000992be;
          p_Var8 = pp_Var4[1];
        }
        p_Var8[0xc] = (__tree_node_base)0x1;
        *(undefined *)(pp_Var4 + 3) = 0;
        pp_Var6 = (__tree_node_base **)pp_Var4[1];
        p_Var7 = *pp_Var6;
        pp_Var4[1] = p_Var7;
        if (p_Var7 != (__tree_node_base *)0x0) {
          *(__tree_node_base ***)(p_Var7 + 8) = pp_Var4;
        }
        pp_Var6[2] = pp_Var4[2];
        puVar3 = (undefined4 *)pp_Var4[2];
        puVar5 = puVar3 + 1;
        if ((__tree_node_base **)*puVar3 == pp_Var4) {
          puVar5 = puVar3;
        }
        *puVar5 = pp_Var6;
        *pp_Var6 = (__tree_node_base *)pp_Var4;
        pp_Var4[2] = (__tree_node_base *)pp_Var6;
        pp_Var4 = pp_Var6;
        goto LAB_000992be;
      }
      *(undefined *)(pp_Var4 + 3) = 0;
      pp_Var6 = (__tree_node_base **)pp_Var4[2];
      pp_Var10 = pp_Var6;
      if (pp_Var6 == (__tree_node_base **)param_1) {
LAB_00099248:
        *(__tree_node_base *)(pp_Var6 + 3) = (__tree_node_base)0x1;
        return;
      }
    }
    else {
      if (*(char *)(pp_Var4 + 3) == '\0') {
        *(undefined *)(pp_Var4 + 3) = 1;
        *(undefined *)(puVar5 + 3) = 0;
        p_Var7 = pp_Var4[2];
        pp_Var6 = *(__tree_node_base ***)(p_Var7 + 4);
        p_Var8 = *pp_Var6;
        *(__tree_node_base **)(p_Var7 + 4) = p_Var8;
        if (p_Var8 != (__tree_node_base *)0x0) {
          *(__tree_node_base **)(p_Var8 + 8) = p_Var7;
        }
        pp_Var6[2] = *(__tree_node_base **)(p_Var7 + 8);
        pp_Var9 = *(__tree_node_base ***)(p_Var7 + 8);
        pp_Var10 = pp_Var9 + 1;
        if (*pp_Var9 == p_Var7) {
          pp_Var10 = pp_Var9;
        }
        *pp_Var10 = (__tree_node_base *)pp_Var6;
        *pp_Var6 = p_Var7;
        *(__tree_node_base ***)(p_Var7 + 8) = pp_Var6;
        if (param_1 == *pp_Var4) {
          param_1 = (__tree_node_base *)pp_Var4;
        }
        pp_Var4 = *(__tree_node_base ***)((int)*pp_Var4 + 4);
      }
      p_Var7 = *pp_Var4;
      if ((p_Var7 != (__tree_node_base *)0x0) && (p_Var7[0xc] == (__tree_node_base)0x0)) {
        p_Var8 = pp_Var4[1];
        if (p_Var8 != (__tree_node_base *)0x0) {
LAB_00099252:
          if (p_Var8[0xc] == (__tree_node_base)0x0) goto LAB_000992f6;
        }
        p_Var7[0xc] = (__tree_node_base)0x1;
        *(undefined *)(pp_Var4 + 3) = 0;
        pp_Var6 = (__tree_node_base **)*pp_Var4;
        p_Var7 = pp_Var6[1];
        *pp_Var4 = p_Var7;
        if (p_Var7 != (__tree_node_base *)0x0) {
          *(__tree_node_base ***)(p_Var7 + 8) = pp_Var4;
        }
        pp_Var6[2] = pp_Var4[2];
        pp_Var9 = (__tree_node_base **)pp_Var4[2];
        pp_Var10 = pp_Var9 + 1;
        if ((__tree_node_base **)*pp_Var9 == pp_Var4) {
          pp_Var10 = pp_Var9;
        }
        *pp_Var10 = (__tree_node_base *)pp_Var6;
        pp_Var6[1] = (__tree_node_base *)pp_Var4;
        pp_Var4[2] = (__tree_node_base *)pp_Var6;
        pp_Var4 = pp_Var6;
LAB_000992f6:
        *(__tree_node_base *)(pp_Var4 + 3) = pp_Var4[2][0xc];
        pp_Var4[2][0xc] = (__tree_node_base)0x1;
        pp_Var4[1][0xc] = (__tree_node_base)0x1;
        p_Var7 = pp_Var4[2];
        pp_Var6 = *(__tree_node_base ***)(p_Var7 + 4);
        p_Var8 = *pp_Var6;
        *(__tree_node_base **)(p_Var7 + 4) = p_Var8;
        if (p_Var8 != (__tree_node_base *)0x0) {
          *(__tree_node_base **)(p_Var8 + 8) = p_Var7;
        }
        pp_Var6[2] = *(__tree_node_base **)(p_Var7 + 8);
        pp_Var4 = *(__tree_node_base ***)(p_Var7 + 8);
        pp_Var10 = pp_Var4 + 1;
        if (*pp_Var4 == p_Var7) {
          pp_Var10 = pp_Var4;
        }
        *pp_Var10 = (__tree_node_base *)pp_Var6;
        *pp_Var6 = p_Var7;
        *(__tree_node_base ***)(p_Var7 + 8) = pp_Var6;
        return;
      }
      p_Var8 = pp_Var4[1];
      if ((p_Var8 != (__tree_node_base *)0x0) && (p_Var8[0xc] == (__tree_node_base)0x0))
      goto LAB_00099252;
      *(undefined *)(pp_Var4 + 3) = 0;
      pp_Var6 = (__tree_node_base **)param_1;
      pp_Var10 = (__tree_node_base **)pp_Var4[2];
      if (pp_Var4[2] == param_1) goto LAB_00099248;
    }
    pp_Var6 = pp_Var10;
    if (*(__tree_node_base *)(pp_Var6 + 3) == (__tree_node_base)0x0) goto LAB_00099248;
    pp_Var10 = (__tree_node_base **)pp_Var6[2];
    pp_Var4 = pp_Var10 + 1;
    if ((__tree_node_base **)*pp_Var10 != pp_Var6) {
      pp_Var4 = pp_Var10;
    }
    pp_Var4 = (__tree_node_base **)*pp_Var4;
  } while( true );
}

