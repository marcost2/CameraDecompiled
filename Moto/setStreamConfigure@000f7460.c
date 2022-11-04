
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* qcamera::QCameraParameters::setStreamConfigure(bool, bool, bool, unsigned int*) */

int qcamera::QCameraParameters::setStreamConfigure
              (bool param_1,bool param_2,bool param_3,uint *param_4)

{
  cam_stream_size_info_t *pcVar1;
  cam_stream_size_info_t *pcVar2;
  undefined8 *__nptr;
  QCameraParameters QVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  QCameraHeapMemory *this;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  cam_stream_size_info_t *pcVar12;
  int iVar13;
  cam_stream_size_info_t cVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  QCameraParameters *pQVar19;
  int iVar20;
  undefined4 uVar21;
  cam_stream_size_info_t cVar22;
  cam_dimension_t *pcVar23;
  uint uVar24;
  code *pcVar25;
  int iVar26;
  int iVar27;
  cam_stream_size_info_t *__src;
  int iVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  int iVar32;
  cam_stream_size_info_t *pcVar33;
  longlong lVar34;
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined in_q10 [16];
  undefined in_q11 [16];
  int local_398;
  uint uStack916;
  cam_stream_size_info_t local_390;
  cam_stream_size_info_t cStack908;
  uint local_388;
  QCameraParameters *local_36c;
  int *local_368;
  int local_364;
  undefined8 local_358;
  undefined8 uStack848;
  undefined8 local_348;
  undefined8 uStack832;
  undefined8 local_338;
  undefined8 uStack816;
  undefined8 local_328;
  undefined8 uStack800;
  undefined8 local_318;
  undefined4 uStack784;
  undefined4 local_30c;
  undefined4 uStack776;
  undefined8 uStack772;
  char acStack492 [92];
  cam_stream_size_info_t local_190 [16];
  uint local_150;
  int local_14c [9];
  undefined4 auStack296 [18];
  int local_e0 [8];
  undefined4 local_c0;
  cam_format_t local_bc [8];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  QCameraParameters local_90;
  int local_88 [8];
  int local_68 [8];
  int local_48 [8];
  int local_28;
  
  pQVar19 = (QCameraParameters *)(uint)param_1;
  piVar31 = &local_398;
  piVar30 = &local_398;
  piVar29 = &local_398;
  piVar8 = &local_398;
  piVar9 = *(int **)(DAT_000f77b8 + 0xf7472);
  local_28 = *piVar9;
  if (*(int *)(pQVar19 + 0x1e0) == 0) {
    iVar4 = 1;
    goto LAB_000f7f0a;
  }
  __src = local_190;
  local_368 = piVar9;
  __aeabi_memclr8(__src,0x168);
  if (param_4 == (uint *)0x0) {
    local_c0 = *(undefined4 *)(pQVar19 + 0x2fc);
    iVar4 = *(int *)(pQVar19 + 0x1d4);
    local_9c = *(undefined4 *)(iVar4 + 0x3fa4);
    local_98 = *(undefined4 *)(iVar4 + 0x3fa8);
    local_94 = *(undefined4 *)(iVar4 + 0x3fac);
    local_90 = pQVar19[0x798];
    pQVar19[0x801] = (QCameraParameters)0x0;
    local_364 = *(int *)(DAT_000f77d0 + 0xf751a);
    if (*(int *)(local_364 + 0x28) != 0) {
      local_390 = *(cam_stream_size_info_t *)(iVar4 + 0x3fa8);
      uStack916 = *(uint *)(iVar4 + 0x3fa4);
      cStack908 = *(cam_stream_size_info_t *)(iVar4 + 0x3fac);
      local_398 = DAT_000f77d4 + 0xf7532;
      local_388 = (uint)(byte)local_90;
      mm_camera_debug_log(1,3,DAT_000f77d8 + 0xf7548,0x37b8);
    }
    uVar17 = *(undefined4 *)(DAT_000f77dc + 0xf7550);
    property_get(DAT_000f77e0 + 0xf755a,acStack492,uVar17);
    iVar4 = atoi(acStack492);
    uVar6 = local_150;
    local_36c = pQVar19;
    if ((pQVar19[0x213] == (QCameraParameters)0x0) && (pQVar19[0x210] != (QCameraParameters)0x0)) {
      if (pQVar19[0x18] != (QCameraParameters)0x0) {
        getSensorOutputSize((cam_dimension_t)param_1,
                            *(cam_dimension_t **)(*(int *)(pQVar19 + 0x1d4) + 0x3ec0));
        *(undefined4 *)(pQVar19 + 0x278) = (undefined4)local_358;
        *(undefined4 *)(pQVar19 + 0x27c) = local_358._4_4_;
      }
      uVar6 = local_150;
      local_14c[local_150] = 1;
      iVar16 = local_150 * 2;
      __src[local_150 * 2] = 0;
      local_190[uVar6 * 2 + 1] = 0;
      android::CameraParameters::getPreviewSize
                ((CameraParameters *)pQVar19,(int *)(__src + iVar16),
                 (int *)(local_190 + uVar6 * 2 + 1));
      if (*(int *)(local_364 + 0x2c) != 0) {
        local_390 = __src[iVar16];
        cStack908 = local_190[uVar6 * 2 + 1];
        local_398 = DAT_000f77ec + 0xf76e8;
        uStack916 = 1;
        mm_camera_debug_log(1,4,DAT_000f77f0 + 0xf76f8,0x2c7b);
      }
      updatePpFeatureMask(pQVar19,1);
      uVar21 = *(undefined4 *)(pQVar19 + 0x31c);
      auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x318);
      auStack296[local_150 * 2 + 1] = uVar21;
      getStreamFormat(pQVar19,1,local_bc + local_150);
      local_150 = local_150 + 1;
      local_14c[local_150] = 0xb;
      updatePpFeatureMask(pQVar19,0xb);
      getStreamDimension(pQVar19,0xb,(cam_dimension_t *)(__src + local_150 * 2));
      uVar21 = *(undefined4 *)(pQVar19 + 0x36c);
      auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x368);
      auStack296[local_150 * 2 + 1] = uVar21;
      getStreamFormat(pQVar19,0xb,local_bc + local_150);
      local_150 = local_150 + 1;
      local_14c[local_150] = 3;
      getStreamDimension(pQVar19,3,(cam_dimension_t *)(__src + local_150 * 2));
      updatePpFeatureMask(pQVar19,3);
      uVar21 = *(undefined4 *)(pQVar19 + 0x32c);
      auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x328);
      auStack296[local_150 * 2 + 1] = uVar21;
      local_bc[local_150] = 0x7c;
      pcVar12 = local_bc + local_150;
      if (*(int *)(pQVar19 + 0x22c) == 5) {
        cVar22 = 5;
      }
      else {
        local_358 = 0;
        uStack848 = 0;
        uStack776 = 0;
        uStack772 = 0;
        local_318 = 0;
        uStack784 = 0;
        local_30c = 0;
        local_328 = 0;
        uStack800 = 0;
        local_338 = 0;
        uStack816 = 0;
        local_348 = 0;
        uStack832 = 0;
        property_get(DAT_000f7ba4 + 0xf7a2a,&local_358,uVar17);
        iVar16 = atoi((char *)&local_358);
        cVar22 = 2;
        if (iVar16 == 1) {
          cVar22 = 6;
        }
      }
      *pcVar12 = cVar22;
      if (*(int *)(local_364 + 0x2c) != 0) {
        local_398 = DAT_000f7ba8 + 0xf7a4e;
        uStack916 = 3;
        local_390 = cVar22;
        mm_camera_debug_log(1,4,DAT_000f7bac + 0xf7a5c,0x2bba);
      }
