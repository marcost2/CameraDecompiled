
/* android::hardware::camera2::params::VendorTagDescriptor::getTagArray(unsigned int*) const */

void __thiscall
android::hardware::camera2::params::VendorTagDescriptor::getTagArray
          (VendorTagDescriptor *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x20);
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      param_1[iVar1] = *(uint *)(*(int *)(this + 0x1c) + iVar1 * 8);
      iVar1 = iVar1 + 1;
    } while (iVar2 != iVar1);
  }
  return;
}

