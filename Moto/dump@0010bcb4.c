
/* android::hardware::camera2::params::VendorTagDescriptorCache::dump(int, int, int) const */

void __thiscall
android::hardware::camera2::params::VendorTagDescriptorCache::dump
          (VendorTagDescriptorCache *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(this + 8); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    VendorTagDescriptor::dump((VendorTagDescriptor *)piVar1[4],param_1,param_2,param_3);
  }
  return;
}