LAB_000f7a5e:
      local_150 = local_150 + 1;
LAB_000f7a64:
      piVar31 = &local_398;
      uVar6 = local_150;
      if (pQVar19[0x301] == (QCameraParameters)0x0) {
        if (0 < iVar4) goto LAB_000f7a86;
      }
      else if ((0 < iVar4) || (pQVar19[0x213] == (QCameraParameters)0x0)) {
LAB_000f7a86:
        if (pQVar19[0x800] == (QCameraParameters)0x0) {
          if (local_150 == 0) {
            cVar22 = 0;
            pcVar23 = (cam_dimension_t *)0x0;
          }
          else {
            if (local_150 < 4) {
              uVar10 = 0;
              pcVar23 = (cam_dimension_t *)0x0;
              cVar22 = 0;
              piVar29 = &local_398;
            }
            else {
              uVar10 = local_150 & 0xfffffffc;
              auVar35 = ZEXT816(0);
              pcVar12 = local_190;
              auVar37 = ZEXT816(0);
              uVar24 = uVar10;
              do {
                pcVar1 = (cam_stream_size_info_t *)0x3a0;
                pcVar2 = (cam_stream_size_info_t *)0x3b0;
                lVar34 = 2;
                pcVar33 = pcVar12;
                while( true ) {
                  *pcVar1 = *pcVar33;
                  pcVar33 = pcVar33 + 1;
                  *pcVar2 = *pcVar33;
                  pcVar33 = pcVar33 + 1;
                  lVar34 = lVar34 + -1;
                  if (lVar34 == 0) break;
                  pcVar1 = pcVar1 + 1;
                  pcVar2 = pcVar2 + 1;
                }
                pcVar1 = (cam_stream_size_info_t *)0x3a8;
                pcVar2 = (cam_stream_size_info_t *)0x3b8;
                lVar34 = 2;
                while( true ) {
                  *pcVar1 = *pcVar33;
                  pcVar33 = pcVar33 + 1;
                  *pcVar2 = *pcVar33;
                  pcVar33 = pcVar33 + 1;
                  lVar34 = lVar34 + -1;
                  if (lVar34 == 0) break;
                  pcVar1 = pcVar1 + 1;
                  pcVar2 = pcVar2 + 1;
                }
                pcVar12 = pcVar12 + 8;
                uVar24 = uVar24 - 4;
                auVar37 = VectorMax(in_q11,auVar37,4,0);
                auVar35 = VectorMax(in_q10,auVar35,4,0);
              } while (uVar24 != 0);
              auVar36 = VectorMax(auVar35,SUB3216(CONCAT1616(auVar35,auVar35) >> 0x40,0),4,0);
              auVar38 = VectorMax(auVar37,SUB3216(CONCAT1616(auVar35,auVar37) >> 0x40,0),4,0);
              uVar17 = SUB164(auVar36 >> 0x20,0);
              auVar35 = ZEXT816(CONCAT44(uVar17,uVar17));
              uVar17 = SUB164(auVar38 >> 0x20,0);
              auVar37 = ZEXT816(CONCAT44(uVar17,uVar17));
              auVar35 = VectorMax(auVar36,auVar35 & auVar35 << 0x40,4,0);
              auVar37 = VectorMax(auVar38,auVar37 & auVar37 << 0x40,4,0);
              pcVar23 = (cam_dimension_t *)VectorGetElement(SUB168(auVar35,0),0,4,0);
              cVar22 = VectorGetElement(SUB168(auVar37,0),0,4,0);
              piVar8 = piVar29;
              if (uVar6 == uVar10) goto LAB_000f7c20;
            }
            do {
              if ((int)pcVar23 < (int)(cam_dimension_t *)__src[uVar10 * 2]) {
                pcVar23 = (cam_dimension_t *)__src[uVar10 * 2];
              }
              if ((int)cVar22 < (int)__src[uVar10 * 2 + 1]) {
                cVar22 = __src[uVar10 * 2 + 1];
              }
              uVar10 = uVar10 + 1;
              piVar8 = piVar29;
            } while (uVar10 < uVar6);
          }
        }
        else {
          cVar22 = *(cam_stream_size_info_t *)(*(int *)(pQVar19 + 0x1d4) + 0x25b8);
          pcVar23 = *(cam_dimension_t **)(*(int *)(pQVar19 + 0x1d4) + 0x25b4);
          piVar8 = &local_398;
        }
LAB_000f7c20:
        if (*(int *)(piVar8[0xd] + 0x28) != 0) {
          *piVar8 = DAT_000f7f68 + 0xf7c32;
          piVar8[1] = (int)pcVar23;
          piVar8[2] = cVar22;
          mm_camera_debug_log(1,3,DAT_000f7f6c + 0xf7c3e,0x388b);
        }
        __src[piVar8[0x92] + 0x11] = 8;
        getStreamFormat(pQVar19,8,__src + piVar8[0x92] + 0x35);
        iVar4 = piVar8[0x92];
        if (__src[iVar4 + 0x35] == 0x4e) {
          piVar8[0xe] = 0;
          piVar8[0xf] = 0;
          __src[iVar4 + 0x52] = 2;
          __nptr = (undefined8 *)(piVar8 + 0x10);
          *(undefined8 *)(piVar8 + 0x20) = 0;
          *(undefined8 *)(piVar8 + 0x22) = 0;
          *(undefined8 *)(piVar8 + 0x1c) = 0;
          *(undefined8 *)(piVar8 + 0x1e) = 0;
          *(undefined8 *)(piVar8 + 0x18) = 0;
          *(undefined8 *)(piVar8 + 0x1a) = 0;
          *(undefined8 *)(piVar8 + 0x14) = 0;
          *(undefined8 *)(piVar8 + 0x16) = 0;
          *__nptr = 0;
          *(undefined8 *)(piVar8 + 0x12) = 0;
          *(undefined8 *)(piVar8 + 0x23) = 0;
          *(undefined8 *)(piVar8 + 0x25) = 0;
          property_get(DAT_000f7f74 + 0xf7cb6,__nptr,*(undefined4 *)(DAT_000f7f70 + 0xf7cb0));
          cVar22 = atoi((char *)__nptr);
          iVar16 = piVar8[0xd];
          __src[iVar4 + 0x52] = cVar22;
          if (*(int *)(iVar16 + 0x28) != 0) {
            *piVar8 = DAT_000f7f78 + 0xf7cd2;
            piVar8[1] = cVar22;
            mm_camera_debug_log(1,3,DAT_000f7f7c + 0xf7cde,0x2b22);
          }
          updateDtVc(pQVar19,piVar8 + 0xf,piVar8 + 0xe);
          __src[piVar8[0x92] + 0x42] = piVar8[0xf];
          __src[piVar8[0x92] + 0x4a] = piVar8[0xe];
          __aeabi_memcpy8(piVar8 + 0x10,__src,0x168);
          piVar8[0x20] = piVar8[0x20] + 1;
          sendStreamConfigForPickRes(pQVar19,(cam_stream_size_info_t *)(piVar8 + 0x10));
          getMetaRawInfo(pQVar19);
        }
        else {
          getSensorOutputSize(SUB41(pQVar19,0),pcVar23);
          iVar4 = piVar8[0x11];
          *(int *)(pQVar19 + 0x278) = piVar8[0x10];
          *(int *)(pQVar19 + 0x27c) = iVar4;
        }
        iVar4 = piVar8[0x92];
        __src[iVar4 * 2] = 0;
        __src[iVar4 * 2 + 1] = 0;
        cVar22 = *(cam_stream_size_info_t *)(pQVar19 + 0x278);
        cVar14 = *(cam_stream_size_info_t *)(pQVar19 + 0x27c);
        __src[iVar4 * 2] = cVar22;
        iVar16 = piVar8[0xd];
        __src[iVar4 * 2 + 1] = cVar14;
        if (*(int *)(iVar16 + 0x2c) != 0) {
          cVar14 = __src[iVar4 * 2 + 1];
          *piVar8 = DAT_000f80e8 + 0xf7d62;
          piVar8[1] = 8;
          piVar8[2] = cVar22;
          piVar8[3] = cVar14;
          mm_camera_debug_log(1,4,DAT_000f80ec + 0xf7d76,0x2c7b);
        }
        updatePpFeatureMask(pQVar19,8);
        iVar4 = piVar8[0x92];
        cVar22 = *(cam_stream_size_info_t *)(pQVar19 + 0x354);
        __src[iVar4 * 2 + 0x1a] = *(cam_stream_size_info_t *)(pQVar19 + 0x350);
        __src[iVar4 * 2 + 0x1b] = cVar22;
        piVar30 = piVar8;
        goto LAB_000f7d8e;
      }
    }
    else {
      if (param_2 == false) {
        if (pQVar19[0x213] != (QCameraParameters)0x0) {
          setISType(pQVar19);
          local_e0[local_150] = 0;
          local_14c[local_150] = 3;
          getStreamDimension(pQVar19,3,(cam_dimension_t *)(__src + local_150 * 2));
          updatePpFeatureMask(pQVar19,3);
          uVar21 = *(undefined4 *)(pQVar19 + 0x32c);
          auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x328);
          auStack296[local_150 * 2 + 1] = uVar21;
          pcVar12 = local_bc + local_150;
          *pcVar12 = 0x7c;
          if (*(int *)(pQVar19 + 0x22c) == 5) {
            cVar22 = 5;
          }
          else {
            local_358 = 0;
            uStack848 = 0;
            uStack776 = 0;
            uStack772 = 0;
            local_318 = 0;
            uStack784 = 0;
            local_30c = 0;
            local_328 = 0;
            uStack800 = 0;
            local_338 = 0;
            uStack816 = 0;
            local_348 = 0;
            uStack832 = 0;
            property_get(DAT_000f7b7c + 0xf7830,&local_358,uVar17);
            iVar16 = atoi((char *)&local_358);
            cVar22 = 2;
            if (iVar16 == 1) {
              cVar22 = 6;
            }
          }
          *pcVar12 = cVar22;
          if (*(int *)(local_364 + 0x2c) != 0) {
            local_398 = DAT_000f7b80 + 0xf7854;
            uStack916 = 3;
            local_390 = cVar22;
            mm_camera_debug_log(1,4,DAT_000f7b84 + 0xf7862,0x2bba);
          }
          local_150 = local_150 + 1;
          local_e0[local_150] = *(int *)(pQVar19 + 0x208);
          local_14c[local_150] = 4;
          getStreamDimension(pQVar19,4,(cam_dimension_t *)(__src + local_150 * 2));
          updatePpFeatureMask(pQVar19,4);
          uVar21 = *(undefined4 *)(pQVar19 + 0x334);
          auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x330);
          auStack296[local_150 * 2 + 1] = uVar21;
          local_bc[local_150] = 7;
          if (*(int *)(local_364 + 0x2c) != 0) {
            local_398 = DAT_000f7b88 + 0xf78c0;
            uStack916 = 4;
            local_390 = 7;
            mm_camera_debug_log(1,4,DAT_000f7b8c + 0xf78ce,0x2bba);
          }
          local_150 = local_150 + 1;
        }
        if ((pQVar19[0x79a] == (QCameraParameters)0x0) && (pQVar19[0x213] != (QCameraParameters)0x0)
           ) {
          property_get(DAT_000f7b98 + 0xf79b8,&local_358,uVar17);
          uVar6 = atoi((char *)&local_358);
          uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
          if (*(int *)(local_364 + 0x2c) != 0) {
            uStack916 = uVar6 & 0xff;
            local_398 = DAT_000f7b9c + 0xf79d6;
            mm_camera_debug_log(1,4,DAT_000f7ba0 + 0xf79e2,0x3dbb);
          }
          if ((uVar6 & 0xff) != 0) goto LAB_000f78de;
        }
        else {
LAB_000f78de:
          local_14c[local_150] = 0xb;
          updatePpFeatureMask(pQVar19,0xb);
          getStreamDimension(pQVar19,0xb,(cam_dimension_t *)(__src + local_150 * 2));
          uVar17 = *(undefined4 *)(pQVar19 + 0x36c);
          auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x368);
          auStack296[local_150 * 2 + 1] = uVar17;
          getStreamFormat(pQVar19,0xb,local_bc + local_150);
          local_150 = local_150 + 1;
        }
        uVar6 = local_150;
        local_14c[local_150] = 1;
        iVar16 = local_150 * 2;
        __src[local_150 * 2] = 0;
        local_190[uVar6 * 2 + 1] = 0;
        android::CameraParameters::getPreviewSize
                  ((CameraParameters *)pQVar19,(int *)(__src + iVar16),
                   (int *)(local_190 + uVar6 * 2 + 1));
        if (*(int *)(local_364 + 0x2c) != 0) {
          local_390 = __src[iVar16];
          cStack908 = local_190[uVar6 * 2 + 1];
          local_398 = DAT_000f7b90 + 0xf795a;
          uStack916 = 1;
          mm_camera_debug_log(1,4,DAT_000f7b94 + 0xf796a,0x2c7b);
        }
        updatePpFeatureMask(pQVar19,1);
        uVar17 = *(undefined4 *)(pQVar19 + 0x31c);
        auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x318);
        auStack296[local_150 * 2 + 1] = uVar17;
        getStreamFormat(pQVar19,1,local_bc + local_150);
        iVar16 = *(int *)(pQVar19 + 0x20c);
