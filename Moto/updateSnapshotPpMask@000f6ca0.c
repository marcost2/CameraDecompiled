
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* qcamera::QCameraParameters::updateSnapshotPpMask(cam_stream_size_info_t&) */

void __thiscall
qcamera::QCameraParameters::updateSnapshotPpMask
          (QCameraParameters *this,cam_stream_size_info_t *param_1)

{
  cam_stream_size_info_t *pcVar1;
  cam_stream_size_info_t *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  cam_stream_size_info_t cVar8;
  cam_stream_size_info_t cVar9;
  cam_stream_size_info_t *pcVar10;
  cam_stream_size_info_t cVar11;
  int iVar12;
  cam_dimension_t *pcVar13;
  uint uVar14;
  cam_stream_size_info_t cVar15;
  cam_stream_size_info_t cVar16;
  cam_stream_size_info_t cVar17;
  int iVar18;
  undefined *puVar19;
  int *piVar20;
  cam_stream_size_info_t cVar21;
  cam_stream_size_info_t *pcVar22;
  longlong lVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined in_q10 [16];
  undefined in_q11 [16];
  undefined local_70 [44];
  undefined4 *local_44;
  undefined4 local_28;
  
  piVar20 = (int *)local_70;
  puVar19 = local_70;
  local_28 = **(undefined4 **)(DAT_000f6e90 + 0xf6cb0);
  local_44 = *(undefined4 **)(DAT_000f6e90 + 0xf6cb0);
  uVar3 = param_1[0x10];
  if (uVar3 == 0) {
    pcVar13 = (cam_dimension_t *)0x0;
    cVar11 = 0;
  }
  else {
    pcVar10 = param_1;
    if (uVar3 < 4) {
      cVar11 = 0;
      pcVar13 = (cam_dimension_t *)0x0;
      uVar6 = 0;
      puVar19 = local_70;
    }
    else {
      uVar6 = uVar3 & 0xfffffffc;
      auVar24 = ZEXT816(0);
      auVar26 = ZEXT816(0);
      uVar14 = uVar6;
      do {
        pcVar1 = (cam_stream_size_info_t *)0x3a0;
        pcVar2 = (cam_stream_size_info_t *)0x3b0;
        lVar23 = 2;
        pcVar22 = param_1;
        while( true ) {
          *pcVar1 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          *pcVar2 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          pcVar1 = pcVar1 + 1;
          pcVar2 = pcVar2 + 1;
        }
        pcVar1 = (cam_stream_size_info_t *)0x3a8;
        pcVar2 = (cam_stream_size_info_t *)0x3b8;
        lVar23 = 2;
        while( true ) {
          *pcVar1 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          *pcVar2 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          pcVar1 = pcVar1 + 1;
          pcVar2 = pcVar2 + 1;
        }
        param_1 = param_1 + 8;
        uVar14 = uVar14 - 4;
        auVar24 = VectorMax(in_q11,auVar24,4,0);
        auVar26 = VectorMax(in_q10,auVar26,4,0);
      } while (uVar14 != 0);
      auVar25 = VectorMax(auVar24,SUB3216(CONCAT1616(auVar24,auVar24) >> 0x40,0),4,0);
      auVar27 = VectorMax(auVar26,SUB3216(CONCAT1616(auVar24,auVar26) >> 0x40,0),4,0);
      uVar4 = SUB164(auVar25 >> 0x20,0);
      auVar24 = ZEXT816(CONCAT44(uVar4,uVar4));
      uVar4 = SUB164(auVar27 >> 0x20,0);
      auVar26 = ZEXT816(CONCAT44(uVar4,uVar4));
      auVar24 = VectorMax(auVar25,auVar24 & auVar24 << 0x40,4,0);
      auVar26 = VectorMax(auVar27,auVar26 & auVar26 << 0x40,4,0);
      cVar11 = VectorGetElement(SUB168(auVar24,0),0,4,0);
      pcVar13 = (cam_dimension_t *)VectorGetElement(SUB168(auVar26,0),0,4,0);
      param_1 = pcVar10;
      piVar20 = (int *)puVar19;
      if (uVar3 == uVar6) goto LAB_000f6d34;
    }
    do {
      if ((int)pcVar13 < (int)(cam_dimension_t *)pcVar10[uVar6 * 2]) {
        pcVar13 = (cam_dimension_t *)pcVar10[uVar6 * 2];
      }
      if ((int)cVar11 < (int)pcVar10[uVar6 * 2 + 1]) {
        cVar11 = pcVar10[uVar6 * 2 + 1];
      }
      uVar6 = uVar6 + 1;
      param_1 = pcVar10;
      piVar20 = (int *)puVar19;
    } while (uVar6 < uVar3);
  }
LAB_000f6d34:
  iVar18 = *(int *)(DAT_000f6e94 + 0xf6d3a);
  if (*(int *)(iVar18 + 0x28) != 0) {
    *piVar20 = DAT_000f6e98 + 0xf6d4e;
    piVar20[1] = (int)pcVar13;
    piVar20[2] = cVar11;
    mm_camera_debug_log(1,3,DAT_000f6e9c + 0xf6d5a,0x371b);
  }
  getSensorOutputSize(SUB41(this,0),pcVar13);
  getStreamDimension(this,3,(cam_dimension_t *)(piVar20 + 0xe));
  uVar3 = (uint)*(byte *)(*(int *)(this + 0x1d4) + 0x2ae4);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert(DAT_000f6eb0 + 0xf6e88,DAT_000f6eb4 + 0xf6e8a,DAT_000f6eb8 + 0xf6e8c);
  }
  if ((uVar3 < ((piVar20[0x11] + piVar20[0xf]) - 1U) / (uint)piVar20[0xf]) ||
     (uVar3 < ((piVar20[0x10] + piVar20[0xe]) - 1U) / (uint)piVar20[0xe])) {
    if (*(int *)(iVar18 + 0x28) != 0) {
      *piVar20 = DAT_000f6ea0 + 0xf6dba;
      mm_camera_debug_log(1,3,DAT_000f6ea4 + 0xf6dc2,0x36f8);
    }
    this[0x801] = (QCameraParameters)0x1;
    uVar3 = param_1[0x10];
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar14 = 0;
      iVar12 = 0x68;
      piVar20[0xc] = (int)(this + 0x328);
      uVar4 = 0;
      do {
        if (param_1[uVar14 + 0x11] == 3) {
          updatePpFeatureMask(this,3);
          iVar7 = *(int *)piVar20[0xc];
          iVar5 = ((int *)piVar20[0xc])[1];
          *(int *)((int)param_1 + iVar12) = iVar7;
          *(int *)((int)param_1 + iVar12 + 4) = iVar5;
          if (*(int *)(iVar18 + 0x34) != 0) {
            cVar17 = param_1[uVar14 + 0x4a];
            cVar15 = param_1[uVar14 + 0x35];
            cVar16 = param_1[uVar14 + 0x42];
            cVar21 = param_1[uVar14 * 2 + 1];
            cVar8 = param_1[uVar14 + 0x2c];
            piVar20[0xd] = param_1[uVar14 * 2];
            cVar11 = param_1[uVar14 + 0x52];
            cVar9 = param_1[uVar14 + 0x11];
            piVar20[8] = cVar17;
            piVar20[9] = cVar11;
            piVar20[10] = cVar8;
            *piVar20 = DAT_000f6ea8 + 0xf6e36;
            piVar20[1] = cVar9;
            piVar20[2] = piVar20[0xd];
            piVar20[3] = cVar21;
            piVar20[4] = iVar7;
            piVar20[5] = iVar5;
            piVar20[6] = cVar15;
            piVar20[7] = cVar16;
            mm_camera_debug_log(1,6,DAT_000f6eac + 0xf6e52,0x3731);
          }
          uVar4 = sendStreamConfigInfo(this,param_1);
          uVar3 = param_1[0x10];
        }
        iVar12 = iVar12 + 8;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar3);
    }
  }
  else {
    uVar4 = 0;
    this[0x801] = (QCameraParameters)0x0;
  }
  if (*(int *)piVar20[0xb] != piVar20[0x12]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

