
/* android::hardware::camera::common::V1_0::helper::CameraMetadata::getTagFromName(char const*,
   android::hardware::camera::common::V1_0::helper::VendorTagDescriptor const*, unsigned int*) */

void android::hardware::camera::common::V1_0::helper::CameraMetadata::getTagFromName
               (char *param_1,VendorTagDescriptor *param_2,uint *param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  char **ppcVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  uint *unaff_r4;
  uint uVar7;
  char *__s;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char **ppcVar13;
  int local_38;
  String8 aSStack52 [4];
  String8 aSStack48 [4];
  uint local_2c;
  int local_28;
  
  piVar8 = *(int **)(DAT_0010afa8 + 0x10ae34);
  local_28 = *piVar8;
  uVar1 = 0xffffffea;
  if (param_1 != (char *)0x0) {
    unaff_r4 = param_3;
  }
  if (param_1 == (char *)0x0 || param_3 == (uint *)0x0) goto LAB_0010ae46;
  sVar2 = strlen(param_1);
  if (param_2 == (VendorTagDescriptor *)0x0) {
    uVar11 = 0x1e;
LAB_0010ae8a:
    pcVar9 = (char *)0x0;
    uVar10 = 0;
    uVar12 = 0;
    uVar7 = 0;
    ppcVar13 = *(char ***)(DAT_0010afac + 0x10ae9c);
    do {
      ppcVar3 = ppcVar13;
      if (0x1d < uVar7) {
        ppcVar3 = (char **)(*(int *)(local_38 + 4) + uVar7 * 4 + -0x78);
      }
      __s = *ppcVar3;
      sVar4 = strlen(__s);
      iVar5 = strncmp(param_1,__s,sVar4);
      if (iVar5 == 0) {
        sVar4 = strlen(__s);
        uVar6 = count_leading_zeroes(pcVar9);
        if (((uint)(uVar12 < sVar4) | uVar6 >> 5) != 0) {
          pcVar9 = __s;
          uVar10 = uVar7;
          uVar12 = sVar4;
        }
      }
      uVar7 = uVar7 + 1;
      ppcVar13 = ppcVar13 + 1;
    } while (uVar11 != uVar7);
    if (pcVar9 == (char *)0x0) {
LAB_0010af7e:
      uVar1 = 0xfffffffe;
      goto LAB_0010ae46;
    }
    if (sVar2 <= uVar12 + 1) {
      uVar1 = 0xffffffea;
      goto LAB_0010ae46;
    }
    local_2c = 0;
    if (uVar10 < 0x1e) {
      uVar7 = *(uint *)(*(int *)(DAT_0010afb0 + 0x10af14) + uVar10 * 8 + 4);
      for (uVar11 = *(uint *)(*(int *)(DAT_0010afb0 + 0x10af14) + uVar10 * 8); local_2c = uVar11,
          uVar11 < uVar7; uVar11 = uVar11 + 1) {
        pcVar9 = (char *)get_camera_metadata_tag_name(uVar11);
        iVar5 = strcmp(param_1 + uVar12 + 1,pcVar9);
        if (iVar5 == 0) break;
      }
      if (uVar11 == uVar7) goto LAB_0010af8c;
    }
    else {
      uVar11 = local_2c;
      if (param_2 != (VendorTagDescriptor *)0x0) {
        android::String8::String8(aSStack48,pcVar9);
        android::String8::String8(aSStack52,param_1 + uVar12 + 1);
        iVar5 = camera2::params::VendorTagDescriptor::lookupTag
                          ((VendorTagDescriptor *)param_2,aSStack52,aSStack48,&local_2c);
        android::String8::_String8(aSStack52);
        android::String8::_String8(aSStack48);
        uVar11 = local_2c;
        if (iVar5 != 0) goto LAB_0010af7e;
      }
    }
    *unaff_r4 = uVar11;
    uVar1 = 0;
  }
  else {
    local_38 = camera2::params::VendorTagDescriptor::getAllSectionNames
                         ((VendorTagDescriptor *)param_2);
    uVar11 = *(int *)(local_38 + 8) + 0x1e;
    if (uVar11 != 0) goto LAB_0010ae8a;
LAB_0010af8c:
    uVar1 = 0xfffffffe;
  }
LAB_0010ae46:
  if (*piVar8 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

