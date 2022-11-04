
int * std::__1::
      __hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
      ::__node_insert_multi_prepare(int *param_1,uint param_2,int *param_3)

{
  int **ppiVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int **ppiVar8;
  int *piVar9;
  uint uVar10;
  
  piVar2 = (int *)param_1[1];
  if ((piVar2 == (int *)0x0) ||
     ((int)((uint)((float)param_1[4] * (float)ZEXT48(piVar2) < (float)(ulonglong)(param_1[3] + 1))
           << 0x1f) < 0)) {
    if (piVar2 < (int *)0x3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (uint)piVar2 & (int)piVar2 - 1U;
      if (uVar3 != 0) {
        uVar3 = 1;
      }
    }
    uVar3 = uVar3 | (int)piVar2 << 1;
    uVar10 = FPToFixed((float)(ulonglong)(param_1[3] + 1) / (float)param_1[4],0x20,0x20,0,1,1);
    if (uVar3 < uVar10) {
      uVar3 = uVar10;
    }
    rehash((__hash_table_std____1____hash_value_type_unsigned_int_int__std____1____unordered_map_hasher_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__hash_unsigned_int__true__std____1____unordered_map_equal_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__equal_to_unsigned_int__true__std____1__allocator_std____1____hash_value_type_unsigned_int_int___
            *)param_1,uVar3);
    piVar2 = (int *)param_1[1];
  }
  uVar3 = (int)piVar2 - 1;
  if ((uVar3 & (uint)piVar2) == 0) {
    piVar4 = (int *)(uVar3 & param_2);
  }
  else {
    piVar4 = (int *)param_2;
    if (piVar2 <= param_2) {
      piVar4 = (int *)(param_2 - (param_2 / (uint)piVar2) * (int)piVar2);
    }
  }
  ppiVar8 = *(int ***)(*param_1 + (int)piVar4 * 4);
  if (ppiVar8 != (int **)0x0) {
    uVar10 = 0;
    while( true ) {
      uVar5 = uVar10;
      ppiVar1 = ppiVar8;
      ppiVar8 = (int **)*ppiVar8;
      if (ppiVar8 == (int **)0x0) {
        return (int *)ppiVar1;
      }
      piVar6 = ppiVar8[1];
      if ((uVar3 & (uint)piVar2) == 0) {
        piVar9 = (int *)((uint)piVar6 & uVar3);
      }
      else {
        piVar9 = piVar6;
        if (piVar2 <= piVar6) {
          piVar9 = (int *)((int)piVar6 - ((uint)piVar6 / (uint)piVar2) * (int)piVar2);
        }
      }
      if (piVar9 != piVar4) break;
      if (piVar6 == (int *)param_2) {
        uVar7 = count_leading_zeroes((int)ppiVar8[2] - *param_3);
        uVar7 = uVar7 >> 5;
      }
      else {
        uVar7 = 0;
      }
      uVar10 = uVar5 | uVar7;
      if ((uVar7 == 0) && (((uVar5 ^ 1) & 1) == 0)) {
        return (int *)ppiVar1;
      }
    }
    return (int *)ppiVar1;
  }
  return (int *)0x0;
}

