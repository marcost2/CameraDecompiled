
/* android::hardware::camera2::params::VendorTagDescriptor::dump(int, int, int) const */

void android::hardware::camera2::params::VendorTagDescriptor::dump
               (camera3_device *param_1,int param_2)

{
  char *__fmt;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  char *extraout_r1;
  char *extraout_r1_00;
  int in_r2;
  int in_r3;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_34;
  uint local_30 [2];
  int local_28;
  
  piVar4 = *(int **)(DAT_00064dbc + 0x64c72);
  local_28 = *piVar4;
  uVar9 = *(uint *)(param_1 + 0x20);
  if (uVar9 == 0) {
    if (*piVar4 == local_28) {
      __ThumbV7PILongThunk_dprintf(param_2,(char *)(DAT_00064dc0 + 0x64d9a));
      return;
    }
  }
  else {
    iVar6 = DAT_00064dcc + 0x64c96;
    dprintf(param_2,(char *)(DAT_00064dc8 + 0x64c98));
    uVar7 = 0;
    __fmt = (char *)(DAT_00064dd0 + 0x64cae);
    do {
      uVar8 = *(uint *)(*(int *)(param_1 + 0x1c) + uVar7 * 8);
      if (in_r2 < 1) {
        dprintf(param_2,__fmt,in_r3 + 2,iVar6,uVar8);
      }
      else {
        android::String8::String8
                  ((String8 *)&local_34,(char *)(*(int *)(param_1 + 0x1c) + uVar7 * 8 + 4));
        local_30[0] = uVar8;
        iVar1 = android::SortedVectorImpl::indexOf((key_value_pair_t *)(param_1 + 0x2c));
        if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          __android_log_assert();
        }
        android::String8::String8
                  ((String8 *)local_30,
                   (char *)(*(int *)(param_1 + 0x58) +
                           *(int *)(*(int *)(param_1 + 0x30) + iVar1 * 8 + 4) * 4));
        uVar5 = *(uint *)(param_1 + 0x44);
        if ((uVar5 - 1 & uVar5) == 0) {
          uVar2 = uVar5 - 1 & uVar8;
        }
        else {
          uVar2 = uVar8;
          if (uVar5 <= uVar8) {
            uVar2 = uVar8 - (uVar8 / uVar5) * uVar5;
          }
        }
        piVar3 = *(int **)(*(int *)(param_1 + 0x40) + uVar2 * 4);
        do {
          do {
            piVar3 = (int *)*piVar3;
          } while (uVar8 != piVar3[1]);
        } while (piVar3[2] != uVar8);
        uVar5 = piVar3[3];
        if (uVar5 < 6) {
          iVar1 = *(int *)(*(int *)(DAT_00064dd8 + 0x64d3c) + uVar5 * 4);
        }
        else {
          iVar1 = DAT_00064dd4 + 0x64d48;
        }
        dprintf(param_2,(char *)(DAT_00064ddc + 0x64d5e),in_r3 + 2,DAT_00064de0 + 0x64d60,uVar8,
                local_34,uVar5,iVar1,local_30[0]);
        android::String8::_String8((String8 *)local_30,extraout_r1);
        android::String8::_String8((String8 *)&local_34,extraout_r1_00);
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

