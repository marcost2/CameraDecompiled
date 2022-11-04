
/* android::hardware::camera2::params::VendorTagDescriptorCache::dump(int, int, int) const */

void android::hardware::camera2::params::VendorTagDescriptorCache::dump
               (camera3_device *param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    VendorTagDescriptor::dump((camera3_device *)piVar1[4],param_2);
  }
  return;
}

