
/* qcamera::QCamera3HardwareInterface::makeOverridesList(cam_scene_mode_overrides_t*, unsigned int,
   unsigned int, unsigned char*, unsigned char*, unsigned int) */

void qcamera::QCamera3HardwareInterface::makeOverridesList
               (cam_scene_mode_overrides_t *param_1,uint param_2,uint param_3,uchar *param_4,
               uchar *param_5,uint param_6)

{
  byte bVar1;
  cam_scene_mode_overrides_t cVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  iVar8 = *(int *)(DAT_00093eb0 + 0x93d82);
  iVar4 = *(int *)(iVar8 + param_6 * 4);
  uVar7 = *(uint *)(iVar4 + 0x564);
  if (8 < uVar7) {
    uVar7 = 9;
  }
  if (param_2 == 0) {
    return;
  }
  iVar9 = 0;
  uVar10 = 0;
  do {
    bVar1 = param_5[uVar10];
    uVar3 = '\x02';
    if (*(char *)(iVar4 + 0x3831) == '\0') {
      uVar3 = '\x01';
    }
    param_4[iVar9] = uVar3;
    cVar2 = param_1[(uint)bVar1 * 3 + 1];
    if (((byte)cVar2 < 0xb) && ((0x5fdU >> (uint)(byte)cVar2 & 1) != 0)) {
      param_4[iVar9 + 1] =
           (uchar)*(undefined4 *)
                   (*(int *)(DAT_00093eb8 + 0x93e1c) +
                   *(int *)(DAT_00093eb4 + 0x93e14 + (char)cVar2 * 4) * 8);
    }
    else if (*(int *)(*(int *)(DAT_00093ec4 + 0x93dee) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_00093ecc + 0x93e06,0x18f5,DAT_00093ec8 + 0x93dfe);
    }
    if (uVar7 != 0) {
      uVar6 = 0;
      uVar5 = (uint)(byte)param_1[(uint)bVar1 * 3 + 2];
      do {
        if (*(uint *)(*(int *)(iVar8 + param_6 * 4) + 0x568 + uVar6 * 4) == uVar5) {
          if ((uVar5 < 8) && ((0xfbU >> uVar5 & 1) != 0)) {
            param_4[iVar9 + 2] =
                 (uchar)*(undefined4 *)
                         (*(int *)(DAT_00093ec0 + 0x93e9c) +
                         *(int *)(DAT_00093ebc + 0x93e94 + (char)param_1[(uint)bVar1 * 3 + 2] * 4) *
                         8);
          }
          else if (*(int *)(*(int *)(DAT_00093ed0 + 0x93e6e) + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_00093ed8 + 0x93e88,0x18f5,DAT_00093ed4 + 0x93e80);
          }
          goto LAB_00093e4e;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    param_4[iVar9 + 2] = '\0';
LAB_00093e4e:
    uVar10 = uVar10 + 1;
    if (param_2 <= uVar10) {
      return;
    }
    iVar4 = *(int *)(iVar8 + param_6 * 4);
    iVar9 = iVar9 + 3;
  } while( true );
}

