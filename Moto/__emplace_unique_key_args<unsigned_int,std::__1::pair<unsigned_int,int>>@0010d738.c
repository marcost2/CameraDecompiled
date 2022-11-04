
/* std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned
   int, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, int>,
   std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, int>,
   std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int,
   std::__1::__hash_value_type<unsigned int, int>, std::__1::equal_to<unsigned int>, true>,
   std::__1::allocator<std::__1::__hash_value_type<unsigned int,
   int>>>::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int, int>>(unsigned int
   const&, std::__1::pair<unsigned int, int>&&) */

pair std::__1::
     __hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
     ::__emplace_unique_key_args_unsigned_int_std____1__pair_unsigned_int_int__
               (uint *param_1,pair *param_2)

{
  int **ppiVar1;
  uint uVar2;
  int *piVar3;
  pair pVar4;
  int **in_r2;
  int *piVar5;
  int **in_r3;
  int *piVar6;
  int *unaff_r5;
  int **ppiVar7;
  int *piVar8;
  uint uVar9;
  
  piVar6 = (int *)param_2[1];
  piVar8 = *in_r2;
  if (piVar6 != (int *)0x0) {
    uVar2 = (int)piVar6 - 1;
    if ((uVar2 & (uint)piVar6) == 0) {
      unaff_r5 = (int *)(uVar2 & (uint)piVar8);
    }
    else {
      unaff_r5 = piVar8;
      if (piVar6 <= piVar8) {
        unaff_r5 = (int *)((int)piVar8 - ((uint)piVar8 / (uint)piVar6) * (int)piVar6);
      }
    }
    ppiVar7 = *(int ***)(*param_2 + (int)unaff_r5 * 4);
    if (ppiVar7 != (int **)0x0) {
      do {
        ppiVar7 = (int **)*ppiVar7;
        if (ppiVar7 == (int **)0x0) goto LAB_0010d79e;
        piVar5 = ppiVar7[1];
        if (piVar5 != piVar8) {
          if ((uVar2 & (uint)piVar6) == 0) {
            piVar5 = (int *)((uint)piVar5 & uVar2);
          }
          else if (piVar6 <= piVar5) {
            if ((int *)((int)piVar5 - ((uint)piVar5 / (uint)piVar6) * (int)piVar6) == unaff_r5)
            goto LAB_0010d794;
            goto LAB_0010d79e;
          }
          if (piVar5 != unaff_r5) goto LAB_0010d79e;
        }
LAB_0010d794:
      } while (ppiVar7[2] != piVar8);
      pVar4 = 0;
      goto LAB_0010d87c;
    }
  }
LAB_0010d79e:
  ppiVar7 = (int **)operator_new(0x10);
  piVar5 = *in_r3;
  piVar3 = in_r3[1];
  *ppiVar7 = (int *)0x0;
  ppiVar7[1] = piVar8;
  ppiVar7[2] = piVar5;
  ppiVar7[3] = piVar3;
  if ((piVar6 == (int *)0x0) ||
     ((int)((uint)((float)param_2[4] * (float)ZEXT48(piVar6) < (float)(ulonglong)(param_2[3] + 1))
           << 0x1f) < 0)) {
    if (piVar6 < (int *)0x3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (int)piVar6 - 1U & (uint)piVar6;
      if (uVar2 != 0) {
        uVar2 = 1;
      }
    }
    uVar2 = uVar2 | (int)piVar6 << 1;
    uVar9 = FPToFixed((float)(ulonglong)(param_2[3] + 1) / (float)param_2[4],0x20,0x20,0,1,1);
    if (uVar2 < uVar9) {
      uVar2 = uVar9;
    }
    rehash((__hash_table_std____1____hash_value_type_unsigned_int_int__std____1____unordered_map_hasher_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__hash_unsigned_int__true__std____1____unordered_map_equal_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__equal_to_unsigned_int__true__std____1__allocator_std____1____hash_value_type_unsigned_int_int___
            *)param_2,uVar2);
    piVar6 = (int *)param_2[1];
    if (((int)piVar6 - 1U & (uint)piVar6) == 0) {
      unaff_r5 = (int *)((int)piVar6 - 1U & (uint)piVar8);
    }
    else {
      unaff_r5 = piVar8;
      if (piVar6 <= piVar8) {
        unaff_r5 = (int *)((int)piVar8 - ((uint)piVar8 / (uint)piVar6) * (int)piVar6);
      }
    }
  }
  pVar4 = *param_2;
  piVar8 = *(int **)(pVar4 + (int)unaff_r5 * 4);
  if (piVar8 == (int *)0x0) {
    ppiVar1 = (int **)(param_2 + 2);
    *ppiVar7 = *ppiVar1;
    *ppiVar1 = (int *)ppiVar7;
    *(int ***)(pVar4 + (int)unaff_r5 * 4) = ppiVar1;
    if (*ppiVar7 != (int *)0x0) {
      piVar8 = *(int **)((int)*ppiVar7 + 4);
      if (((int)piVar6 - 1U & (uint)piVar6) == 0) {
        piVar8 = (int *)((uint)piVar8 & (int)piVar6 - 1U);
      }
      else if (piVar6 <= piVar8) {
        piVar8 = (int *)((int)piVar8 - ((uint)piVar8 / (uint)piVar6) * (int)piVar6);
      }
      piVar8 = (int *)(*param_2 + (int)piVar8 * 4);
      goto LAB_0010d86e;
    }
  }
  else {
    *ppiVar7 = (int *)*piVar8;
LAB_0010d86e:
    *piVar8 = (int)ppiVar7;
  }
  param_2[3] = param_2[3] + 1;
  pVar4 = 1;
LAB_0010d87c:
  *(char *)(param_1 + 1) = (char)pVar4;
  *param_1 = (uint)ppiVar7;
  return pVar4;
}

