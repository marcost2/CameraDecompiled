
/* android::hardware::camera2::params::VendorTagDescriptor::~VendorTagDescriptor() */

VendorTagDescriptor * __thiscall
android::hardware::camera2::params::VendorTagDescriptor::_VendorTagDescriptor
          (VendorTagDescriptor *this)

{
  void **ppvVar1;
  int iVar2;
  void *pvVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint in_r2;
  int *this_00;
  int iVar4;
  int iVar5;
  
  *(int *)this = *(int *)(DAT_000646e0 + 0x64610) + 8;
  iVar4 = *(int *)(this + 0xc);
  if (iVar4 != 0) {
    iVar5 = 0;
    iVar2 = *(int *)(DAT_000646e4 + 0x64624);
    do {
      this_00 = *(int **)(*(int *)(this + 8) + iVar5 * 8 + 4);
      if (this_00 != (int *)0x0) {
        *this_00 = iVar2 + 8;
        android::VectorImpl::finish_vector();
        pvVar3 = (void *)android::SortedVectorImpl::_SortedVectorImpl
                                   ((SortedVectorImpl *)this_00,extraout_r1,in_r2);
        operator_delete(pvVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar5);
  }
  *(int *)(this + 0x54) = *(int *)(DAT_000646e8 + 0x64658) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl
            ((SortedVectorImpl *)(this + 0x54),extraout_r1_00,in_r2);
  ppvVar1 = (void **)*(void **)(this + 0x48);
  while (ppvVar1 != (void **)0x0) {
    pvVar3 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(this + 0x40);
  *(undefined4 *)(this + 0x40) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  *(int *)(this + 0x2c) = *(int *)(DAT_000646ec + 0x64694) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl
            ((SortedVectorImpl *)(this + 0x2c),extraout_r1_01,in_r2);
  *(int *)(this + 0x18) = *(int *)(DAT_000646f0 + 0x646ae) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl
            ((SortedVectorImpl *)(this + 0x18),extraout_r1_02,in_r2);
  *(int *)(this + 4) = *(int *)(DAT_000646f4 + 0x646c6) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)(this + 4),extraout_r1_03,in_r2);
  return this;
}