LAB_000f799a:
        local_e0[local_150] = iVar16;
        goto LAB_000f7a5e;
      }
      if ((*(uint *)(pQVar19 + 0x22c) < 6) &&
         ((1 << (*(uint *)(pQVar19 + 0x22c) & 0xff) & 0x25U) != 0)) {
        if (pQVar19[0x301] == (QCameraParameters)0x0) {
          local_14c[local_150] = 3;
          getStreamDimension(pQVar19,3,(cam_dimension_t *)(__src + local_150 * 2));
          updatePpFeatureMask(pQVar19,3);
          uVar21 = *(undefined4 *)(pQVar19 + 0x32c);
          auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x328);
          auStack296[local_150 * 2 + 1] = uVar21;
          pcVar12 = local_bc + local_150;
          *pcVar12 = 0x7c;
          if (*(int *)(pQVar19 + 0x22c) == 5) {
            cVar22 = 5;
          }
          else {
            local_358 = 0;
            uStack848 = 0;
            uStack776 = 0;
            uStack772 = 0;
            local_318 = 0;
            uStack784 = 0;
            local_30c = 0;
            local_328 = 0;
            uStack800 = 0;
            local_338 = 0;
            uStack816 = 0;
            local_348 = 0;
            uStack832 = 0;
            property_get(DAT_000f80cc + 0xf7fbc,&local_358,uVar17);
            iVar16 = atoi((char *)&local_358);
            cVar22 = 2;
            if (iVar16 == 1) {
              cVar22 = 6;
            }
          }
          *pcVar12 = cVar22;
          if (*(int *)(local_364 + 0x2c) != 0) {
            local_398 = DAT_000f80d0 + 0xf7fe0;
            uStack916 = 3;
            local_390 = cVar22;
            mm_camera_debug_log(1,4,DAT_000f80d4 + 0xf7fee,0x2bba);
          }
          local_e0[local_150] = 0;
          local_150 = local_150 + 1;
          uVar6 = local_150;
        }
        local_150 = uVar6;
        if (param_3 != false) {
          local_14c[uVar6] = 1;
          __src[uVar6 * 2] = 0;
          local_190[uVar6 * 2 + 1] = 0;
          android::CameraParameters::getPreviewSize
                    ((CameraParameters *)pQVar19,(int *)(__src + uVar6 * 2),
                     (int *)(local_190 + uVar6 * 2 + 1));
          if (*(int *)(local_364 + 0x2c) != 0) {
            local_390 = __src[uVar6 * 2];
            cStack908 = local_190[uVar6 * 2 + 1];
            local_398 = DAT_000f77e4 + 0xf75da;
            uStack916 = 1;
            mm_camera_debug_log(1,4,DAT_000f77e8 + 0xf75ea,0x2c7b);
          }
          updatePpFeatureMask(pQVar19,1);
          uVar17 = *(undefined4 *)(pQVar19 + 0x31c);
          auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x318);
          auStack296[local_150 * 2 + 1] = uVar17;
          getStreamFormat(pQVar19,1,local_bc + local_150);
          local_e0[local_150] = 0;
          goto LAB_000f7a5e;
        }
        if (pQVar19[0x800] == (QCameraParameters)0x0) {
          local_14c[uVar6] = 2;
          __src[uVar6 * 2] = 0;
          local_190[uVar6 * 2 + 1] = 0;
          android::CameraParameters::getPreviewSize
                    ((CameraParameters *)pQVar19,(int *)(__src + uVar6 * 2),
                     (int *)(local_190 + uVar6 * 2 + 1));
          if (*(int *)(local_364 + 0x2c) != 0) {
            local_390 = __src[uVar6 * 2];
            cStack908 = local_190[uVar6 * 2 + 1];
            local_398 = DAT_000f80d8 + 0xf804c;
            uStack916 = 2;
            mm_camera_debug_log(1,4,DAT_000f80dc + 0xf805c,0x2c7b);
          }
          updatePpFeatureMask(pQVar19,2);
          uVar17 = *(undefined4 *)(pQVar19 + 0x324);
          auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 800);
          auStack296[local_150 * 2 + 1] = uVar17;
          cVar22 = *(cam_stream_size_info_t *)(pQVar19 + 0x228);
          local_bc[local_150] = cVar22;
          if (*(int *)(local_364 + 0x2c) != 0) {
            local_398 = DAT_000f80e0 + 0xf8094;
            uStack916 = 2;
            local_390 = cVar22;
            mm_camera_debug_log(1,4,DAT_000f80e4 + 0xf80a2,0x2bba);
          }
          iVar16 = 0;
          goto LAB_000f799a;
        }
        goto LAB_000f7a64;
      }
      local_14c[local_150] = 8;
      __src[local_150 * 2] = 0;
      local_190[uVar6 * 2 + 1] = 0;
      cVar22 = *(cam_stream_size_info_t *)(pQVar19 + 0x278);
      cVar14 = *(cam_stream_size_info_t *)(pQVar19 + 0x27c);
      __src[uVar6 * 2] = cVar22;
      local_190[uVar6 * 2 + 1] = cVar14;
      if (*(int *)(local_364 + 0x2c) != 0) {
        cStack908 = local_190[uVar6 * 2 + 1];
        local_398 = DAT_000f7bb0 + 0xf7b2a;
        uStack916 = 8;
        local_390 = cVar22;
        mm_camera_debug_log(1,4,DAT_000f7bb4 + 0xf7b3e,0x2c7b);
      }
      updatePpFeatureMask(pQVar19,8);
      uVar17 = *(undefined4 *)(pQVar19 + 0x354);
      auStack296[local_150 * 2] = *(undefined4 *)(pQVar19 + 0x350);
      auStack296[local_150 * 2 + 1] = uVar17;
      getStreamFormat(pQVar19,8,local_bc + local_150);
      local_e0[local_150] = 0;
