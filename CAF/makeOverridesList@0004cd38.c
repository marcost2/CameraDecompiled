
/* qcamera::QCamera3HardwareInterface::makeOverridesList(cam_scene_mode_overrides_t*, unsigned int,
   unsigned int, unsigned char*, unsigned char*, unsigned int) */

void qcamera::QCamera3HardwareInterface::makeOverridesList
               (cam_scene_mode_overrides_t *param_1,uint param_2,uint param_3,uchar *param_4,
               uchar *param_5,uint param_6)

{
  byte bVar1;
  int iVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  QCameraMap *pQVar8;
  int iVar9;
  
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  iVar5 = *(int *)(DAT_0004ce04 + 0x4cd4e);
  uVar6 = *(uint *)(*(int *)(iVar5 + param_6 * 4) + 0x560);
  if (8 < uVar6) {
    uVar6 = 9;
  }
  if (param_2 != 0) {
    iVar9 = 0;
    pQVar8 = *(QCameraMap **)(DAT_0004ce08 + 0x4cd6e);
    uVar7 = 0;
    do {
      bVar1 = param_5[uVar7];
      uVar3 = '\x02';
      if (*(char *)(*(int *)(iVar5 + param_6 * 4) + 0x3734) == '\0') {
        uVar3 = '\x01';
      }
      param_4[iVar9] = uVar3;
      iVar2 = lookupFwkName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_awb_mode_cam_wb_mode_type__
                        (pQVar8,9,(uchar)param_1[(uint)bVar1 * 3 + 1]);
      if (iVar2 != -2) {
        param_4[iVar9 + 1] = (uchar)iVar2;
      }
      if (uVar6 != 0) {
        uVar4 = 0;
        do {
          if (*(uint *)(*(int *)(iVar5 + param_6 * 4) + 0x564 + uVar4 * 4) ==
              (uint)(byte)param_1[(uint)bVar1 * 3 + 2]) {
            iVar2 = lookupFwkName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_af_mode_cam_focus_mode_type__
                              (*(QCameraMap **)(DAT_0004ce0c + 0x4cd7c),7,
                               (uchar)param_1[(uint)bVar1 * 3 + 2]);
            if (iVar2 != -2) goto LAB_0004cdea;
            goto LAB_0004cdf0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar6);
      }
      iVar2 = 0;
LAB_0004cdea:
      param_4[iVar9 + 2] = (uchar)iVar2;
LAB_0004cdf0:
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 3;
    } while (uVar7 < param_2);
  }
  return;
}

