
/* android::hardware::camera2::params::VendorTagDescriptor::VendorTagDescriptor(android::hardware::camera2::params::VendorTagDescriptor
   const&) */

VendorTagDescriptor * __thiscall
android::hardware::camera2::params::VendorTagDescriptor::VendorTagDescriptor
          (VendorTagDescriptor *this,VendorTagDescriptor *param_1)

{
  *(int *)this = *(int *)(DAT_0010b218 + 0x10b1a2) + 8;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 4),8,0);
  *(int *)(this + 4) = *(int *)(DAT_0010b21c + 0x10b1b8) + 8;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x18),8,0);
  *(int *)(this + 0x18) = *(int *)(DAT_0010b220 + 0x10b1ce) + 8;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x2c),8,7);
  *(int *)(this + 0x2c) = *(int *)(DAT_0010b224 + 0x10b1ea) + 8;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x54),4,0);
  *(int *)(this + 0x54) = *(int *)(DAT_0010b228 + 0x10b208) + 8;
  copyFrom(this,param_1);
  return this;
}

