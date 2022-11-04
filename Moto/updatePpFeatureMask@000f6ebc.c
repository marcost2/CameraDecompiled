
/* WARNING: Removing unreachable block (ram,0x000f7268) */
/* qcamera::QCameraParameters::updatePpFeatureMask(cam_stream_type_t) */

void __thiscall
qcamera::QCameraParameters::updatePpFeatureMask(QCameraParameters *this,cam_stream_type_t param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  QCameraParameters QVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  QCameraParameters *local_c4;
  cam_dimension_t acStack192 [8];
  uint local_b8;
  uint local_b4 [35];
  int local_28;
  
  piVar9 = *(int **)(DAT_000f71b8 + 0xf6ece);
  local_28 = *piVar9;
  if (0xb < (int)param_1) {
    if (*(int *)(*(int *)(DAT_000f71bc + 0xf6ede) + 0x20) == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000f71c4 + 0xf6efa,0x3a86,DAT_000f71c0 + 0xf6ef0,param_1);
      uVar2 = 0xffffffff;
    }
    goto LAB_000f7222;
  }
  if ((this[0x2d8] == (QCameraParameters)0x0) ||
     ((param_1 != 4 &&
      (((param_1 != 1 || (this[0x213] == (QCameraParameters)0x0)) ||
       (iVar3 = isPreviewSeeMoreRequired(this), iVar3 == 0)))))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x100000;
  }
  if (this[0x2da] == (QCameraParameters)0x0) {
LAB_000f6f52:
    if ((param_1 == 3) && (this[0x213] != (QCameraParameters)0x0)) {
      android::CameraParameters::getVideoSize
                ((CameraParameters *)this,(int *)&local_b8,(int *)local_b4);
      bVar8 = 1;
      if (((int)local_b8 < 0xf00) && ((int)local_b4[0] < 0x870)) goto LAB_000f6f86;
      goto LAB_000f6fa2;
    }
    if (param_1 != 3) goto LAB_000f6f9e;
LAB_000f6f86:
    bVar8 = 1;
    if (this[0x801] != (QCameraParameters)0x0) goto LAB_000f6fa2;
    uVar11 = 0;
  }
  else {
    if (param_1 == 4) {
LAB_000f6f4e:
      uVar7 = uVar7 | 0x40000000;
      goto LAB_000f6f52;
    }
    if (param_1 != 1) goto LAB_000f6f52;
    if ((this[0x213] != (QCameraParameters)0x0) &&
       (iVar3 = isPreviewSeeMoreRequired(this), iVar3 != 0)) goto LAB_000f6f4e;
LAB_000f6f9e:
    bVar8 = 0;
LAB_000f6fa2:
    if ((int)((uint)(byte)this[0x308] << 0x18) < 0) {
      if ((this[0x2cb] != (QCameraParameters)0x0) &&
         (uVar11 = *(uint *)(this + 0x37c), -1 < (int)uVar11)) {
        bVar1 = *(byte *)(*(int *)(this + 0x1d4) + 0x3856);
        if (*(int *)(*(int *)(DAT_000f7274 + 0xf6fd4) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000f727c + 0xf6ff2,0x27c0,DAT_000f7278 + 0xf6fe4,uVar11,
                              (uint)bVar1);
        }
        if (bVar1 <= uVar11) goto LAB_000f7000;
      }
      uVar7 = uVar7 | 0x80;
    }
LAB_000f7000:
    uVar7 = uVar7 | *(uint *)(this + 0x308) & 0x800;
    if (this[0x232] != (QCameraParameters)0x0) {
      uVar7 = uVar7 | 2;
    }
    iVar3 = getFlipMode(this,param_1);
    if (0 < iVar3) {
      uVar7 = uVar7 | 0x10;
    }
    uVar11 = count_leading_zeroes(param_1 - 4);
    uVar11 = uVar11 >> 5;
    if (((param_1 - 4 == 0) && (this[0x234] != (QCameraParameters)0x0)) ||
       ((param_1 == 1 && (this[0x233] != (QCameraParameters)0x0)))) {
      uVar7 = uVar7 | 0x20000;
    }
  }
  local_c4 = this + 0x213;
  uVar10 = 0;
  uVar4 = (uint)(byte)this[0x799];
  if (uVar4 != 0) {
    uVar4 = 1;
  }
  uVar6 = count_leading_zeroes((param_1 | 2) - 3);
  if ((uVar6 >> 5 & uVar4) != 0) {
    uVar7 = uVar7 | 0x2000000;
  }
  if (*(int *)(this + 900) == 0) {
joined_r0x000f708a:
    if (bVar8 != 0) {
LAB_000f7098:
      if (this[0x235] != (QCameraParameters)0x0) {
        if ((*local_c4 != (QCameraParameters)0x0) || (this[0x210] != (QCameraParameters)0x0)) {
          uVar7 = uVar7 | 0x20000;
        }
        bVar8 = 1;
      }
    }
  }
  else {
    if ((param_1 < 6) && ((1 << (param_1 & 0xff) & 0x36U) != 0)) {
LAB_000f707a:
      if ((int)((uint)(byte)this[0x30b] << 0x1d) < 0) {
        uVar7 = uVar7 | 0x4000000;
      }
      else {
        uVar7 = uVar7 | 0x1000000;
      }
      goto joined_r0x000f708a;
    }
    if (bVar8 != 0) {
      if ((*local_c4 != (QCameraParameters)0x0) &&
         ((android::CameraParameters::getVideoSize
                     ((CameraParameters *)this,(int *)&local_b8,(int *)local_b4),
          0xeff < (int)local_b8 || (0x86f < (int)local_b4[0])))) goto LAB_000f707a;
      bVar8 = 1;
      goto LAB_000f7098;
    }
    bVar8 = 0;
  }
  if (((this[0xd44] == (QCameraParameters)0x0) &&
      (*(char *)(*(int *)(this + 0x1d4) + 0x5c4) != '\0')) && (param_1 == 4 || param_1 == 1)) {
    uVar10 = 0x10;
  }
  __aeabi_memclr8(&local_b8,0x90);
  getStreamRotation(this,param_1,(cam_pp_feature_config_t *)&local_b8,acStack192);
  uVar7 = uVar7 | local_b8;
  local_b4[0] = local_b4[0] | uVar10;
  if (*(int *)(this + 0x1ec) == 1) {
    if (((param_1 == 0xb || param_1 == 1) && (*(int *)(this + 500) == 1)) &&
       (*(int *)(*(int *)(this + 0x1d4) + 0x3e9c) == 1)) {
      if (*(int *)(*(int *)(DAT_000f7280 + 0xf7104) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000f7288 + 0xf711c,0x3ae9,DAT_000f7284 + 0xf7114);
      }
      uVar7 = 0;
      local_b4[0] = 0;
    }
    if ((param_1 == 0xb) && (this[0x79a] != (QCameraParameters)0x0)) {
      uVar7 = uVar7 | 0x800000;
    }
    else {
      uVar7 = uVar7 & 0xff7fffff;
    }
  }
  if (*(uint *)(*(int *)(this + 0x1d4) + 0x33e0) < 4) {
    if ((param_1 | 4) == 5) {
      local_b4[0] = local_b4[0] | 1;
      goto joined_r0x000f71ae;
    }
    if (uVar11 != 0) {
      iVar3 = *(int *)(this + 0x208);
      if (iVar3 != 5) {
        local_b4[0] = local_b4[0] | 1;
      }
      goto LAB_000f71da;
    }
  }
  else {
    if ((((*(uint *)(*(int *)(this + 0x1d4) + 0x33e0) == 7) && (param_1 < 0xc)) &&
        ((1 << (param_1 & 0xff) & 0x812U) != 0)) &&
       (local_b4[0] = local_b4[0] | 1, *(int *)(*(int *)(DAT_000f728c + 0xf7190) + 0x28) != 0)) {
      mm_camera_debug_log(1,3,DAT_000f7294 + 0xf71a8,0x3b0c,DAT_000f7290 + 0xf71a0);
    }
joined_r0x000f71ae:
    if (uVar11 != 0) {
      iVar3 = *(int *)(this + 0x208);
LAB_000f71da:
      if (iVar3 == 5) {
        local_b4[0] = local_b4[0] | 4;
      }
    }
  }
  QVar5 = this[0x18];
  if (QVar5 != (QCameraParameters)0x0) {
    QVar5 = (QCameraParameters)0x1;
  }
  if ((bVar8 & (byte)QVar5) != 0) {
    local_b4[0] = local_b4[0] | 0x10;
  }
  *(uint *)(this + param_1 * 8 + 0x310) = uVar7;
  *(uint *)(this + param_1 * 8 + 0x314) = local_b4[0];
  if (*(int *)(*(int *)(DAT_000f7298 + 0xf7202) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f72a0 + 0xf721e,0x3b1f,DAT_000f729c + 0xf7212,param_1,uVar7,
                        local_b4[0]);
  }
  uVar2 = 0;
LAB_000f7222:
  if (*piVar9 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

