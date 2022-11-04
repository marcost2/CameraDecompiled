
/* qcamera::QCamera3ReprocessChannel::overrideMetadata(qcamera::qcamera_hal3_pp_buffer_t*,
   mm_camera_buf_def*, qcamera::jpeg_settings_t*, qcamera::qcamera_fwk_input_pp_data_t&) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::overrideMetadata
          (QCamera3ReprocessChannel *this,qcamera_hal3_pp_buffer_t *param_1,
          mm_camera_buf_def *param_2,jpeg_settings_t *param_3,qcamera_fwk_input_pp_data_t *param_4)

{
  int **ppiVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  QCamera3Stream *this_00;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  uint local_38;
  undefined4 uStack52;
  
  uVar11 = 0xffffffea;
  piVar3 = *(int **)(DAT_000a5610 + 0xa52e8);
  iVar4 = *piVar3;
  if ((((param_1 != (qcamera_hal3_pp_buffer_t *)0x0) && (param_2 != (mm_camera_buf_def *)0x0)) &&
      (uVar11 = 0xffffffea, *(int *)(this + 4) != 0)) && (iVar15 = *(int *)param_1, iVar15 != 0)) {
    iVar5 = *(int *)(param_2 + 0x208);
    if (iVar5 == 0) {
      uVar11 = 0xffffffea;
    }
    else {
      uVar19 = *(uint *)(iVar15 + 8);
      if (uVar19 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        uVar12 = 0;
        iVar14 = *(int *)(DAT_000a5614 + 0xa5334);
        do {
          uVar7 = *(uint *)(this + 0x44);
          if (uVar7 != 0) {
            uVar9 = 0;
            ppiVar1 = (int **)(iVar15 + uVar12 * 4 + 0x10);
            iVar8 = **ppiVar1;
            do {
              if (*(int *)(this + uVar9 * 4 + 0xd8) == iVar8) {
                iVar18 = *(int *)(this + uVar9 * 4 + 0x24);
                goto joined_r0x000a5364;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar7);
            iVar18 = 0;
joined_r0x000a5364:
            if ((uVar7 != 0) && (iVar13 = *(int *)(this + 0xf8), iVar13 != 0)) {
              uVar9 = 0;
              do {
                if (*(int *)(this + uVar9 * 4 + 0xd8) == iVar8) {
                  if (((uVar9 < *(uint *)(iVar13 + 0x44)) && (iVar18 != 0)) &&
                     (this_00 = *(QCamera3Stream **)(iVar13 + uVar9 * 4 + 0x24),
                     this_00 != (QCamera3Stream *)0x0)) {
                    if (param_3 != (jpeg_settings_t *)0x0) {
                      local_38 = 0;
                      iVar15 = *(int *)(param_3 + 4);
                      if (iVar15 < 0xb4) {
                        if (iVar15 == 0) {
                          local_38 = 1;
                        }
                        else if (iVar15 == 0x5a) {
                          local_38 = 2;
                        }
                      }
                      else if (iVar15 == 0xb4) {
                        local_38 = 4;
                      }
                      else if (iVar15 == 0x10e) {
                        local_38 = 8;
                      }
                      if (param_3[0xc6] != (jpeg_settings_t)0x0) {
                        local_38 = 1;
                      }
                      uVar6 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
                      *(undefined4 *)("Memeory Obj of main frame is NULL" + iVar5 + 10) = uVar6;
                      *(undefined *)(iVar5 + 0x38) = 1;
                      *(ulonglong *)("Memeory Obj of main frame is NULL" + iVar5 + 2) =
                           (ulonglong)local_38;
                    }
                    if (*(char *)(iVar5 + 0x3b) == '\0') goto LAB_000a54a0;
                    pbVar17 = (byte *)(iVar5 + 0x22fc);
                    if (7 < *pbVar17) {
                      if (*(int *)(iVar14 + 0x20) == 0) goto LAB_000a54a0;
                      uVar6 = 1;
                      uVar10 = 0x13c9;
                      iVar15 = DAT_000a5630 + 0xa5496;
                      iVar8 = DAT_000a5634 + 0xa549e;
                      goto LAB_000a549c;
                    }
                    if (*pbVar17 == 0) goto LAB_000a54a0;
                    puVar16 = (undefined4 *)(iVar5 + 0x2310);
                    uVar19 = 0;
                    goto LAB_000a5466;
                  }
                  break;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar7);
            }
          }
          if (*(int *)(iVar14 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000a5644 + 0xa53ac,0x13e7,DAT_000a5640 + 0xa53a4);
            uVar19 = *(uint *)(iVar15 + 8);
          }
          uVar12 = uVar12 + 1;
          uVar11 = 0xffffffea;
        } while (uVar12 < uVar19);
      }
    }
  }
  goto LAB_000a53c6;
  while( true ) {
    uVar19 = uVar19 + 1;
    puVar16 = puVar16 + 9;
    if (*pbVar17 <= uVar19) break;
LAB_000a5466:
    iVar8 = puVar16[-4];
    iVar15 = QCamera3Stream::getMyServerID(this_00);
    if (iVar8 == iVar15) {
      uVar20 = *(undefined8 *)(puVar16 + -1);
      iVar15 = iVar5 + 0x2300 + (uint)*pbVar17 * 0x24;
      *(undefined8 *)(iVar15 + 4) = *(undefined8 *)(puVar16 + -3);
      *(undefined8 *)(iVar15 + 0xc) = uVar20;
      uVar20 = *(undefined8 *)(puVar16 + 3);
      *(undefined8 *)(iVar15 + 0x14) = *(undefined8 *)(puVar16 + 1);
      *(undefined8 *)(iVar15 + 0x1c) = uVar20;
      uVar6 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
      bVar2 = *pbVar17;
      *(undefined4 *)(iVar5 + 0x2300 + (uint)bVar2 * 0x24) = uVar6;
      *pbVar17 = bVar2 + 1;
      if (*(int *)(iVar14 + 0x2c) != 0) {
        uVar6 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
        mm_camera_debug_log(1,4,DAT_000a561c + 0xa5576,0x13b9,DAT_000a5618 + 0xa556a,uVar6);
        if ((*(int *)(iVar14 + 0x2c) != 0) &&
           (mm_camera_debug_log(1,4,DAT_000a5624 + 0xa55a2,0x13be,DAT_000a5620 + 0xa558e,puVar16[-3]
                                ,puVar16[-2],puVar16[-1],*puVar16), *(int *)(iVar14 + 0x2c) != 0)) {
          iVar15 = DAT_000a5628 + 0xa55ba;
          uVar6 = 4;
          uVar10 = 0x13c3;
          iVar8 = DAT_000a562c + 0xa55ce;
LAB_000a549c:
          mm_camera_debug_log(1,uVar6,iVar8,uVar10,iVar15);
        }
      }
      break;
    }
  }
LAB_000a54a0:
  if (*(char *)(iVar5 + 0xf0) != '\0') {
    uVar19 = (uint)*(byte *)(iVar5 + 0x2275);
    if (uVar19 < 9) {
      uStack52 = 0;
      uVar6 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
      if (uVar19 != 0) {
        uVar12 = 0;
        do {
          iVar8 = iVar5 + 0x2274 + uVar12 * 8;
          iVar14 = *(int *)(iVar8 + 4);
          iVar15 = QCamera3Stream::getMyServerID(this_00);
          if (iVar14 == iVar15) {
            uStack52 = *(undefined4 *)(iVar8 + 8);
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar19);
      }
      *(undefined *)(iVar5 + 0x2275) = 1;
      *(undefined4 *)(iVar5 + 0x2278) = uVar6;
      *(undefined4 *)(iVar5 + 0x227c) = uStack52;
    }
    else if (*(int *)(iVar14 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a563c + 0xa550c,0x13de,DAT_000a5638 + 0xa5504);
    }
  }
  __aeabi_memcpy8(param_4 + 0x22c,*ppiVar1,0x218);
  __aeabi_memcpy8(param_4 + 0x14,param_2,0x218);
  *(undefined4 *)(param_4 + 0x604) = *(undefined4 *)(param_1 + 4);
LAB_000a53c6:
  if (*piVar3 != iVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}

