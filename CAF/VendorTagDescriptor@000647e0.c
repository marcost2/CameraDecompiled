
/* android::hardware::camera2::params::VendorTagDescriptor::VendorTagDescriptor(android::hardware::camera2::params::VendorTagDescriptor
   const&) */

VendorTagDescriptor * __thiscall
android::hardware::camera2::params::VendorTagDescriptor::VendorTagDescriptor
          (VendorTagDescriptor *this)

{
  VendorTagDescriptor *in_r1;
  
  *(int *)this = *(int *)(DAT_00064868 + 0x647f2) + 8;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 4),8,0);
  *(int *)(this + 4) = *(int *)(DAT_0006486c + 0x64808) + 8;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x18),8,0);
  *(int *)(this + 0x18) = *(int *)(DAT_00064870 + 0x6481e) + 8;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x2c),8,7);
  *(int *)(this + 0x2c) = *(int *)(DAT_00064874 + 0x6483a) + 8;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x54),4,0);
  *(int *)(this + 0x54) = *(int *)(DAT_00064878 + 0x64858) + 8;
  copyFrom(this,in_r1);
  return this;
}

