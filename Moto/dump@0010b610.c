
/* android::hardware::camera2::params::VendorTagDescriptor::dump(int, int, int) const */

void __thiscall
android::hardware::camera2::params::VendorTagDescriptor::dump
          (VendorTagDescriptor *this,int param_1,int param_2,int param_3)

{
  char *__fmt;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_34;
  uint local_30 [2];
  int local_28;
  
  piVar4 = *(int **)(DAT_0010b76c + 0x10b622);
  local_28 = *piVar4;
  uVar9 = *(uint *)(this + 0x20);
  if (uVar9 == 0) {
    if (*piVar4 == local_28) {
      dprintf(param_1,(char *)(DAT_0010b770 + 0x10b74a));
      return;
    }
  }
  else {
    iVar6 = DAT_0010b77c + 0x10b646;
    dprintf(param_1,(char *)(DAT_0010b778 + 0x10b648),param_3,iVar6,uVar9);
    uVar7 = 0;
    __fmt = (char *)(DAT_0010b780 + 0x10b65e);
    do {
      uVar8 = *(uint *)(*(int *)(this + 0x1c) + uVar7 * 8);
      if (param_2 < 1) {
        dprintf(param_1,__fmt,param_3 + 2,iVar6,uVar8);
      }
      else {
        android::String8::String8
                  ((String8 *)&local_34,(String8 *)(*(int *)(this + 0x1c) + uVar7 * 8 + 4));
        local_30[0] = uVar8;
        iVar1 = android::SortedVectorImpl::indexOf(this + 0x2c);
        if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          __android_log_assert
                    (DAT_0010b794 + 0x10b764,DAT_0010b798 + 0x10b766,DAT_0010b79c + 0x10b768,
                     DAT_0010b7a0 + 0x10b76a);
        }
        android::String8::String8
                  ((String8 *)local_30,
                   (String8 *)
                   (*(int *)(this + 0x58) + *(int *)(*(int *)(this + 0x30) + iVar1 * 8 + 4) * 4));
        uVar5 = *(uint *)(this + 0x44);
        if ((uVar5 - 1 & uVar5) == 0) {
          uVar2 = uVar5 - 1 & uVar8;
        }
        else {
          uVar2 = uVar8;
          if (uVar5 <= uVar8) {
            uVar2 = uVar8 - (uVar8 / uVar5) * uVar5;
          }
        }
        piVar3 = *(int **)(*(int *)(this + 0x40) + uVar2 * 4);
        do {
          do {
            piVar3 = (int *)*piVar3;
          } while (uVar8 != piVar3[1]);
        } while (piVar3[2] != uVar8);
        uVar5 = piVar3[3];
        if (uVar5 < 6) {
          iVar1 = *(int *)(*(int *)(DAT_0010b788 + 0x10b6ec) + uVar5 * 4);
        }
        else {
          iVar1 = DAT_0010b784 + 0x10b6f8;
        }
        dprintf(param_1,(char *)(DAT_0010b78c + 0x10b70e),param_3 + 2,DAT_0010b790 + 0x10b710,uVar8,
                local_34,uVar5,iVar1,local_30[0]);
        android::String8::_String8((String8 *)local_30);
        android::String8::_String8((String8 *)&local_34);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
    if (*piVar4 == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

