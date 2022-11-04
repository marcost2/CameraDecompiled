
/* qcamera::QCamera3ReprocessChannel::overrideMetadata(qcamera::qcamera_hal3_pp_buffer_t*,
   mm_camera_buf_def*, qcamera::jpeg_settings_t*, qcamera::qcamera_fwk_input_pp_data_t&) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::overrideMetadata
          (QCamera3ReprocessChannel *this,qcamera_hal3_pp_buffer_t *param_1,
          mm_camera_buf_def *param_2,jpeg_settings_t *param_3,qcamera_fwk_input_pp_data_t *param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  QCamera3Stream *this_00;
  undefined4 uVar6;
  int iVar7;
  qcamera_hal3_pp_buffer_t *pqVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  undefined8 uVar16;
  uint local_38;
  undefined4 uStack52;
  
  piVar2 = *(int **)(DAT_0005d3f0 + 0x5d0ee);
  iVar3 = *piVar2;
  uVar10 = 0xffffffea;
  if ((param_1 != (qcamera_hal3_pp_buffer_t *)0x0) && (param_2 != (mm_camera_buf_def *)0x0)) {
    uVar10 = 0xffffffea;
    pqVar8 = param_1;
    if (*(int *)(this + 4) != 0) {
      pqVar8 = *(qcamera_hal3_pp_buffer_t **)param_1;
    }
    if (*(int *)(this + 4) != 0 && pqVar8 != (qcamera_hal3_pp_buffer_t *)0x0) {
      iVar9 = *(int *)(param_2 + 0x208);
      if (iVar9 == 0) {
        uVar10 = 0xffffffea;
      }
      else if (*(int *)(pqVar8 + 8) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        iVar4 = *(int *)(DAT_0005d3f4 + 0x5d148);
        uVar15 = 0;
        do {
          uVar12 = **(uint **)(pqVar8 + uVar15 * 4 + 0x10);
          iVar5 = getStreamBySrcHandle(this,uVar12);
          this_00 = (QCamera3Stream *)getSrcStreamBySrcHandle(this,uVar12);
          if (iVar5 != 0 && this_00 != (QCamera3Stream *)0x0) {
            if (param_3 != (jpeg_settings_t *)0x0) {
              local_38 = 0;
              iVar5 = *(int *)(param_3 + 4);
              if (iVar5 < 0xb4) {
                if (iVar5 == 0) {
                  local_38 = 1;
                }
                else if (iVar5 == 0x5a) {
                  local_38 = 2;
                }
              }
              else if (iVar5 == 0xb4) {
                local_38 = 4;
              }
              else if (iVar5 == 0x10e) {
                local_38 = 8;
              }
              if (param_3[0xc6] != (jpeg_settings_t)0x0) {
                local_38 = 1;
              }
              uVar6 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
              *(undefined4 *)(iVar9 + 0x7475c) = uVar6;
              *(undefined *)(iVar9 + 0x38) = 1;
              *(ulonglong *)(iVar9 + 0x74754) = (ulonglong)local_38;
            }
            if (*(char *)(iVar9 + 0x3b) == '\0') goto LAB_0005d27c;
            pbVar14 = (byte *)(iVar9 + 0x2278);
            if (7 < *pbVar14) {
              if (*(int *)(iVar4 + 0x20) == 0) goto LAB_0005d27c;
              goto LAB_0005d278;
            }
            if (*pbVar14 == 0) goto LAB_0005d27c;
            iVar5 = iVar9 + 0x228c;
            uVar12 = 0;
            goto LAB_0005d244;
          }
          if (*(int *)(iVar4 + 0x20) != 0) {
            mm_camera_debug_log();
          }
          uVar15 = uVar15 + 1;
          uVar10 = 0xffffffea;
        } while (uVar15 < *(uint *)(pqVar8 + 8));
      }
    }
  }
  goto LAB_0005d11a;
  while( true ) {
    iVar5 = iVar5 + 0x24;
    uVar12 = uVar12 + 1;
    if (*pbVar14 <= uVar12) break;
LAB_0005d244:
    iVar11 = *(int *)(iVar5 + -0x10);
    iVar7 = QCamera3Stream::getMyServerID(this_00);
    if (iVar11 == iVar7) {
      uVar16 = *(undefined8 *)(iVar5 + -4);
      iVar7 = iVar9 + 0x227c + (uint)*pbVar14 * 0x24;
      *(undefined8 *)(iVar7 + 4) = *(undefined8 *)(iVar5 + -0xc);
      *(undefined8 *)(iVar7 + 0xc) = uVar16;
      uVar16 = *(undefined8 *)(iVar5 + 0xc);
      *(undefined8 *)(iVar7 + 0x14) = *(undefined8 *)(iVar5 + 4);
      *(undefined8 *)(iVar7 + 0x1c) = uVar16;
      uVar6 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
      bVar1 = *pbVar14;
      *(undefined4 *)(iVar9 + 0x227c + (uint)bVar1 * 0x24) = uVar6;
      *pbVar14 = bVar1 + 1;
      if (*(int *)(iVar4 + 0x2c) != 0) {
        QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
        mm_camera_debug_log();
        if ((*(int *)(iVar4 + 0x2c) != 0) && (mm_camera_debug_log(), *(int *)(iVar4 + 0x2c) != 0)) {
LAB_0005d278:
          mm_camera_debug_log();
        }
      }
      break;
    }
  }
LAB_0005d27c:
  if (*(char *)(iVar9 + 0xce) != '\0') {
    uVar12 = (uint)*(byte *)(iVar9 + 0x2231);
    if (uVar12 < 9) {
      uStack52 = 0;
      uVar6 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
      if (uVar12 != 0) {
        uVar13 = 0;
        do {
          iVar5 = iVar9 + 0x2230 + uVar13 * 8;
          iVar7 = *(int *)(iVar5 + 4);
          iVar4 = QCamera3Stream::getMyServerID(this_00);
          if (iVar7 == iVar4) {
            uStack52 = *(undefined4 *)(iVar5 + 8);
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar12);
      }
      *(undefined *)(iVar9 + 0x2231) = 1;
      *(undefined4 *)(iVar9 + 0x2234) = uVar6;
      *(undefined4 *)(iVar9 + 0x2238) = uStack52;
    }
    else if (*(int *)(iVar4 + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
  __aeabi_memcpy8(param_4 + 0x22c,*(void **)(pqVar8 + uVar15 * 4 + 0x10),0x218);
  __aeabi_memcpy8(param_4 + 0x14,param_2,0x218);
  *(undefined4 *)(param_4 + 0x5fc) = *(undefined4 *)(param_1 + 4);
LAB_0005d11a:
  if (*piVar2 != iVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

