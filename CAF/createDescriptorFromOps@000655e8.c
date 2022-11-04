
/* android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::createDescriptorFromOps(vendor_tag_ops
   const*, android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>&) */

undefined4
android::hardware::camera::common::V1_0::helper::VendorTagDescriptor::createDescriptorFromOps
          (vendor_tag_ops *param_1,sp *param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *this;
  char *pcVar7;
  uint uVar8;
  uint **ppuVar9;
  int iVar10;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *extraout_r1_02;
  char *extraout_r1_03;
  char *extraout_r1_04;
  char *extraout_r1_05;
  char *pcVar11;
  char *extraout_r1_06;
  char *extraout_r1_07;
  char *extraout_r1_08;
  uint extraout_r1_09;
  uint extraout_r1_10;
  uint extraout_r1_11;
  int **ppiVar12;
  uint *puVar13;
  code *pcVar14;
  int *piVar15;
  int iVar16;
  SortedVectorImpl *this_00;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  undefined auVar22 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  int *local_8c;
  uint uStack136;
  uint uStack132;
  int local_80;
  int local_7c;
  int local_6c [5];
  int local_58;
  int local_54;
  int *local_44;
  int *local_40;
  int local_3c;
  
  piVar17 = *(int **)(DAT_000659c8 + 0x655fe);
  local_3c = *piVar17;
  if ((param_1 == (vendor_tag_ops *)0x0) || (uVar3 = (**(code **)param_1)(param_1), (int)uVar3 < 0))
  {
    __android_log_print();
    uVar5 = 0xffffffea;
  }
  else {
    uVar4 = android::VectorImpl::VectorImpl((VectorImpl *)&local_58,4,7);
    iVar20 = *(int *)(DAT_000659cc + 0x6562c) + 8;
    local_58 = iVar20;
    uVar4 = android::VectorImpl::resize(uVar4);
    if (uVar4 != uVar3) {
                    /* WARNING: Subroutine does not return */
      __android_log_assert();
    }
    pcVar14 = *(code **)(param_1 + 4);
    uVar5 = android::VectorImpl::editArrayImpl();
    (*pcVar14)(param_1,uVar5);
    piVar6 = (int *)operator_new(0xa4);
    __aeabi_memclr4(piVar6,0xa4);
    *piVar6 = *(int *)(DAT_000659d0 + 0x6566e) + 8;
    piVar15 = piVar6 + 1;
    android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)piVar15,8,0);
    piVar6[1] = *(int *)(DAT_000659d4 + 0x65684) + 8;
    this = piVar6 + 6;
    android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)this,8,0);
    iVar21 = *(int *)(DAT_000659d8 + 0x6569c) + 8;
    piVar6[6] = iVar21;
    android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(piVar6 + 0xb),8,7);
    auVar22 = ZEXT816(0);
    piVar6[0x14] = 0x3f800000;
    *(undefined8 *)(piVar6 + 0x10) = 0;
    *(undefined8 *)(piVar6 + 0x12) = 0;
    piVar6[0xb] = *(int *)(DAT_000659dc + 0x656cc) + 8;
    piVar19 = piVar6 + 0x15;
    android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)piVar19,4,0);
    uVar24 = SUB168(auVar22,0);
    *(undefined8 *)(piVar6 + 0x23) = uVar24;
    uVar23 = SUB168(auVar22 >> 0x40,0);
    *(undefined8 *)(piVar6 + 0x25) = uVar23;
    *(undefined8 *)(piVar6 + 0x1f) = uVar24;
    *(undefined8 *)(piVar6 + 0x21) = uVar23;
    *(undefined8 *)(piVar6 + 0x1b) = uVar24;
    *(undefined8 *)(piVar6 + 0x1d) = uVar23;
    iVar16 = *(int *)(DAT_000659e0 + 0x656fa) + 8;
    piVar6[0x15] = iVar16;
    iVar10 = DAT_00065ad0;
    piVar6[0x27] = 0;
    *piVar6 = *(int *)(iVar10 + 0x6570a) + 8;
    piVar1 = piVar6 + 0x28;
    *piVar1 = 0;
    do {
      ExclusiveAccess(piVar1);
      bVar2 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar2);
    *piVar1 = *piVar1 + 1;
    piVar6[0x1a] = uVar3;
    android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)local_6c,4,0);
    ppiVar12 = (int **)0x0;
    local_6c[0] = iVar16;
    android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)&local_80,8,0);
    local_80 = iVar21;
    if (uVar3 == 0) {
      android::SortedVectorImpl::operator_((SortedVectorImpl *)piVar19,(SortedVectorImpl *)local_6c)
      ;
    }
    else {
      uVar4 = 0;
      do {
        piVar18 = *(int **)(local_54 + uVar4 * 4);
        if (-1 < (int)piVar18) {
          ppiVar12 = (int **)(DAT_00065ad8 + 0x659a2);
LAB_000659bc:
          __android_log_print();
LAB_000659fe:
          uVar5 = 0xffffffea;
          goto LAB_00065a0e;
        }
        puVar13 = *(uint **)(param_1 + 0xc);
        pcVar7 = (char *)(*(code *)puVar13)(param_1,piVar18);
        if (pcVar7 == (char *)0x0) {
          ppiVar12 = (int **)(DAT_00065ae4 + 0x659b0);
          goto LAB_000659bc;
        }
        android::String8::String8((String8 *)&local_8c,pcVar7);
        local_44 = piVar18;
        android::String8::String8((String8 *)&local_40,(char *)&local_8c);
        android::SortedVectorImpl::add((SortedVectorImpl *)this,(uint *)&local_44,puVar13);
        android::String8::_String8((String8 *)&local_40,extraout_r1);
        android::String8::_String8((String8 *)&local_8c,extraout_r1_00);
        puVar13 = *(uint **)(param_1 + 8);
        pcVar7 = (char *)(*(code *)puVar13)(param_1,piVar18);
        if (pcVar7 == (char *)0x0) {
          ppiVar12 = (int **)(DAT_00065aec + 0x659be);
          goto LAB_000659bc;
        }
        android::String8::String8((String8 *)&uStack132,pcVar7);
        android::SortedVectorImpl::add((SortedVectorImpl *)local_6c,&uStack132,puVar13);
        local_44 = piVar18;
        android::String8::String8((String8 *)&local_40,(char *)&uStack132);
        android::SortedVectorImpl::add((SortedVectorImpl *)&local_80,(uint *)&local_44,puVar13);
        android::String8::_String8((String8 *)&local_40,extraout_r1_01);
        uVar8 = (**(code **)(param_1 + 0x10))(param_1,piVar18);
        if (5 < uVar8) {
          ppiVar12 = (int **)(DAT_00065af4 + 0x659f4);
          __android_log_print();
          android::String8::_String8((String8 *)&uStack132,extraout_r1_08);
          goto LAB_000659fe;
        }
        ppiVar12 = &local_8c;
        local_8c = piVar18;
        uStack136 = uVar8;
        std::__1::
        __hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
        ::__emplace_unique_key_args_unsigned_int_std____1__pair_unsigned_int_int__
                  ((uint *)&local_44,(pair *)(piVar6 + 0x10));
        android::String8::_String8((String8 *)&uStack132,extraout_r1_02);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
      android::SortedVectorImpl::operator_((SortedVectorImpl *)piVar19,(SortedVectorImpl *)local_6c)
      ;
      uVar4 = 0;
      pcVar7 = extraout_r1_03;
      do {
        piVar19 = *(int **)(local_54 + uVar4 * 4);
        local_44 = piVar19;
        android::String8::String8((String8 *)&local_40,pcVar7);
        uVar24 = android::SortedVectorImpl::indexOf((key_value_pair_t *)&local_80);
        android::String8::_String8((String8 *)&local_40,(char *)((ulonglong)uVar24 >> 0x20));
        if ((int)uVar24 < 0) {
LAB_00065a7e:
                    /* WARNING: Subroutine does not return */
          __android_log_assert();
        }
        pcVar7 = (char *)(local_7c + (int)uVar24 * 8 + 4);
        piVar18 = (int *)android::SortedVectorImpl::indexOf((key_value_pair_t *)local_6c);
        if ((int)piVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          __android_log_assert();
        }
        local_44 = piVar19;
        local_40 = piVar18;
        android::SortedVectorImpl::add
                  ((SortedVectorImpl *)(piVar6 + 0xb),(uint *)&local_44,(uint *)ppiVar12);
        android::String8::String8((String8 *)&local_44,pcVar7);
        uVar24 = android::SortedVectorImpl::indexOf((key_value_pair_t *)piVar15);
        uVar8 = (uint)uVar24;
        android::String8::_String8((String8 *)&local_44,(char *)((ulonglong)uVar24 >> 0x20));
        pcVar11 = extraout_r1_04;
        if (0x7fffffff < uVar8) {
          piVar18 = (int *)operator_new(0x14);
          ppiVar12 = (int **)0x0;
          android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)piVar18,8,0);
          *piVar18 = *(int *)(DAT_00065afc + 0x658a0) + 8;
          android::String8::String8((String8 *)&local_44,pcVar7);
          local_40 = piVar18;
          uVar24 = android::SortedVectorImpl::add
                             ((SortedVectorImpl *)piVar15,(uint *)&local_44,(uint *)ppiVar12);
          uVar8 = (uint)uVar24;
          android::String8::_String8((String8 *)&local_44,(char *)((ulonglong)uVar24 >> 0x20));
          pcVar11 = extraout_r1_05;
        }
        this_00 = *(SortedVectorImpl **)(piVar6[2] + uVar8 * 8 + 4);
        local_44 = piVar19;
        android::String8::String8((String8 *)&local_40,pcVar11);
        uVar24 = android::SortedVectorImpl::indexOf((key_value_pair_t *)this);
        android::String8::_String8((String8 *)&local_40,(char *)((ulonglong)uVar24 >> 0x20));
        if ((int)uVar24 < 0) goto LAB_00065a7e;
        android::String8::String8((String8 *)&local_44,(char *)(piVar6[7] + (int)uVar24 * 8 + 4));
        local_40 = piVar19;
        android::SortedVectorImpl::add(this_00,(uint *)&local_44,(uint *)ppiVar12);
        android::String8::_String8((String8 *)&local_44,extraout_r1_06);
        uVar4 = uVar4 + 1;
        pcVar7 = extraout_r1_07;
      } while (uVar4 < uVar3);
    }
    piVar15 = *(int **)param_2;
    do {
      ExclusiveAccess(piVar1);
      bVar2 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar2);
    *piVar1 = *piVar1 + 1;
    if (piVar15 != (int *)0x0) {
      ppuVar9 = (uint **)(piVar15 + 0x28);
      ExclusiveAccess(ppuVar9);
      puVar13 = *ppuVar9;
      ppiVar12 = (int **)((int)puVar13 + -1);
      *ppuVar9 = (uint *)ppiVar12;
      if (puVar13 == (uint *)0x1) {
        DataMemoryBarrier(0x1b);
        (**(code **)(*piVar15 + 4))(piVar15);
      }
    }
    if (piVar15 != *(int **)param_2) {
      android::sp_report_race();
    }
    uVar5 = 0;
    *(int **)param_2 = piVar6;
LAB_00065a0e:
    local_80 = iVar21;
    android::VectorImpl::finish_vector();
    android::SortedVectorImpl::_SortedVectorImpl
              ((SortedVectorImpl *)&local_80,extraout_r1_09,(uint)ppiVar12);
    local_6c[0] = iVar16;
    android::VectorImpl::finish_vector();
    android::SortedVectorImpl::_SortedVectorImpl
              ((SortedVectorImpl *)local_6c,extraout_r1_10,(uint)ppiVar12);
    ExclusiveAccess(piVar1);
    iVar10 = *piVar1;
    *piVar1 = iVar10 + -1;
    uVar3 = 0;
    if (iVar10 == 1) {
      DataMemoryBarrier(0x1b);
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    local_58 = iVar20;
    android::VectorImpl::finish_vector();
    android::VectorImpl::_VectorImpl((VectorImpl *)&local_58,extraout_r1_11,uVar3);
  }
  if (*piVar17 == local_3c) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

