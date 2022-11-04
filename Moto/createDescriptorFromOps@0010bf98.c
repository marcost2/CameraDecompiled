
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
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  int *piVar13;
  int iVar14;
  String8 *pSVar15;
  void *pvVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  undefined auVar23 [16];
  undefined8 uVar24;
  int *local_8c;
  uint uStack136;
  String8 aSStack132 [4];
  int local_80;
  int local_7c;
  int local_6c [5];
  int local_58;
  int local_54;
  int *local_44;
  int *local_40;
  int local_3c;
  
  piVar17 = *(int **)(DAT_0010c378 + 0x10bfae);
  local_3c = *piVar17;
  if (param_1 == (vendor_tag_ops *)0x0) {
    iVar20 = DAT_0010c46c + 0x10c2cc;
    iVar10 = DAT_0010c470 + 0x10c2ce;
  }
  else {
    uVar3 = (**(code **)param_1)(param_1);
    if (-1 < (int)uVar3) {
      uVar4 = android::VectorImpl::VectorImpl((VectorImpl *)&local_58,4,7);
      iVar20 = *(int *)(DAT_0010c37c + 0x10bfdc) + 8;
      local_58 = iVar20;
      uVar4 = android::VectorImpl::resize(uVar4);
      if (uVar4 != uVar3) {
                    /* WARNING: Subroutine does not return */
        __android_log_assert
                  (DAT_0010c4b0 + 0x10c462,DAT_0010c4b4 + 0x10c464,DAT_0010c4b8 + 0x10c466,
                   DAT_0010c4bc + 0x10c468,uVar3);
      }
      pcVar12 = *(code **)(param_1 + 4);
      uVar5 = android::VectorImpl::editArrayImpl();
      (*pcVar12)(param_1,uVar5);
      piVar6 = (int *)operator_new(0xa4);
      __aeabi_memclr8(piVar6,0xa4);
      *piVar6 = *(int *)(DAT_0010c380 + 0x10c01e) + 8;
      piVar13 = piVar6 + 1;
      android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)piVar13,8,0);
      piVar6[1] = *(int *)(DAT_0010c384 + 0x10c034) + 8;
      piVar7 = piVar6 + 6;
      android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)piVar7,8,0);
      iVar21 = *(int *)(DAT_0010c388 + 0x10c04c) + 8;
      piVar6[6] = iVar21;
      android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(piVar6 + 0xb),8,7);
      auVar23 = ZEXT816(0);
      piVar6[0x14] = 0x3f800000;
      *(undefined8 *)(piVar6 + 0x10) = 0;
      *(undefined8 *)(piVar6 + 0x12) = 0;
      piVar6[0xb] = *(int *)(DAT_0010c38c + 0x10c07c) + 8;
      piVar19 = piVar6 + 0x15;
      android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)piVar19,4,0);
      uVar22 = SUB168(auVar23,0);
      *(undefined8 *)(piVar6 + 0x23) = uVar22;
      uVar24 = SUB168(auVar23 >> 0x40,0);
      *(undefined8 *)(piVar6 + 0x25) = uVar24;
      *(undefined8 *)(piVar6 + 0x1f) = uVar22;
      *(undefined8 *)(piVar6 + 0x21) = uVar24;
      *(undefined8 *)(piVar6 + 0x1b) = uVar22;
      *(undefined8 *)(piVar6 + 0x1d) = uVar24;
      iVar14 = *(int *)(DAT_0010c390 + 0x10c0aa) + 8;
      piVar6[0x15] = iVar14;
      iVar10 = DAT_0010c480;
      piVar6[0x27] = 0;
      *piVar6 = *(int *)(iVar10 + 0x10c0ba) + 8;
      piVar1 = piVar6 + 0x28;
      *piVar1 = 0;
      do {
        ExclusiveAccess(piVar1);
        bVar2 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar2);
      *piVar1 = *piVar1 + 1;
      piVar6[0x1a] = uVar3;
      android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)local_6c,4,0);
      local_6c[0] = iVar14;
      android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)&local_80,8,0);
      local_80 = iVar21;
      if (uVar3 == 0) {
        android::SortedVectorImpl::operator_
                  ((SortedVectorImpl *)piVar19,(SortedVectorImpl *)local_6c);
      }
      else {
        uVar4 = 0;
        do {
          piVar18 = *(int **)(local_54 + uVar4 * 4);
          if (-1 < (int)piVar18) {
            iVar10 = DAT_0010c484 + 0x10c350;
            iVar11 = DAT_0010c488 + 0x10c352;
LAB_0010c36c:
            __android_log_print(6,iVar10,iVar11,DAT_0010c48c + 0x10c374,piVar18);
LAB_0010c3ae:
            uVar5 = 0xffffffea;
            goto LAB_0010c3be;
          }
          pcVar8 = (char *)(**(code **)(param_1 + 0xc))(param_1,piVar18);
          if (pcVar8 == (char *)0x0) {
            iVar10 = DAT_0010c490 + 0x10c35e;
            iVar11 = DAT_0010c494 + 0x10c360;
            goto LAB_0010c36c;
          }
          android::String8::String8((String8 *)&local_8c,pcVar8);
          local_44 = piVar18;
          android::String8::String8((String8 *)&local_40,(String8 *)&local_8c);
          android::SortedVectorImpl::add(piVar7);
          android::String8::_String8((String8 *)&local_40);
          android::String8::_String8((String8 *)&local_8c);
          pcVar8 = (char *)(**(code **)(param_1 + 8))(param_1,piVar18);
          if (pcVar8 == (char *)0x0) {
            iVar10 = DAT_0010c498 + 0x10c36c;
            iVar11 = DAT_0010c49c + 0x10c36e;
            goto LAB_0010c36c;
          }
          android::String8::String8(aSStack132,pcVar8);
          android::SortedVectorImpl::add(local_6c);
          local_44 = piVar18;
          android::String8::String8((String8 *)&local_40,aSStack132);
          android::SortedVectorImpl::add(&local_80);
          android::String8::_String8((String8 *)&local_40);
          uVar9 = (**(code **)(param_1 + 0x10))(param_1,piVar18);
          if (5 < uVar9) {
            __android_log_print(6,DAT_0010c4a0 + 0x10c3a2,DAT_0010c4a4 + 0x10c3a4,
                                DAT_0010c4a8 + 0x10c3a6,uVar9);
            android::String8::_String8(aSStack132);
            goto LAB_0010c3ae;
          }
          local_8c = piVar18;
          uStack136 = uVar9;
          std::__1::
          __hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
          ::__emplace_unique_key_args_unsigned_int_std____1__pair_unsigned_int_int__
                    ((uint *)&local_44,(pair *)(piVar6 + 0x10));
          android::String8::_String8(aSStack132);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
        android::SortedVectorImpl::operator_
                  ((SortedVectorImpl *)piVar19,(SortedVectorImpl *)local_6c);
        uVar4 = 0;
        do {
          piVar19 = *(int **)(local_54 + uVar4 * 4);
          local_44 = piVar19;
          android::String8::String8((String8 *)&local_40);
          iVar10 = android::SortedVectorImpl::indexOf(&local_80);
          android::String8::_String8((String8 *)&local_40);
          if (iVar10 < 0) {
LAB_0010c42e:
                    /* WARNING: Subroutine does not return */
            __android_log_assert
                      (DAT_0010c4cc + 0x10c43a,DAT_0010c4d0 + 0x10c43c,DAT_0010c4d4 + 0x10c43e,
                       DAT_0010c4d8 + 0x10c440);
          }
          pSVar15 = (String8 *)(local_7c + iVar10 * 8 + 4);
          piVar18 = (int *)android::SortedVectorImpl::indexOf(local_6c);
          if ((int)piVar18 < 0) {
                    /* WARNING: Subroutine does not return */
            __android_log_assert
                      (DAT_0010c4c0 + 0x10c44c,DAT_0010c4c4 + 0x10c44e,DAT_0010c4c8 + 0x10c450);
          }
          local_44 = piVar19;
          local_40 = piVar18;
          android::SortedVectorImpl::add(piVar6 + 0xb);
          android::String8::String8((String8 *)&local_44,pSVar15);
          uVar9 = android::SortedVectorImpl::indexOf(piVar13);
          android::String8::_String8((String8 *)&local_44);
          if (0x7fffffff < uVar9) {
            piVar18 = (int *)operator_new(0x14);
            android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)piVar18,8,0);
            *piVar18 = *(int *)(DAT_0010c4ac + 0x10c250) + 8;
            android::String8::String8((String8 *)&local_44,pSVar15);
            local_40 = piVar18;
            uVar9 = android::SortedVectorImpl::add(piVar13);
            android::String8::_String8((String8 *)&local_44);
          }
          pvVar16 = *(void **)(piVar6[2] + uVar9 * 8 + 4);
          local_44 = piVar19;
          android::String8::String8((String8 *)&local_40);
          iVar10 = android::SortedVectorImpl::indexOf(piVar7);
          android::String8::_String8((String8 *)&local_40);
          if (iVar10 < 0) goto LAB_0010c42e;
          android::String8::String8((String8 *)&local_44,(String8 *)(piVar6[7] + iVar10 * 8 + 4));
          local_40 = piVar19;
          android::SortedVectorImpl::add(pvVar16);
          android::String8::_String8((String8 *)&local_44);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      piVar13 = (int *)*param_2;
      do {
        ExclusiveAccess(piVar1);
        bVar2 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar2);
      *piVar1 = *piVar1 + 1;
      if (piVar13 != (int *)0x0) {
        piVar7 = piVar13 + 0x28;
        ExclusiveAccess(piVar7);
        iVar10 = *piVar7;
        *piVar7 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0x1b);
          (**(code **)(*piVar13 + 4))(piVar13);
        }
      }
      if (piVar13 != (int *)*param_2) {
        android::sp_report_race();
      }
      uVar5 = 0;
      *param_2 = (sp)piVar6;
LAB_0010c3be:
      local_80 = iVar21;
      android::VectorImpl::finish_vector();
      android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)&local_80);
      local_6c[0] = iVar14;
      android::VectorImpl::finish_vector();
      android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)local_6c);
      ExclusiveAccess(piVar1);
      iVar10 = *piVar1;
      *piVar1 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0x1b);
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      local_58 = iVar20;
      android::VectorImpl::finish_vector();
      android::VectorImpl::_VectorImpl((VectorImpl *)&local_58);
      goto LAB_0010c412;
    }
    iVar20 = DAT_0010c478 + 0x10c2d8;
    iVar10 = DAT_0010c47c + 0x10c2da;
  }
  __android_log_print(6,iVar20,iVar10,DAT_0010c474 + 0x10c2e0);
  uVar5 = 0xffffffea;
LAB_0010c412:
  if (*piVar17 == local_3c) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

