
/* qcamera::QCameraParameters::setLiveSnapshotSize(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setLiveSnapshotSize(QCameraParameters *this,QCameraParameters *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *__s1;
  int iVar6;
  char **ppcVar7;
  uint uVar8;
  undefined8 *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  int local_94;
  char *local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined4 uStack64;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined8 uStack52;
  int local_28;
  
  piVar1 = *(int **)(DAT_000df9b0 + 0xdf6d0);
  local_28 = *piVar1;
  property_get(DAT_000df9b8 + 0xdf6e6,&local_88,*(undefined4 *)(DAT_000df9b4 + 0xdf6dc));
  iVar2 = atoi((char *)&local_88);
  ppcVar7 = (char **)(this + 0x270);
  piVar10 = (int *)(this + 0x274);
  android::CameraParameters::getPictureSize((CameraParameters *)param_1,(int *)ppcVar7,piVar10);
  iVar13 = *(int *)(this + 0x1d4);
  uVar3 = *(uint *)(iVar13 + 0xaf0);
  android::CameraParameters::getVideoSize((CameraParameters *)this,(int *)&local_90,&local_8c);
  iVar13 = iVar13 + 0xaf4;
  if ((0xeff < (int)local_90) || (0x86f < local_8c)) {
    local_90 = (char *)0x0;
    local_8c = 0;
    android::CameraParameters::getVideoSize((CameraParameters *)this,(int *)&local_90,&local_8c);
    if (((int)local_90 < *(int *)(this + 0x270)) || (local_8c < *piVar10)) {
      *ppcVar7 = local_90;
      *piVar10 = local_8c;
    }
  }
  pcVar4 = (char *)android::CameraParameters::get((char *)param_1);
  pcVar5 = (char *)android::CameraParameters::get((char *)param_1);
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  if ((__s1 == (char *)0x0) || (iVar6 = strcmp(__s1,*(char **)(DAT_000df9c8 + 0xdf794)), iVar6 != 0)
     ) {
    uVar14 = 0;
    if (pcVar5 != (char *)0x0) goto LAB_000df7ba;
LAB_000df864:
    if (((pcVar4 != (char *)0x0) &&
        (iVar6 = strcmp(pcVar4,*(char **)(DAT_000df9f4 + 0xdf86e)), iVar6 != 0)) &&
       (iVar6 = strcmp(*(char **)(DAT_000df9f8 + 0xdf880),pcVar4), iVar6 != 0)) {
      iVar6 = strcmp(*(char **)(DAT_000dfbf4 + 0xdf88e),pcVar4);
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = strcmp(*(char **)(DAT_000dfbf8 + 0xdf89c),pcVar4);
        if (iVar6 == 0) {
          iVar6 = 2;
        }
        else {
          iVar6 = strcmp(*(char **)(DAT_000dfbfc + 0xdf8aa),pcVar4);
          if (iVar6 == 0) {
            iVar6 = 3;
          }
          else {
            iVar6 = strcmp(*(char **)(DAT_000dfc00 + 0xdf8b8),pcVar4);
            if (iVar6 == 0) {
              iVar6 = 4;
            }
            else {
              iVar6 = strcmp(*(char **)(DAT_000dfc04 + 0xdf8c6),pcVar4);
              if (iVar6 == 0) {
                iVar6 = 5;
              }
              else {
                iVar6 = strcmp(*(char **)(DAT_000dfc40 + 0xdf8d4),pcVar4);
                if (iVar6 == 0) {
                  iVar6 = 6;
                }
                else {
                  iVar6 = strcmp(*(char **)(DAT_000dfc44 + 0xdf8e4),pcVar4);
                  if (iVar6 == 0) {
                    iVar6 = 7;
                  }
                  else {
                    iVar6 = strcmp(*(char **)(DAT_000dfc48 + 0xdf8f4),pcVar4);
                    if (iVar6 != 0) goto LAB_000df8fa;
                    iVar6 = 8;
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = *(uint *)(*(int *)(this + 0x1d4) + 0xd78);
      if (uVar8 != 0) {
        uVar12 = *(uint *)(*(int *)(DAT_000dfc14 + 0xdf986) + iVar6 * 8 + 4);
        iVar6 = *(int *)(this + 0x1d4) + 0xec8;
        uVar11 = 0;
        do {
          if (*(uint *)(iVar6 + -0x14c) == uVar12) goto LAB_000df9fc;
          uVar11 = uVar11 + 1;
          iVar6 = iVar6 + 0x28c;
        } while (uVar11 < uVar8);
      }
LAB_000df9aa:
      uVar12 = 0;
      iVar6 = iVar13;
      goto LAB_000dfa02;
    }
  }
  else {
    uVar14 = 1;
    uVar3 = *(uint *)(*(int *)(this + 0x1d4) + 0xc34);
    iVar13 = *(int *)(this + 0x1d4) + 0xc38;
    if (pcVar5 == (char *)0x0) goto LAB_000df864;
LAB_000df7ba:
    iVar6 = strcmp(pcVar5,*(char **)(DAT_000df9cc + 0xdf7c0));
    if (iVar6 == 0) goto LAB_000df864;
    iVar6 = strcmp(*(char **)(DAT_000df9d0 + 0xdf7d2),pcVar5);
    if (iVar6 != 0) {
      iVar6 = strcmp(*(char **)(DAT_000df9d4 + 0xdf7e4),pcVar5);
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = strcmp(*(char **)(DAT_000df9d8 + 0xdf7f6),pcVar5);
        if (iVar6 == 0) {
          iVar6 = 2;
        }
        else {
          iVar6 = strcmp(*(char **)(DAT_000df9dc + 0xdf808),pcVar5);
          if (iVar6 == 0) {
            iVar6 = 3;
          }
          else {
            iVar6 = strcmp(*(char **)(DAT_000df9e0 + 0xdf818),pcVar5);
            if (iVar6 == 0) {
              iVar6 = 4;
            }
            else {
              iVar6 = strcmp(*(char **)(DAT_000df9e4 + 0xdf828),pcVar5);
              if (iVar6 == 0) {
                iVar6 = 5;
              }
              else {
                iVar6 = strcmp(*(char **)(DAT_000df9e8 + 0xdf838),pcVar5);
                if (iVar6 == 0) {
                  iVar6 = 6;
                }
                else {
                  iVar6 = strcmp(*(char **)(DAT_000df9ec + 0xdf848),pcVar5);
                  if (iVar6 == 0) {
                    iVar6 = 7;
                  }
                  else {
                    iVar6 = strcmp(*(char **)(DAT_000df9f0 + 0xdf858),pcVar5);
                    if (iVar6 != 0) goto LAB_000df8fa;
                    iVar6 = 8;
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = *(uint *)(*(int *)(this + 0x1d4) + 0xd78);
      if (uVar8 != 0) {
        uVar12 = *(uint *)(*(int *)(DAT_000dfc10 + 0xdf942) + iVar6 * 8 + 4);
        iVar6 = *(int *)(this + 0x1d4) + 0xec8;
        uVar11 = 0;
        do {
          if (*(uint *)(iVar6 + -0x14c) == uVar12) goto LAB_000df9fc;
          uVar11 = uVar11 + 1;
          iVar6 = iVar6 + 0x28c;
        } while (uVar11 < uVar8);
      }
      goto LAB_000df9aa;
    }
  }
LAB_000df8fa:
  uVar12 = 0;
  iVar6 = iVar13;
LAB_000dfa02:
  uVar8 = uVar12;
  if (uVar12 != 0) {
    uVar8 = 1;
  }
  if ((0 < iVar2 | uVar8 | uVar14) == 1) {
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        if ((*ppcVar7 == *(char **)(iVar6 + uVar8 * 8)) &&
           (*piVar10 == *(int *)(iVar6 + uVar8 * 8 + 4))) goto LAB_000dfafc;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
    local_94 = 0;
    local_90 = (char *)0x0;
    android::CameraParameters::getPreviewSize
              ((CameraParameters *)param_1,(int *)&local_90,&local_94);
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        puVar9 = (undefined8 *)(iVar6 + uVar8 * 8);
        uVar16 = *puVar9;
        if (ABS((double)(longlong)(int)local_90 / (double)(longlong)local_94 -
                (double)(longlong)(int)uVar16 / (double)(longlong)(int)((ulonglong)uVar16 >> 0x20))
            <= DAT_000dfc08) {
          uVar15 = *(undefined4 *)((int)puVar9 + 4);
          *ppcVar7 = *(char **)(iVar6 + uVar8 * 8);
          *(undefined4 *)(this + 0x274) = uVar15;
          goto LAB_000dfafc;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
    uVar3 = count_leading_zeroes(uVar12);
    if ((~uVar14 & uVar3 >> 5) == 0) {
      if (*(int *)(*(int *)(DAT_000dfc18 + 0xdfaae) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000dfc20 + 0xdfac6,0x873,DAT_000dfc1c + 0xdfabe);
      }
      android::CameraParameters::getVideoSize((CameraParameters *)param_1,(int *)ppcVar7,piVar10);
      if (((int)*ppcVar7 < (int)local_90) && (*piVar10 < local_94)) {
        *ppcVar7 = local_90;
        *piVar10 = local_94;
      }
    }
  }
LAB_000dfafc:
  local_88 = 0;
  uStack128 = 0;
  uStack56 = 0;
  uStack52 = 0;
  local_48 = 0;
  uStack64 = 0;
  local_3c = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  uVar15 = property_get(DAT_000dfc24 + 0xdfb38,&local_88,DAT_000dfc28 + 0xdfb3a);
  iVar2 = __strlen_chk(uVar15,&local_88,0x5c);
  if (iVar2 != 0) {
    pcVar5 = (char *)0x0;
    local_90 = (char *)0x0;
    pcVar4 = strtok_r((char *)&local_88,(char *)(DAT_000dfc2c + 0xdfb54),&local_90);
    if (pcVar4 != (char *)0x0) {
      pcVar5 = (char *)atoi(pcVar4);
    }
    pcVar4 = strtok_r((char *)0x0,(char *)(DAT_000dfc30 + 0xdfb68),&local_90);
    if ((pcVar4 != (char *)0x0) && (iVar2 = atoi(pcVar4), pcVar5 != (char *)0x0 && iVar2 != 0)) {
      iVar13 = *(int *)(this + 0x1d4);
      if (*(uint *)(iVar13 + 0x5c8) != 0) {
        uVar3 = 0;
        do {
          if ((pcVar5 == *(char **)(iVar13 + 0x5cc + uVar3 * 8)) &&
             (iVar2 == *(int *)(iVar13 + 0x5d0 + uVar3 * 8))) {
            *ppcVar7 = pcVar5;
            *piVar10 = iVar2;
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar13 + 0x5c8));
      }
    }
  }
  if (*(int *)(*(int *)(DAT_000dfc34 + 0xdfb7e) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000dfc3c + 0xdfba2,0x897,DAT_000dfc38 + 0xdfb94,*ppcVar7,*piVar10);
  }
  if (*piVar1 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_000df9fc:
  uVar3 = (uint)*(byte *)(iVar6 + -4);
  goto LAB_000dfa02;
}

