
int ** std::__1::
       __hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
       ::__node_insert_multi(int *param_1,int **param_2)

{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  piVar3 = param_2[2];
  param_2[1] = piVar3;
  ppiVar1 = (int **)__node_insert_multi_prepare(param_1,(uint)piVar3,(int *)(param_2 + 2));
  piVar3 = (int *)param_1[1];
  piVar4 = param_2[1];
  uVar5 = (int)piVar3 - 1;
  uVar6 = uVar5 & (uint)piVar3;
  if (uVar6 == 0) {
    piVar4 = (int *)((uint)piVar4 & uVar5);
    if (ppiVar1 != (int **)0x0) goto LAB_0010d130;
LAB_0010d15a:
    ppiVar1 = (int **)(param_1 + 2);
    *param_2 = *ppiVar1;
    *ppiVar1 = (int *)param_2;
    *(int ***)(*param_1 + (int)piVar4 * 4) = ppiVar1;
    if (*param_2 == (int *)0x0) goto LAB_0010d194;
    piVar2 = (int *)(*param_2)[1];
    if (uVar6 == 0) {
      piVar2 = (int *)((uint)piVar2 & uVar5);
    }
    else if (piVar3 <= piVar2) {
      piVar2 = (int *)((int)piVar2 - ((uint)piVar2 / (uint)piVar3) * (int)piVar3);
    }
  }
  else {
    if (piVar3 <= piVar4) {
      piVar4 = (int *)((int)piVar4 - ((uint)piVar4 / (uint)piVar3) * (int)piVar3);
    }
    if (ppiVar1 == (int **)0x0) goto LAB_0010d15a;
LAB_0010d130:
    *param_2 = *ppiVar1;
    *ppiVar1 = (int *)param_2;
    if (*param_2 == (int *)0x0) goto LAB_0010d194;
    piVar2 = (int *)(*param_2)[1];
    if (uVar6 == 0) {
      piVar2 = (int *)((uint)piVar2 & uVar5);
    }
    else if (piVar3 <= piVar2) {
      piVar2 = (int *)((int)piVar2 - ((uint)piVar2 / (uint)piVar3) * (int)piVar3);
    }
    if (piVar2 == piVar4) goto LAB_0010d194;
  }
  *(int ***)(*param_1 + (int)piVar2 * 4) = param_2;
LAB_0010d194:
  param_1[3] = param_1[3] + 1;
  return param_2;
}

