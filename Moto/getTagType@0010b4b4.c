
/* android::hardware::camera2::params::VendorTagDescriptor::getTagType(unsigned int) const */

int __thiscall
android::hardware::camera2::params::VendorTagDescriptor::getTagType
          (VendorTagDescriptor *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar2 = *(uint *)(this + 0x44);
  if (uVar2 != 0) {
    uVar5 = uVar2 - 1;
    if ((uVar5 & uVar2) == 0) {
      uVar3 = uVar5 & param_1;
    }
    else {
      uVar3 = param_1;
      if (uVar2 <= param_1) {
        uVar3 = param_1 - (param_1 / uVar2) * uVar2;
      }
    }
    piVar1 = *(int **)(*(int *)(this + 0x40) + uVar3 * 4);
    bVar6 = piVar1 != (int *)0x0;
    if (bVar6) {
      piVar1 = (int *)*piVar1;
    }
    if (bVar6 && piVar1 != (int *)0x0) {
      do {
        uVar4 = piVar1[1];
        if (uVar4 == param_1) {
          if (piVar1[2] == param_1) {
            return piVar1[3];
          }
        }
        else {
          if ((uVar5 & uVar2) == 0) {
            uVar4 = uVar4 & uVar5;
          }
          else if (uVar2 <= uVar4) {
            uVar4 = uVar4 - (uVar4 / uVar2) * uVar2;
          }
          if (uVar4 != uVar3) {
            return -1;
          }
        }
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) {
          return -1;
        }
      } while( true );
    }
  }
  return -1;
}

