
/* qcamera::QCamera2HardwareInterface::processFaceDetectionResult(cam_faces_data_t*) */

int __thiscall
qcamera::QCamera2HardwareInterface::processFaceDetectionResult
          (QCamera2HardwareInterface *this,cam_faces_data_t *param_1)

{
  cam_faces_data_t cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint **ppuVar5;
  uint extraout_r1;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  size_t sVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_44;
  uint local_40;
  int local_3c;
  
  piVar10 = *(int **)(DAT_000bceec + 0xbcb7a);
  local_3c = *piVar10;
  iVar4 = QCameraParametersIntf::isFaceDetectionEnabled((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar4 == 0) {
    if (*(int *)(*(int *)(DAT_000bcefc + 0xbcbdc) + 0x28) != 0) {
      uVar7 = 0x2852;
      iVar4 = DAT_000bcf00 + 0xbcbec;
      iVar6 = DAT_000bcf04 + 0xbcbf4;
LAB_000bcbf2:
      mm_camera_debug_log(1,3,iVar6,uVar7,iVar4);
    }
  }
  else if ((((*(int *)(this + 0x4c0) == 0) ||
            ((uVar16 = *(uint *)(param_1 + 0xf8), uVar16 == 0 &&
             (-1 < (int)((uint)(byte)this[0x4b5] << 0x1d))))) ||
           ((param_1[4] == (cam_faces_data_t)0x0 && (*(int *)(this + 0x1dc8) == 0)))) ||
          ((uVar16 == 1 && (-1 < (int)((uint)(byte)this[0x4b5] << 0x1a))))) {
    if (*(int *)(*(int *)(DAT_000bcef0 + 0xbcbbe) + 0x28) != 0) {
      uVar7 = 0x285f;
      iVar4 = DAT_000bcef4 + 0xbcbce;
      iVar6 = DAT_000bcef8 + 0xbcbd6;
      goto LAB_000bcbf2;
    }
  }
  else if ((uVar16 != 0) || (param_1[0x104] != (cam_faces_data_t)0x0)) {
    QCameraParametersIntf::getStreamDimension
              ((QCameraParametersIntf *)(this + 0x4ac),1,(cam_dimension_t *)&local_44);
    bVar19 = local_44 == 1;
    uVar15 = extraout_r1;
    if (0 < (int)local_44) {
      uVar15 = local_40;
    }
    uVar8 = local_44 - 1;
    if ((int)local_44 >= 1) {
      bVar19 = uVar15 == 0;
      uVar8 = uVar15;
    }
    if (bVar19 || (int)uVar8 < 0 != ((int)local_44 < 1 && SBORROW4(local_44,1))) {
      if (*(int *)(*(int *)(DAT_000bcf08 + 0xbcc3c) + 0x20) == 0) {
        iVar4 = -0x80000000;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000bcf10 + 0xbcc5c,0x286c,DAT_000bcf0c + 0xbcc4e,local_44,
                            local_40);
        iVar4 = -0x80000000;
      }
      goto LAB_000bcbf8;
    }
    uVar15 = 0;
    sVar11 = 0;
    if (uVar16 == 0) {
      sVar11 = 0x3c8;
    }
    else if (uVar16 == 1) {
      uVar15 = (uint)(byte)param_1[4];
      if (uVar15 != 0) {
        uVar15 = uVar15 * 0x60 + 8;
      }
      sVar11 = uVar15 + 8;
    }
    ppuVar5 = (uint **)(**(code **)(this + 0x4c8))
                                 (0xffffffff,sVar11,1,*(undefined4 *)(this + 0x4d0));
    if (ppuVar5 == (uint **)0x0) {
      if (*(int *)(*(int *)(DAT_000bd050 + 0xbcce4) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000bd058 + 0xbccfc,0x288e,DAT_000bd054 + 0xbccf4);
      }
      iVar4 = -0xc;
      goto LAB_000bcbf8;
    }
    puVar12 = *ppuVar5;
    __aeabi_memclr8(puVar12,sVar11);
    if (uVar16 == 0) {
      *(uint *)(this + 0x1dc8) = (uint)(byte)param_1[4];
LAB_000bcd1a:
      __aeabi_memcpy8(this + 0xac8,param_1,0x1110);
      uVar15 = (uint)(byte)param_1[4];
      *puVar12 = uVar15;
      puVar12[1] = (uint)(puVar12 + 2);
      iVar6 = *(int *)(DAT_000bd06c + 0xbcd3a);
      if (*(int *)(iVar6 + 0x30) != 0) {
        mm_camera_debug_log(1,5,DAT_000bd074 + 0xbcd6e,0x28bf,DAT_000bd070 + 0xbcd5a,
                            *(undefined4 *)param_1,param_1[4],local_44,local_40);
        uVar15 = *puVar12;
      }
      uVar3 = DAT_000bd048;
      uVar2 = DAT_000bd040;
      if (0 < (int)uVar15) {
        iVar4 = 0;
        iVar17 = 0;
        do {
          uVar18 = *(uint *)(param_1 + iVar4 + 8);
          puVar12[iVar4 + 7] = uVar18;
          cVar1 = param_1[iVar4 + 0xc];
          puVar12[iVar4 + 6] = (int)(char)cVar1;
          uVar15 = (uint)(*(int *)(param_1 + iVar4 + 0x10) * 2000) / local_44 - 1000;
          puVar12[iVar4 + 2] = uVar15;
          uVar8 = (uint)(*(int *)(param_1 + iVar4 + 0x14) * 2000) / local_40 - 1000;
          puVar12[iVar4 + 3] = uVar8;
          uVar13 = (uint)(*(int *)(param_1 + iVar4 + 0x18) * 2000) / local_44 + uVar15;
          puVar12[iVar4 + 4] = uVar13;
          uVar9 = (uint)(*(int *)(param_1 + iVar4 + 0x1c) * 2000) / local_40 + uVar8;
          puVar12[iVar4 + 5] = uVar9;
          if (*(int *)(iVar6 + 0x30) != 0) {
            mm_camera_debug_log(1,5,DAT_000bd07c + 0xbce36,0x28e6,DAT_000bd078 + 0xbce1a,
                                *(undefined4 *)param_1,iVar17,uVar18,(int)(char)cVar1,
                                *(undefined4 *)(param_1 + iVar4 + 0x10),
                                *(undefined4 *)(param_1 + iVar4 + 0x14),
                                *(undefined4 *)(param_1 + iVar4 + 0x18),
                                *(undefined4 *)(param_1 + iVar4 + 0x1c),uVar15,uVar8,uVar13,uVar9);
          }
          if (param_1[0x259] == (cam_faces_data_t)0x0) {
            puVar12[iVar4 + 0xc] = 0xfffff830;
            puVar12[iVar4 + 0xd] = 0xfffff830;
            *(undefined8 *)(puVar12 + iVar4 + 8) = uVar2;
            *(undefined8 *)(puVar12 + iVar4 + 10) = uVar3;
          }
          else {
            uVar15 = (uint)(*(int *)(param_1 + iVar4 + 0x25c) * 2000) / local_44 - 1000;
            puVar12[iVar4 + 8] = uVar15;
            uVar8 = (uint)(*(int *)(param_1 + iVar4 + 0x260) * 2000) / local_40 - 1000;
            puVar12[iVar4 + 9] = uVar8;
            uVar9 = (uint)(*(int *)(param_1 + iVar4 + 0x264) * 2000) / local_44 - 1000;
            puVar12[iVar4 + 10] = uVar9;
            uVar13 = (uint)(*(int *)(param_1 + iVar4 + 0x268) * 2000) / local_40 - 1000;
            puVar12[iVar4 + 0xb] = uVar13;
            uVar14 = (uint)(*(int *)(param_1 + iVar4 + 0x26c) * 2000) / local_44 - 1000;
            puVar12[iVar4 + 0xc] = uVar14;
            uVar18 = (uint)(*(int *)(param_1 + iVar4 + 0x270) * 2000) / local_40 - 1000;
            puVar12[iVar4 + 0xd] = uVar18;
            if (*(int *)(iVar6 + 0x30) != 0) {
              mm_camera_debug_log(1,5,DAT_000bd084 + 0xbcee6,0x2907,DAT_000bd080 + 0xbced2,
                                  *(undefined4 *)param_1,iVar17,uVar15,uVar8,uVar9,uVar13,uVar14,
                                  uVar18);
            }
          }
          iVar4 = iVar4 + 0x18;
          iVar17 = iVar17 + 1;
        } while (iVar17 < (int)*puVar12);
      }
      local_78 = 0;
      local_50 = 0;
      local_68 = 0;
      local_80 = 1;
      if (uVar16 < 2) {
        uVar7 = 0x2000;
        if (uVar16 == 0) {
          uVar7 = 0x400;
        }
        local_80 = CONCAT44(uVar7,1);
      }
      local_60 = CONCAT44(ppuVar5,puVar12);
      local_70 = ZEXT48(ppuVar5);
      local_58 = CONCAT44(*(undefined4 *)(DAT_000bd088 + 0xbcf84),this);
      iVar4 = QCameraCbNotifier::notifyCallback
                        ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_80);
      if (iVar4 == 0) goto LAB_000bcbf8;
      if (*(int *)(iVar6 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000bd090 + 0xbcfb4,0x2961,DAT_000bd08c + 0xbcfac);
      }
      puVar12 = ppuVar5[3];
    }
    else {
      if (uVar16 != 1) {
        puVar12 = (uint *)0x0;
        goto LAB_000bcd1a;
      }
      *puVar12 = 2;
      puVar12[1] = uVar15;
      if (uVar15 != 0) {
        puVar12 = puVar12 + 2;
        goto LAB_000bcd1a;
      }
      local_50 = 0;
      local_68 = 0;
      local_78 = 0;
      local_80 = 0x200000000001;
      local_60 = ZEXT48(ppuVar5) << 0x20;
      local_70 = ZEXT48(ppuVar5);
      local_58 = CONCAT44(*(undefined4 *)(DAT_000bd05c + 0xbcff4),this);
      iVar4 = QCameraCbNotifier::notifyCallback
                        ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_80);
      if (iVar4 == 0) goto LAB_000bcbf8;
      if (*(int *)(*(int *)(DAT_000bd060 + 0xbd00c) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000bd068 + 0xbd024,0x28ab,DAT_000bd064 + 0xbd01c);
      }
      puVar12 = ppuVar5[3];
    }
    (*(code *)puVar12)(ppuVar5);
    goto LAB_000bcbf8;
  }
  iVar4 = 0;
LAB_000bcbf8:
  if (*piVar10 == local_3c) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

