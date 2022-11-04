
/* android::hardware::camera2::params::VendorTagDescriptor::getTagCount() const */

int __thiscall
android::hardware::camera2::params::VendorTagDescriptor::getTagCount(VendorTagDescriptor *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x20);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  return iVar1;
}

