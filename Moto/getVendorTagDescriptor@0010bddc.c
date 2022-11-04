
/* android::hardware::camera2::params::VendorTagDescriptorCache::getVendorTagDescriptor(unsigned
   long long, android::sp<android::hardware::camera::common::V1_0::helper::VendorTagDescriptor>*) */

undefined4
android::hardware::camera2::params::VendorTagDescriptorCache::getVendorTagDescriptor
          (ulonglong param_1,sp *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint in_r2;
  uint in_r3;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar3 = param_2[1];
  if (uVar3 != 0) {
    uVar9 = uVar3 - 1;
    uVar7 = (in_r3 * 0x5bd1e995 ^ in_r3 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^
            ((in_r2 * 0x5bd1e995 ^ in_r2 * 0x5bd1e995 >> 0x18) * 0x5bd1e995 ^ 0xde8f4ca8) *
            0x5bd1e995;
    uVar7 = (uVar7 ^ uVar7 >> 0xd) * 0x5bd1e995;
    uVar7 = uVar7 ^ uVar7 >> 0xf;
    if ((uVar9 & uVar3) == 0) {
      uVar8 = uVar9 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar3 <= uVar7) {
        uVar8 = uVar7 - (uVar7 / uVar3) * uVar3;
      }
    }
    piVar1 = *(int **)(*param_2 + uVar8 * 4);
    bVar10 = piVar1 != (int *)0x0;
    if (bVar10) {
      piVar1 = (int *)*piVar1;
    }
    if (bVar10 && piVar1 != (int *)0x0) {
      do {
        uVar5 = piVar1[1];
        if (uVar5 == uVar7) {
          if ((piVar1[2] ^ in_r2 | piVar1[3] ^ in_r3) == 0) {
            piVar6 = *(int **)param_1;
            piVar1 = (int *)piVar1[4];
            if (piVar1 != (int *)0x0) {
              piVar2 = piVar1 + 0x28;
              do {
                ExclusiveAccess(piVar2);
                bVar10 = (bool)hasExclusiveAccess(piVar2);
              } while (!bVar10);
              *piVar2 = *piVar2 + 1;
            }
            if (piVar6 != (int *)0x0) {
              piVar2 = piVar6 + 0x28;
              ExclusiveAccess(piVar2);
              iVar4 = *piVar2;
              *piVar2 = iVar4 + -1;
              if (iVar4 == 1) {
                DataMemoryBarrier(0x1b);
                (**(code **)(*piVar6 + 4))(piVar6);
              }
            }
            if (piVar6 != *(int **)param_1) {
              android::sp_report_race();
            }
            *(int **)param_1 = piVar1;
            return 0;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar5 = uVar5 & uVar9;
          }
          else if (uVar3 <= uVar5) {
            uVar5 = uVar5 - (uVar5 / uVar3) * uVar3;
          }
          if (uVar5 != uVar8) {
            return 0xfffffffe;
          }
        }
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) {
          return 0xfffffffe;
        }
      } while( true );
    }
  }
  return 0xfffffffe;
}

