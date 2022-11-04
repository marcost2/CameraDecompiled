
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
  pair pVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int **in_r2;
  int *piVar6;
  int **in_r3;
  int *piVar7;
  int *unaff_r5;
  int **ppiVar8;
  int *piVar9;
  uint uVar10;
  
  piVar7 = *(int **)(param_2 + 4);
  piVar9 = *in_r2;
  if (piVar7 != (int *)0x0) {
    uVar3 = (int)piVar7 - 1;
    if ((uVar3 & (uint)piVar7) == 0) {
      unaff_r5 = (int *)(uVar3 & (uint)piVar9);
    }
    else {
      unaff_r5 = piVar9;
      if (piVar7 <= piVar9) {
        unaff_r5 = (int *)((int)piVar9 - ((uint)piVar9 / (uint)piVar7) * (int)piVar7);
      }
    }
    ppiVar8 = *(int ***)(*(int *)param_2 + (int)unaff_r5 * 4);
    if (ppiVar8 != (int **)0x0) {
      do {
        ppiVar8 = (int **)*ppiVar8;
        if (ppiVar8 == (int **)0x0) goto LAB_00066dee;
        piVar6 = ppiVar8[1];
        if (piVar6 != piVar9) {
          if ((uVar3 & (uint)piVar7) == 0) {
            piVar6 = (int *)((uint)piVar6 & uVar3);
          }
          else if (piVar7 <= piVar6) {
            if ((int *)((int)piVar6 - ((uint)piVar6 / (uint)piVar7) * (int)piVar7) == unaff_r5)
            goto LAB_00066de4;
            goto LAB_00066dee;
          }
          if (piVar6 != unaff_r5) goto LAB_00066dee;
        }
LAB_00066de4:
      } while (ppiVar8[2] != piVar9);
      pVar2 = (pair)0x0;
      goto LAB_00066ecc;
    }
  }
LAB_00066dee:
  ppiVar8 = (int **)operator_new(0x10);
  piVar6 = *in_r3;
  piVar4 = in_r3[1];
  *ppiVar8 = (int *)0x0;
  ppiVar8[1] = piVar9;
  ppiVar8[2] = piVar6;
  ppiVar8[3] = piVar4;
  if ((piVar7 == (int *)0x0) ||
     ((int)((uint)(*(float *)(param_2 + 0x10) * (float)ZEXT48(piVar7) <
                  (float)(ulonglong)(*(int *)(param_2 + 0xc) + 1)) << 0x1f) < 0)) {
    if (piVar7 < (int *)0x3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (int)piVar7 - 1U & (uint)piVar7;
      if (uVar3 != 0) {
        uVar3 = 1;
      }
    }
    uVar3 = uVar3 | (int)piVar7 << 1;
    uVar10 = FPToFixed((float)(ulonglong)(*(int *)(param_2 + 0xc) + 1) / *(float *)(param_2 + 0x10),
                       0x20,0x20,0,1,1);
    if (uVar3 < uVar10) {
      uVar3 = uVar10;
    }
    rehash((__hash_table_std____1____hash_value_type_unsigned_int_int__std____1____unordered_map_hasher_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__hash_unsigned_int__true__std____1____unordered_map_equal_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__equal_to_unsigned_int__true__std____1__allocator_std____1____hash_value_type_unsigned_int_int___
            *)param_2,uVar3);
    piVar7 = *(int **)(param_2 + 4);
    if (((int)piVar7 - 1U & (uint)piVar7) == 0) {
      unaff_r5 = (int *)((int)piVar7 - 1U & (uint)piVar9);
    }
    else {
      unaff_r5 = piVar9;
      if (piVar7 <= piVar9) {
        unaff_r5 = (int *)((int)piVar9 - ((uint)piVar9 / (uint)piVar7) * (int)piVar7);
      }
    }
  }
  iVar5 = *(int *)param_2;
  piVar9 = *(int **)(iVar5 + (int)unaff_r5 * 4);
  if (piVar9 == (int *)0x0) {
    ppiVar1 = (int **)(param_2 + 8);
    *ppiVar8 = *ppiVar1;
    *ppiVar1 = (int *)ppiVar8;
    *(int ***)(iVar5 + (int)unaff_r5 * 4) = ppiVar1;
    if (*ppiVar8 != (int *)0x0) {
      piVar9 = *(int **)((int)*ppiVar8 + 4);
      if (((int)piVar7 - 1U & (uint)piVar7) == 0) {
        piVar9 = (int *)((uint)piVar9 & (int)piVar7 - 1U);
      }
      else if (piVar7 <= piVar9) {
        piVar9 = (int *)((int)piVar9 - ((uint)piVar9 / (uint)piVar7) * (int)piVar7);
      }
      piVar9 = (int *)(*(int *)param_2 + (int)piVar9 * 4);
      goto LAB_00066ebe;
    }
  }
  else {
    *ppiVar8 = (int *)*piVar9;
LAB_00066ebe:
    *piVar9 = (int)ppiVar8;
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  pVar2 = (pair)0x1;
LAB_00066ecc:
  *(pair *)(param_1 + 1) = pVar2;
  *param_1 = (uint)ppiVar8;
  return pVar2;
}

