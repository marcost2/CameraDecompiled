
/* std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned
   long long, android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long
   long, android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long,
   std::__1::__hash_value_type<unsigned long long,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,
   std::__1::equal_to<unsigned long long>, true>,
   std::__1::allocator<std::__1::__hash_value_type<unsigned long long,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>>>::__emplace_unique_key_args<unsigned
   long long, unsigned long long&,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>&>(unsigned long
   long const&, unsigned long long&,
   android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>&) */

pair std::__1::
     __hash_table<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::__unordered_map_hasher<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::hash<unsigned_long_long>,true>,std::__1::__unordered_map_equal<unsigned_long_long,std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>,std::__1::equal_to<unsigned_long_long>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_long_long,android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>>>>
     ::
     __emplace_unique_key_args_unsigned_long_long_unsigned_long_long__android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___
               (ulonglong *param_1,ulonglong *param_2,sp *param_3)

{
  ulonglong *puVar1;
  bool bVar2;
  pair pVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int **in_r3;
  uint uVar7;
  int *piVar8;
  int **ppiVar9;
  uint uVar10;
  int *piVar11;
  int *unaff_r11;
  float fVar12;
  int **in_stack_00000000;
  
  piVar8 = *(int **)((int)param_2 + 4);
  uVar10 = *param_3 * 0x5bd1e995;
  uVar7 = param_3[1] * 0x5bd1e995;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x5bd1e995 ^
          ((uVar10 ^ uVar10 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) * 0x5bd1e995;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * 0x5bd1e995;
  piVar11 = (int *)(uVar7 ^ uVar7 >> 0xf);
  if (piVar8 != (int *)0x0) {
    uVar7 = (int)piVar8 - 1;
    if ((uVar7 & (uint)piVar8) == 0) {
      unaff_r11 = (int *)((uint)piVar11 & uVar7);
    }
    else {
      unaff_r11 = piVar11;
      if (piVar8 <= piVar11) {
        unaff_r11 = (int *)((int)piVar11 - ((uint)piVar11 / (uint)piVar8) * (int)piVar8);
      }
    }
    ppiVar9 = *(int ***)(*(int *)param_2 + (int)unaff_r11 * 4);
    if (ppiVar9 != (int **)0x0) {
      do {
        ppiVar9 = (int **)*ppiVar9;
        if (ppiVar9 == (int **)0x0) goto LAB_0010d49c;
        piVar5 = ppiVar9[1];
        if (piVar5 != piVar11) {
          if ((uVar7 & (uint)piVar8) == 0) {
            piVar5 = (int *)((uint)piVar5 & uVar7);
          }
          else if (piVar8 <= piVar5) {
            if ((int *)((int)piVar5 - ((uint)piVar5 / (uint)piVar8) * (int)piVar8) == unaff_r11)
            goto LAB_0010d48c;
            goto LAB_0010d49c;
          }
          if (piVar5 != unaff_r11) goto LAB_0010d49c;
        }
LAB_0010d48c:
      } while (((uint)ppiVar9[2] ^ *param_3 | (uint)ppiVar9[3] ^ param_3[1]) != 0);
      pVar3 = 0;
      goto LAB_0010d594;
    }
  }
LAB_0010d49c:
  ppiVar9 = (int **)operator_new(0x18);
  piVar5 = *in_stack_00000000;
  piVar6 = in_r3[1];
  ppiVar9[2] = *in_r3;
  ppiVar9[3] = piVar6;
  ppiVar9[4] = piVar5;
  if (piVar5 != (int *)0x0) {
    piVar5 = piVar5 + 0x28;
    do {
      ExclusiveAccess(piVar5);
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = *piVar5 + 1;
  }
  *ppiVar9 = (int *)0x0;
  ppiVar9[1] = piVar11;
  fVar12 = (float)(ulonglong)(*(int *)((int)param_2 + 0xc) + 1);
  if ((piVar8 == (int *)0x0) ||
     ((int)((uint)(*(float *)(param_2 + 2) * (float)ZEXT48(piVar8) < fVar12) << 0x1f) < 0)) {
    if (piVar8 < (int *)0x3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (int)piVar8 - 1U & (uint)piVar8;
      if (uVar7 != 0) {
        uVar7 = 1;
      }
    }
    uVar7 = uVar7 | (int)piVar8 << 1;
    uVar10 = FPToFixed(fVar12 / *(float *)(param_2 + 2),0x20,0x20,0,1,1);
    if (uVar7 < uVar10) {
      uVar7 = uVar10;
    }
    rehash((__hash_table_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1____unordered_map_hasher_unsigned_long_long_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1__hash_unsigned_long_long__true__std____1____unordered_map_equal_unsigned_long_long_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor___std____1__equal_to_unsigned_long_long__true__std____1__allocator_std____1____hash_value_type_unsigned_long_long_android__sp_android__hardware__camera__common__V1_0__helper__VendorTagDescriptor____
            *)param_2,uVar7);
    piVar8 = *(int **)((int)param_2 + 4);
    if (((int)piVar8 - 1U & (uint)piVar8) == 0) {
      unaff_r11 = (int *)((int)piVar8 - 1U & (uint)piVar11);
    }
    else {
      unaff_r11 = piVar11;
      if (piVar8 <= piVar11) {
        unaff_r11 = (int *)((int)piVar11 - ((uint)piVar11 / (uint)piVar8) * (int)piVar8);
      }
    }
  }
  iVar4 = *(int *)param_2;
  piVar11 = *(int **)(iVar4 + (int)unaff_r11 * 4);
  if (piVar11 == (int *)0x0) {
    puVar1 = param_2 + 1;
    *ppiVar9 = *(int **)puVar1;
    *(int ***)puVar1 = ppiVar9;
    *(ulonglong **)(iVar4 + (int)unaff_r11 * 4) = puVar1;
    if (*ppiVar9 != (int *)0x0) {
      piVar11 = *(int **)((int)*ppiVar9 + 4);
      if (((int)piVar8 - 1U & (uint)piVar8) == 0) {
        piVar11 = (int *)((uint)piVar11 & (int)piVar8 - 1U);
      }
      else if (piVar8 <= piVar11) {
        piVar11 = (int *)((int)piVar11 - ((uint)piVar11 / (uint)piVar8) * (int)piVar8);
      }
      piVar11 = (int *)(*(int *)param_2 + (int)piVar11 * 4);
      goto LAB_0010d586;
    }
  }
  else {
    *ppiVar9 = (int *)*piVar11;
LAB_0010d586:
    *piVar11 = (int)ppiVar9;
  }
  *(int *)((int)param_2 + 0xc) = *(int *)((int)param_2 + 0xc) + 1;
  pVar3 = 1;
LAB_0010d594:
  *(char *)((int)param_1 + 4) = (char)pVar3;
  *(int ***)param_1 = ppiVar9;
  return pVar3;
}

