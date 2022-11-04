
/* android::hardware::camera2::params::VendorTagDescriptor::~VendorTagDescriptor() */

VendorTagDescriptor * __thiscall
android::hardware::camera2::params::VendorTagDescriptor::_VendorTagDescriptor
          (VendorTagDescriptor *this)

{
  void **ppvVar1;
  int iVar2;
  void *pvVar3;
  int *this_00;
  int iVar4;
  int iVar5;
  
  *(int *)this = *(int *)(DAT_0010b090 + 0x10afc0) + 8;
  iVar4 = *(int *)(this + 0xc);
  if (iVar4 != 0) {
    iVar5 = 0;
    iVar2 = *(int *)(DAT_0010b094 + 0x10afd4);
    do {
      this_00 = *(int **)(*(int *)(this + 8) + iVar5 * 8 + 4);
      if (this_00 != (int *)0x0) {
        *this_00 = iVar2 + 8;
        android::VectorImpl::finish_vector();
        pvVar3 = (void *)android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)this_00);
        operator_delete(pvVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar5);
  }
  *(int *)(this + 0x54) = *(int *)(DAT_0010b098 + 0x10b008) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)(this + 0x54));
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
  *(int *)(this + 0x2c) = *(int *)(DAT_0010b09c + 0x10b044) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)(this + 0x2c));
  *(int *)(this + 0x18) = *(int *)(DAT_0010b0a0 + 0x10b05e) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)(this + 0x18));
  *(int *)(this + 4) = *(int *)(DAT_0010b0a4 + 0x10b076) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)(this + 4));
  return this;
}

