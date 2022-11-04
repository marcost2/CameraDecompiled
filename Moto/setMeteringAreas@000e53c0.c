
/* qcamera::QCameraParameters::setMeteringAreas(char const*) */

void __thiscall qcamera::QCameraParameters::setMeteringAreas(QCameraParameters *this,char *param_1)

{
  ushort uVar1;
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
  int iVar17;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  int local_44;
  
  piVar12 = *(int **)(DAT_000e574c + 0xe53d6);
  local_44 = *piVar12;
  if (param_1 != (char *)0x0) {
    iVar9 = *(int *)(this + 0x1d4);
    iVar10 = 0x2f83;
    uVar4 = (uint)*(byte *)(iVar9 + 0x2f83);
    if (uVar4 != 0) {
      __ptr = (int *)malloc(uVar4 * 0x14);
      if (__ptr == (int *)0x0) {
        if (*(int *)(*(int *)(DAT_000e57a4 + 0xe5492) + 0x20) == 0) {
          uVar8 = 0xfffffff4;
        }
        else {
          mm_camera_debug_log(1,1,DAT_000e57ac + 0xe54ae,0x2639,DAT_000e57a8 + 0xe54a6);
          uVar8 = 0xfffffff4;
        }
        goto LAB_000e5586;
      }
      __aeabi_memclr8(__ptr,(uint)*(byte *)(iVar9 + 0x2f83) * 0x14);
      local_cc = 0;
      iVar5 = parseCameraAreaString
                        (this,param_1,(uint)*(byte *)(*(int *)(this + 0x1d4) + 0x2f83),
                         (cam_area_t *)__ptr,&local_cc);
      iVar9 = local_cc;
      if (iVar5 < 0) {
        if (*(int *)(*(int *)(DAT_000e57b0 + 0xe54bc) + 0x20) != 0) {
          uVar8 = 0x2642;
          iVar10 = DAT_000e57b4 + 0xe54ce;
          iVar9 = DAT_000e57b8 + 0xe54d8;
LAB_000e5578:
          mm_camera_debug_log(1,1,iVar9,uVar8,iVar10,param_1);
        }
LAB_000e557c:
        free(__ptr);
      }
      else {
        if (local_cc == 1) {
          if ((((*__ptr == 0) && (__ptr[1] == 0)) && (__ptr[2] == 0)) &&
             ((__ptr[3] == 0 && (__ptr[4] == 0)))) {
            updateParamEntry(this,*(char **)(DAT_000e57bc + 0xe5460),param_1);
          }
          else {
LAB_000e54de:
            piVar6 = __ptr + 2;
            iVar5 = 0;
            do {
              iVar11 = piVar6[-2];
              if (iVar11 + 1000 < 0 != SCARRY4(iVar11,1000)) {
LAB_000e555a:
                if (*(int *)(*(int *)(DAT_000e57c4 + 0xe5560) + 0x20) == 0) goto LAB_000e557c;
                uVar8 = 0x2648;
                iVar10 = DAT_000e57c8 + 0xe5570;
                iVar9 = DAT_000e57cc + 0xe557a;
                goto LAB_000e5578;
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
              goto LAB_000e555a;
              iVar5 = iVar5 + 1;
              piVar6 = piVar6 + 5;
            } while (iVar5 < local_cc);
            updateParamEntry(this,*(char **)(DAT_000e57d0 + 0xe5530),param_1);
            if (iVar9 != 1) goto LAB_000e55b2;
          }
          if ((((*__ptr == 0) && (__ptr[1] == 0)) && (__ptr[2] == 0)) &&
             ((__ptr[3] == 0 && (__ptr[4] == 0)))) {
            iVar9 = 0;
            local_cc = 0;
          }
          else {
            iVar9 = 1;
          }
        }
        else {
          if (0 < local_cc) goto LAB_000e54de;
          updateParamEntry(this,*(char **)(DAT_000e57c0 + 0xe55ac),param_1);
        }
LAB_000e55b2:
        android::CameraParameters::getPreviewSize((CameraParameters *)this,&local_d0,&local_d4);
        dVar3 = DAT_000e5790;
        dVar2 = DAT_000e5788;
        local_68 = 0;
        uStack96 = 0;
        local_78 = 0;
        uStack112 = 0;
        local_88 = 0;
        uStack128 = 0;
        local_98 = 0;
        uStack144 = 0;
        local_a8 = 0;
        uStack160 = 0;
        local_b8 = 0;
        uStack176 = 0;
        local_c0 = 0;
        local_58 = 0;
        uStack80 = 0;
        if (iVar9 < 1) {
          local_c8 = 0;
        }
        else {
          iVar5 = 0;
          iVar11 = 0x10;
          iVar14 = 0;
          local_c8 = 0x100000001;
          iVar13 = *(int *)(DAT_000e57d4 + 0xe5634);
          iVar10 = DAT_000e57d8 + 0xe563c;
          do {
            if (*(int *)(iVar13 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000e57dc + 0xe5670,0x2665,iVar10,iVar14,
                                  *(undefined4 *)((int)__ptr + iVar5 * 5 + 4),
                                  *(undefined4 *)((int)__ptr + iVar11 + -0x10),
                                  *(undefined4 *)((int)__ptr + iVar5 * 5 + 8),
                                  *(undefined4 *)((int)__ptr + iVar5 * 5 + 0xc));
            }
            iVar14 = iVar14 + 1;
            iVar17 = *(int *)((int)__ptr + iVar5 * 5 + 0xc);
            *(int *)((int)&local_c0 + iVar5 * 2) =
                 SUB84(ROUND((((double)(longlong)*(int *)((int)__ptr + iVar11 + -0x10) +
                               (double)(longlong)*(int *)((int)__ptr + iVar5 * 5 + 8) * 0.5 + dVar2)
                             * (double)(longlong)local_d0) / dVar3),0);
            uVar1 = *(ushort *)((int)__ptr + iVar11);
            iVar11 = iVar11 + 0x14;
            *(int *)((int)&local_c0 + iVar5 * 2 + 4) =
                 SUB84(ROUND((((double)(longlong)*(int *)((int)__ptr + iVar5 * 5 + 4) +
                               (double)(longlong)iVar17 * 0.5 + dVar2) * (double)(longlong)local_d4)
                             / dVar3),0);
            *(uint *)((int)&uStack112 + iVar5) = (uint)uVar1;
            iVar5 = iVar5 + 4;
          } while (iVar9 != iVar14);
        }
        free(__ptr);
        iVar10 = *(int *)(this + 0x1e0);
        if (iVar10 == 0) {
          uVar8 = 0;
        }
        else {
          if ((*(int *)(this + 0xd30) == 1) &&
             (pVar7 = pthread_self(), pVar7 == *(pthread_t *)(this + 0xd34))) {
            __aeabi_memcpy8("/sys/devices/system/cpu/cpu%d/cpufreq/cpuinfo_max_freq" + iVar10 + 0x15
                            ,&local_c8,0x80);
            *(undefined *)(*(int *)(this + 0x1e0) + 0x20) = 1;
            uVar8 = 0;
            goto LAB_000e5586;
          }
          MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
          uVar8 = *(undefined4 *)(this + 0x1e0);
        }
        __android_log_print(6,DAT_000e57e0 + 0xe576e,DAT_000e57e4 + 0xe5770,DAT_000e57e8 + 0xe5772,
                            0x2679,uVar8,0x20);
      }
      uVar8 = 0xffffffea;
      goto LAB_000e5586;
    }
  }
  if (*(int *)(*(int *)(DAT_000e5798 + 0xe546e) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e57a0 + 0xe5486,0x2633,DAT_000e579c + 0xe547e);
  }
  uVar8 = 0;
LAB_000e5586:
  if (*piVar12 == local_44) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

