
/* android::hardware::camera2::params::VendorTagDescriptor::copyFrom(android::hardware::camera2::params::VendorTagDescriptor
   const&) */

void __thiscall
android::hardware::camera2::params::VendorTagDescriptor::copyFrom
          (VendorTagDescriptor *this,VendorTagDescriptor *param_1)

{
  int iVar1;
  void *pvVar2;
  SortedVectorImpl *this_00;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String8 aSStack48 [4];
  SortedVectorImpl *local_2c;
  int local_28;
  
  piVar3 = *(int **)(DAT_0010b370 + 0x10b23c);
  local_28 = *piVar3;
  if (this != param_1) {
    iVar4 = *(int *)(this + 0xc);
    if (iVar4 != 0) {
      iVar5 = 0;
      iVar1 = *(int *)(DAT_0010b374 + 0x10b25a);
      do {
        piVar6 = *(int **)(*(int *)(this + 8) + iVar5 * 8 + 4);
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar1 + 8;
          android::VectorImpl::finish_vector();
          pvVar2 = (void *)android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)piVar6);
          operator_delete(pvVar2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
    android::VectorImpl::clear();
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 != 0) {
      iVar5 = 4;
      iVar1 = *(int *)(DAT_0010b378 + 0x10b298);
      do {
        this_00 = (SortedVectorImpl *)operator_new(0x14);
        piVar6 = (int *)android::SortedVectorImpl::SortedVectorImpl(this_00,8,0);
        *piVar6 = iVar1 + 8;
        android::SortedVectorImpl::operator_
                  (this_00,*(SortedVectorImpl **)(*(int *)(param_1 + 8) + iVar5));
        android::String8::String8(aSStack48,(String8 *)(*(int *)(param_1 + 8) + iVar5 + -4));
        local_2c = this_00;
        android::SortedVectorImpl::add(this + 4);
        android::String8::_String8(aSStack48);
        iVar5 = iVar5 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    android::SortedVectorImpl::operator_
              ((SortedVectorImpl *)(this + 0x18),(SortedVectorImpl *)(param_1 + 0x18));
    android::SortedVectorImpl::operator_
              ((SortedVectorImpl *)(this + 0x2c),(SortedVectorImpl *)(param_1 + 0x2c));
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    std::__1::
    __hash_table<std::__1::__hash_value_type<unsigned_int,int>,std::__1::__unordered_map_hasher<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::hash<unsigned_int>,true>,std::__1::__unordered_map_equal<unsigned_int,std::__1::__hash_value_type<unsigned_int,int>,std::__1::equal_to<unsigned_int>,true>,std::__1::allocator<std::__1::__hash_value_type<unsigned_int,int>>>
    ::
    __assign_multi_std____1____hash_const_iterator_std____1____hash_node_std____1____hash_value_type_unsigned_int_int__void_____
              ((__hash_table_std____1____hash_value_type_unsigned_int_int__std____1____unordered_map_hasher_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__hash_unsigned_int__true__std____1____unordered_map_equal_unsigned_int_std____1____hash_value_type_unsigned_int_int__std____1__equal_to_unsigned_int__true__std____1__allocator_std____1____hash_value_type_unsigned_int_int___
                *)(this + 0x40),*(__hash_const_iterator *)(param_1 + 0x48),0);
    android::SortedVectorImpl::operator_
              ((SortedVectorImpl *)(this + 0x54),(SortedVectorImpl *)(param_1 + 0x54));
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
    uVar7 = *(undefined8 *)(param_1 + 0x8c);
    uVar8 = *(undefined8 *)(param_1 + 0x94);
    uVar9 = *(undefined8 *)(param_1 + 0x7c);
    uVar10 = *(undefined8 *)(param_1 + 0x84);
    uVar11 = *(undefined8 *)(param_1 + 0x6c);
    uVar12 = *(undefined8 *)(param_1 + 0x74);
    *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined8 *)(this + 0x8c) = uVar7;
    *(undefined8 *)(this + 0x94) = uVar8;
    *(undefined8 *)(this + 0x7c) = uVar9;
    *(undefined8 *)(this + 0x84) = uVar10;
    *(undefined8 *)(this + 0x6c) = uVar11;
    *(undefined8 *)(this + 0x74) = uVar12;
  }
  if (*piVar3 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

