
/* qcamera::QCameraParameters::setFocusAreas(char const*) */

void __thiscall qcamera::QCameraParameters::setFocusAreas(QCameraParameters *this,char *param_1)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int *__ptr;
  int iVar5;
  int *piVar6;
  pthread_t pVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  int local_11c;
  int local_118;
  int local_114;
  undefined auStack272 [4];
  undefined local_10c;
  undefined4 local_108 [40];
  undefined4 local_68 [11];
  int local_3c;
  
  piVar12 = *(int **)(DAT_000e52c4 + 0xe4f4e);
  local_3c = *piVar12;
  if (param_1 != (char *)0x0) {
    iVar9 = *(int *)(this + 0x1d4);
    iVar10 = 0x2f82;
    uVar4 = (uint)*(byte *)(iVar9 + 0x2f82);
    if (uVar4 != 0) {
      __ptr = (int *)malloc(uVar4 * 0x14);
      if (__ptr == (int *)0x0) {
        if (*(int *)(*(int *)(DAT_000e52e4 + 0xe4ff0) + 0x20) == 0) {
          uVar8 = 0xfffffff4;
        }
        else {
          mm_camera_debug_log(1,1,DAT_000e52ec + 0xe5008,0x25dc,DAT_000e52e8 + 0xe5000);
          uVar8 = 0xfffffff4;
        }
        goto LAB_000e50fe;
      }
      __aeabi_memclr8(__ptr,(uint)*(byte *)(iVar9 + 0x2f82) * 0x14);
      local_114 = 0;
      iVar5 = parseCameraAreaString
                        (this,param_1,(uint)*(byte *)(*(int *)(this + 0x1d4) + 0x2f82),
                         (cam_area_t *)__ptr,&local_114);
      iVar9 = local_114;
      if (iVar5 == 0) {
        if (local_114 == 1) {
          if ((((*__ptr == 0) && (__ptr[1] == 0)) && (__ptr[2] == 0)) &&
             ((__ptr[3] == 0 && (__ptr[4] == 0)))) {
            updateParamEntry(this,*(char **)(DAT_000e52fc + 0xe503c),param_1);
          }
          else {
LAB_000e504e:
            piVar6 = __ptr + 2;
            iVar5 = 0;
            do {
              iVar11 = piVar6[-2];
              if (iVar11 + 1000 < 0 != SCARRY4(iVar11,1000)) {
LAB_000e50d2:
                if (*(int *)(*(int *)(DAT_000e5304 + 0xe50d8) + 0x20) == 0) goto LAB_000e50f4;
                uVar8 = 0x25eb;
                iVar10 = DAT_000e5308 + 0xe50e8;
                iVar9 = DAT_000e530c + 0xe50f2;
                goto LAB_000e50f0;
              }
              iVar13 = piVar6[-1];
              bVar16 = SCARRY4(iVar13,1000);
              bVar15 = iVar13 + 1000 < 0;
              if (bVar15 == bVar16) {
                iVar10 = *piVar6;
                bVar16 = SBORROW4(iVar10,1);
                bVar15 = iVar10 + -1 < 0;
              }
              if (((bVar15 != bVar16) || (1000 < iVar11 + iVar10)) ||
                 ((piVar6[1] < 1 || ((1000 < iVar13 + piVar6[1] || (999 < piVar6[2] - 1U))))))
              goto LAB_000e50d2;
              iVar5 = iVar5 + 1;
              piVar6 = piVar6 + 5;
            } while (iVar5 < local_114);
            updateParamEntry(this,*(char **)(DAT_000e5310 + 0xe50a2),param_1);
            if (iVar9 != 1) goto LAB_000e5126;
          }
          if ((((*__ptr == 0) && (__ptr[1] == 0)) && (__ptr[2] == 0)) &&
             ((__ptr[3] == 0 && (__ptr[4] == 0)))) {
            iVar9 = 0;
            local_114 = 0;
          }
          else {
            iVar9 = 1;
          }
        }
        else {
          if (0 < local_114) goto LAB_000e504e;
          updateParamEntry(this,*(char **)(DAT_000e5300 + 0xe5120),param_1);
        }
LAB_000e5126:
        android::CameraParameters::getPreviewSize((CameraParameters *)this,&local_118,&local_11c);
        __aeabi_memclr8(auStack272,0xd4);
        dVar3 = DAT_000e52d0;
        dVar2 = DAT_000e52c8;
        local_10c = (undefined)iVar9;
        if (0 < iVar9) {
          iVar11 = 0;
          iVar5 = 0x10;
          iVar13 = 0;
          iVar14 = *(int *)(DAT_000e5314 + 0xe5164);
          iVar10 = DAT_000e5318 + 0xe516c;
          do {
            if (*(int *)(iVar14 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000e531c + 0xe51a2,0x2605,iVar10,iVar13,
                                  *(undefined4 *)((int)__ptr + iVar11 * 5 + 4),
                                  *(undefined4 *)((int)__ptr + iVar5 + -0x10),
                                  *(undefined4 *)((int)__ptr + iVar11 * 5 + 8),
                                  *(undefined4 *)((int)__ptr + iVar11 * 5 + 0xc));
            }
            iVar13 = iVar13 + 1;
            local_108[iVar11] =
                 SUB84(ROUND(((double)(longlong)*(int *)((int)__ptr + iVar5 + -0x10) + dVar3) *
                             ((double)(longlong)local_118 / dVar2)),0);
            local_108[iVar11 + 1] =
                 SUB84(ROUND(((double)(longlong)*(int *)((int)__ptr + iVar11 * 5 + 4) + dVar3) *
                             ((double)(longlong)local_11c / dVar2)),0);
            local_108[iVar11 + 2] =
                 SUB84(ROUND(((double)(longlong)local_118 *
                             (double)(longlong)*(int *)((int)__ptr + iVar11 * 5 + 8)) / dVar2),0);
            local_108[iVar11 + 3] =
                 SUB84(ROUND(((double)(longlong)local_11c *
                             (double)(longlong)*(int *)((int)__ptr + iVar11 * 5 + 0xc)) / dVar2),0);
            puVar1 = (undefined4 *)((int)__ptr + iVar5);
            iVar5 = iVar5 + 0x14;
            *(undefined4 *)((int)local_68 + iVar11) = *puVar1;
            iVar11 = iVar11 + 4;
          } while (iVar9 != iVar13);
        }
        free(__ptr);
        iVar10 = *(int *)(this + 0x1e0);
        if (iVar10 == 0) {
          uVar8 = 0;
        }
        else {
          if ((*(int *)(this + 0xd30) == 1) &&
             (pVar7 = pthread_self(), pVar7 == *(pthread_t *)(this + 0xd34))) {
            __aeabi_memcpy8("QBST (%s)[%s] -imgRotation %d" + iVar10 + 0x11,auStack272,0xd4);
            *(undefined *)(*(int *)(this + 0x1e0) + 0x21) = 1;
            uVar8 = 0;
            goto LAB_000e50fe;
          }
          MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
          uVar8 = *(undefined4 *)(this + 0x1e0);
        }
        __android_log_print(6,DAT_000e5320 + 0xe52b2,DAT_000e5324 + 0xe52b4,DAT_000e5328 + 0xe52b6,
                            0x261c,uVar8,0x21);
      }
      else {
        if (*(int *)(*(int *)(DAT_000e52f0 + 0xe4fa8) + 0x20) != 0) {
          uVar8 = 0x25e5;
          iVar10 = DAT_000e52f4 + 0xe4fbc;
          iVar9 = DAT_000e52f8 + 0xe4fc6;
LAB_000e50f0:
          mm_camera_debug_log(1,1,iVar9,uVar8,iVar10,param_1);
        }
LAB_000e50f4:
        free(__ptr);
      }
      uVar8 = 0xffffffea;
      goto LAB_000e50fe;
    }
  }
  if (*(int *)(*(int *)(DAT_000e52d8 + 0xe4fcc) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e52e0 + 0xe4fe4,0x25d6,DAT_000e52dc + 0xe4fdc);
  }
  uVar8 = 0;
LAB_000e50fe:
  if (*piVar12 != local_3c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

