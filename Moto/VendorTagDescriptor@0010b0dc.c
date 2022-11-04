
/* android::hardware::camera2::params::VendorTagDescriptor::VendorTagDescriptor() */

VendorTagDescriptor * __thiscall
android::hardware::camera2::params::VendorTagDescriptor::VendorTagDescriptor
          (VendorTagDescriptor *this)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  
  *(int *)this = *(int *)(DAT_0010b17c + 0x10b0f0) + 8;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 4),8,0);
  *(int *)(this + 4) = *(int *)(DAT_0010b180 + 0x10b104) + 8;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x18),8,0);
  *(int *)(this + 0x18) = *(int *)(DAT_0010b184 + 0x10b11a) + 8;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x2c),8,7);
  auVar2 = ZEXT816(0);
  *(int *)(this + 0x2c) = *(int *)(DAT_0010b188 + 0x10b136) + 8;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x54),4,0);
  uVar1 = SUB168(auVar2,0);
  *(undefined8 *)(this + 0x88) = uVar1;
  uVar3 = SUB168(auVar2 >> 0x40,0);
  *(undefined8 *)(this + 0x90) = uVar3;
  *(undefined8 *)(this + 0x78) = uVar1;
  *(undefined8 *)(this + 0x80) = uVar3;
  *(undefined8 *)(this + 0x68) = uVar1;
  *(undefined8 *)(this + 0x70) = uVar3;
  *(int *)(this + 0x54) = *(int *)(DAT_0010b18c + 0x10b16c) + 8;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  return this;
}