LAB_000f7d8e:
      iVar4 = piVar30[0x92];
      piVar30[0x92] = iVar4 + 1U;
      uVar6 = iVar4 + 1U;
      piVar31 = piVar30;
    }
    if (uVar6 != 0) {
      uVar24 = 0;
      iVar18 = 0x68;
      iVar4 = DAT_000f80f0 + 0xf7da0;
      iVar16 = DAT_000f80f4 + 0xf7da6;
      do {
        if (*(int *)(piVar31[0xd] + 0x34) != 0) {
          iVar28 = piVar31[uVar24 * 2 + 0x82];
          iVar27 = *(int *)((int)piVar31 + iVar18 + 0x208);
          iVar32 = piVar31[uVar24 * 2 + 0x83];
          iVar15 = *(int *)((int)piVar31 + iVar18 + 0x20c);
          iVar5 = piVar31[uVar24 + 0xd4];
          iVar11 = piVar31[uVar24 + 0x93];
          iVar13 = piVar31[uVar24 + 0xae];
          iVar26 = piVar31[uVar24 + 0xb7];
          iVar20 = piVar31[uVar24 + 0xc4];
          piVar31[8] = piVar31[uVar24 + 0xcc];
          piVar31[9] = iVar5;
          piVar31[10] = iVar13;
          *piVar31 = iVar4;
          piVar31[1] = iVar11;
          piVar31[2] = iVar28;
          piVar31[3] = iVar32;
          piVar31[4] = iVar27;
          piVar31[5] = iVar15;
          piVar31[6] = iVar26;
          piVar31[7] = iVar20;
          mm_camera_debug_log(1,6,iVar16,0x38ba);
          uVar6 = piVar31[0x92];
        }
        iVar18 = iVar18 + 8;
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar6);
    }
    pQVar19 = (QCameraParameters *)piVar31[0xb];
    if (pQVar19[0x808] == (QCameraParameters)0x0) {
      if (pQVar19[0x18] != (QCameraParameters)0x0) {
        iVar4 = 2;
        goto LAB_000f7e1e;
      }
    }
    else if (pQVar19[0x18] != (QCameraParameters)0x0) {
      iVar4 = 1;
LAB_000f7e1e:
      piVar31[0xc3] = iVar4;
    }
    iVar4 = sendStreamConfigInfo(pQVar19,(cam_stream_size_info_t *)(piVar31 + 0x82));
    if (pQVar19[0x18] == (QCameraParameters)0x0) {
LAB_000f7e80:
      updateSnapshotPpMask(pQVar19,(cam_stream_size_info_t *)(piVar31 + 0x82));
      if (iVar4 != 0) {
        iVar4 = 1;
      }
    }
    else {
      if (*(int *)(pQVar19 + 0x1e4) == 0) {
        this = (QCameraHeapMemory *)operator_new(0x718);
        piVar8 = (int *)QCameraHeapMemory::QCameraHeapMemory(this,true);
        *(int **)(pQVar19 + 0x1e4) = piVar8;
        iVar4 = (**(code **)(*piVar8 + 8))(piVar8,1,0x18,0);
        if (iVar4 == 0) {
          uVar21 = **(undefined4 **)(pQVar19 + 0x1d8);
          pcVar25 = *(code **)((*(undefined4 **)(pQVar19 + 0x1d8))[1] + 0xc);
          uVar17 = QCameraMemory::getFd(*(QCameraMemory **)(pQVar19 + 0x1e4),0);
          iVar4 = (**(code **)(**(int **)(pQVar19 + 0x1e4) + 0x24))(*(int **)(pQVar19 + 0x1e4),0);
          *piVar31 = iVar4;
          iVar4 = (*pcVar25)(uVar21,2,uVar17,0x18);
          if (-1 < iVar4) {
            puVar7 = (undefined4 *)
                     (**(code **)(**(int **)(pQVar19 + 0x1e4) + 0x24))(*(int **)(pQVar19 + 0x1e4),0)
            ;
            *(undefined4 **)(pQVar19 + 0x1e8) = puVar7;
            goto LAB_000f7e38;
          }
          if (*(int *)(piVar31[0xd] + 0x20) != 0) {
            uVar17 = 0x38d6;
            *piVar31 = DAT_000f8100 + 0xf80c0;
            iVar4 = DAT_000f8104 + 0xf80c8;
            goto LAB_000f7ee6;
          }
          goto LAB_000f7eea;
        }
        if (*(int *)(piVar31[0xd] + 0x20) != 0) {
          *piVar31 = DAT_000f80f8 + 0xf7ec2;
          mm_camera_debug_log(1,1,DAT_000f80fc + 0xf7eca,0x38c9);
        }
      }
      else {
        puVar7 = *(undefined4 **)(pQVar19 + 0x1e8);
LAB_000f7e38:
        uVar17 = 1;
        iVar4 = piVar31[0xe6];
        *puVar7 = 1;
        QVar3 = pQVar19[0x808];
        *(uint *)(*(int *)(pQVar19 + 0x1e8) + 8) = (byte)QVar3 ^ 1;
        if ((byte)QVar3 == 0) {
          uVar17 = 2;
        }
        *(undefined4 *)(*(int *)(pQVar19 + 0x1e8) + 4) = uVar17;
        *(undefined4 *)(*(int *)(pQVar19 + 0x1e8) + 0xc) =
             *(undefined4 *)(iVar4 + *(int *)(pQVar19 + 0x804) * 4);
        iVar4 = (**(code **)((*(undefined4 **)(pQVar19 + 0x1d8))[1] + 0x94))
                          (**(undefined4 **)(pQVar19 + 0x1d8),*(undefined4 *)(pQVar19 + 0x1e8));
        if (-1 < iVar4) goto LAB_000f7e80;
        if (*(int *)(piVar31[0xd] + 0x20) != 0) {
          uVar17 = 0x38f1;
          *piVar31 = DAT_000f8108 + 0xf7ee0;
          iVar4 = DAT_000f810c + 0xf7ee8;
LAB_000f7ee6:
          mm_camera_debug_log(1,1,iVar4,uVar17);
        }
LAB_000f7eea:
        (**(code **)(**(int **)(pQVar19 + 0x1e4) + 0xc))();
      }
      if (*(int **)(pQVar19 + 0x1e4) != (int *)0x0) {
        (**(code **)(**(int **)(pQVar19 + 0x1e4) + 0x2c))();
      }
      iVar4 = 1;
      *(undefined4 *)(pQVar19 + 0x1e4) = 0;
    }
  }
  else {
    iVar16 = *(int *)(DAT_000f77bc + 0xf7498);
    if (*(int *)(iVar16 + 0x28) != 0) {
      local_398 = DAT_000f77c0 + 0xf74a8;
      mm_camera_debug_log(1,3,DAT_000f77c4 + 0xf74b0,0x37a7);
    }
    iVar4 = sendStreamConfigInfo(pQVar19,local_190);
    piVar31 = &local_398;
    if (*(int *)(iVar16 + 0x28) != 0) {
      local_398 = DAT_000f77c8 + 0xf74d0;
      mm_camera_debug_log(1,3,DAT_000f77cc + 0xf74d8,0x37a9);
      piVar31 = &local_398;
    }
  }
  piVar9 = (int *)piVar31[0xc];
LAB_000f7f0a:
  if (*piVar9 == *(int *)((int)piVar31 + 0x370)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

