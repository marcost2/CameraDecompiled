
/* qcamera::QCameraPostProcessor::getJpegEncodingConfig(mm_jpeg_encode_params_t&,
   qcamera::QCameraStream*, qcamera::QCameraStream*) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::getJpegEncodingConfig
          (QCameraPostProcessor *this,mm_jpeg_encode_params_t *param_1,QCameraStream *param_2,
          QCameraStream *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  size_t __size;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined auVar15 [16];
  int local_3d4;
  cam_format_t local_3d0;
  cam_format_t local_3cc;
  int local_3c8;
  int iStack964;
  int local_3c0;
  int local_3bc;
  undefined8 local_3b8;
  int local_3b0;
  int iStack940;
  QCameraPostProcessor *local_3a8;
  undefined8 uStack932;
  undefined4 uStack924;
  undefined4 local_398;
  undefined4 uStack916;
  undefined4 local_388;
  undefined4 uStack900;
  undefined4 local_224;
  cam_frame_len_offset_t acStack544 [32];
  undefined4 local_200;
  undefined4 uStack508;
  size_t local_9c;
  char acStack152 [92];
  int local_3c;
  
  piVar12 = *(int **)(DAT_000d391c + 0xd3638);
  local_3c = *piVar12;
  iVar13 = *(int *)(DAT_000d3920 + 0xd3646);
  if (*(int *)(iVar13 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d3928 + 0xd3662,0x20f,DAT_000d3924 + 0xd365a);
  }
  iVar1 = QCameraParametersIntf::generateThumbFromMain
                    ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
  property_get(DAT_000d392c + 0xd367e,acStack152,DAT_000d3930 + 0xd3680);
  if (iVar1 != 0) {
    param_3 = (QCameraStream *)0x0;
  }
  iVar1 = atoi(acStack152);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = count_leading_zeroes((uint)(byte)this[0x2c8]);
    uVar2 = uVar2 >> 5;
  }
  this[0x2c9] = SUB41(uVar2,0);
  *(uint *)(param_1 + 80000) = uVar2;
  local_3b8 = 0;
  local_3b0 = 0;
  iStack940 = 0;
  QCameraStream::getCropInfo(param_2,(cam_rect_t *)&local_3b8);
  local_3c0 = 0;
  local_3bc = 0;
  QCameraStream::getFrameDimension(param_2,(cam_dimension_t *)&local_3c0);
  iVar1 = QCameraParametersIntf::isHDROutputCropEnabled
                    ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
  if (iVar1 == 0) {
    local_3d4 = local_3bc;
    iVar1 = local_3c0;
  }
  else {
    local_3d4 = local_3bc;
    if (iStack940 != 0) {
      local_3d4 = iStack940;
    }
    iVar1 = local_3b0;
    if (local_3b0 == 0) {
      iVar1 = local_3c0;
    }
  }
  iVar3 = QCamera2HardwareInterface::needRotationReprocess
                    (*(QCamera2HardwareInterface **)(this + 8));
  if (iVar3 == 0) {
    uVar4 = QCameraParametersIntf::getJpegRotation
                      ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
    *(undefined4 *)(param_1 + 0x13858) = uVar4;
  }
  *(int *)(param_1 + 0x13864) = local_3bc;
  *(int *)(param_1 + 0x13860) = local_3c0;
  *(int *)(param_1 + 0x1386c) = local_3d4;
  *(int *)(param_1 + 0x13868) = iVar1;
  *(int *)(this + 0x2f8) = iVar1;
  *(int *)(this + 0x2fc) = local_3d4;
  *(undefined4 *)(param_1 + 0x13830) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0x13834) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x13c) = 1;
  property_get(DAT_000d3934 + 0xd3796,acStack152,DAT_000d3938 + 0xd3798);
  iVar3 = atoi(acStack152);
  if ((iVar3 == 1) && (*(undefined4 *)(this + 0x13c) = 0, *(int *)(iVar13 + 0x28) != 0)) {
    mm_camera_debug_log(1,3,DAT_000d3940 + 0xd37c6,0x247,DAT_000d393c + 0xd37ba,0);
  }
  uVar4 = 0;
  local_3c8 = 0;
  iStack964 = 0;
  QCamera2HardwareInterface::getThumbnailSize
            (*(QCamera2HardwareInterface **)(this + 8),(cam_dimension_t *)&local_3c8);
  iVar3 = local_3c8;
  if (local_3c8 != 0) {
    iVar3 = iStack964;
  }
  if (local_3c8 != 0 && iVar3 != 0) {
    uVar4 = *(undefined4 *)(this + 0x13c);
  }
  else {
    *(undefined4 *)(this + 0x13c) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  local_3cc = 1;
  QCameraStream::getFormat(param_2,&local_3cc);
  if (local_3cc - 1 < 7) {
    uVar4 = *(undefined4 *)(DAT_000d3944 + 0xd380e + (local_3cc - 1) * 4);
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x13810) = uVar4;
  iVar3 = QCamera2HardwareInterface::getJpegQuality();
  if (iVar3 == 0) {
    if (*(int *)(iVar13 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000d394c + 0xd3844,0x25c,DAT_000d3948 + 0xd383c);
    }
    iVar3 = 0x55;
  }
  *(int *)(param_1 + 0x13818) = iVar3;
  __aeabi_memclr8(acStack544,0x188);
  QCameraStream::getFrameOffset(param_2,acStack544);
  piVar11 = *(int **)(param_2 + 0x10c);
  if (piVar11 == (int *)0x0) {
    if (*(int *)(iVar13 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d3954 + 0xd3912,0x266,DAT_000d3950 + 0xd390a);
    }
    uVar4 = 0xffffffea;
LAB_000d3d94:
    iVar1 = *(int *)(this + 0x2cc);
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        if (*(void **)(this + iVar3 * 4 + 0x38) != (void *)0x0) {
          free(*(void **)(this + iVar3 * 4 + 0x38));
          *(undefined4 *)(this + iVar3 * 4 + 0x38) = 0;
          iVar1 = *(int *)(this + 0x2cc);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    if (*(int *)(iVar13 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000d3e28 + 0xd3dd8,0x300,DAT_000d3e24 + 0xd3dce,uVar4);
    }
    goto LAB_000d3dda;
  }
  iVar3 = QCameraMemory::getCnt((QCameraMemory *)piVar11);
  *(int *)param_1 = iVar3;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    puVar8 = (uint *)(param_1 + 0x1ac);
    uVar9 = 0;
    do {
      puVar5 = (uint *)(**(code **)(*piVar11 + 0x1c))(piVar11,uVar9,0);
      if (puVar5 != (uint *)0x0) {
        *puVar8 = uVar9;
        puVar8[-100] = puVar5[1];
        puVar8[-0x66] = *puVar5;
        uVar2 = QCameraMemory::getFd((QCameraMemory *)piVar11,uVar9);
        puVar8[-99] = 0;
        puVar8[-0x65] = uVar2;
        __aeabi_memcpy8(puVar8 + -0x62,acStack544,0x188);
      }
      uVar2 = *(uint *)param_1;
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 0x68;
    } while (uVar9 < uVar2);
  }
  puVar14 = (undefined4 *)(param_1 + 0x13840);
  if (*(int *)(iVar13 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000d3cb0 + 0xd39b2,0x27c,DAT_000d3cac + 0xd3996,uVar2,local_200,
                        uStack508,local_9c,*(undefined4 *)(param_1 + 0x13858),local_3c0,local_3bc,
                        iVar1,local_3d4);
  }
  if (*(int *)(this + 0x13c) == 1) {
    QCamera2HardwareInterface::getThumbnailSize
              (*(QCamera2HardwareInterface **)(this + 8),(cam_dimension_t *)puVar14);
    if (param_3 == (QCameraStream *)0x0) {
      param_3 = param_2;
    }
    iVar1 = QCameraParametersIntf::getJpegRotation
                      ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
    if (((iVar1 == 0x5a) ||
        (iVar1 = QCameraParametersIntf::getJpegRotation
                           ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac)), iVar1 == 0x10e))
       && (iVar1 = QCamera2HardwareInterface::needRotationReprocess
                             (*(QCamera2HardwareInterface **)(this + 8)), iVar1 != 0)) {
      uVar4 = *(undefined4 *)(param_1 + 0x13840);
      *puVar14 = *(undefined4 *)(param_1 + 0x13844);
      *(undefined4 *)(param_1 + 0x13844) = uVar4;
    }
    piVar11 = *(int **)(param_3 + 0x10c);
    if (piVar11 == (int *)0x0) {
      if (*(int *)(iVar13 + 0x20) == 0) {
        uVar4 = 0xffffffea;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000d3e04 + 0xd3af6,0x28e,DAT_000d3e00 + 0xd3aee);
        uVar4 = 0xffffffea;
      }
      goto LAB_000d3d94;
    }
    __aeabi_memclr8(&local_3a8,0x188);
    QCameraStream::getFrameOffset(param_3,(cam_frame_len_offset_t *)&local_3a8);
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = QCameraMemory::getCnt((QCameraMemory *)piVar11);
    if (iVar1 != 0) {
      uVar2 = 0;
      puVar10 = (undefined4 *)(param_1 + 0x6814);
      do {
        puVar6 = (undefined4 *)(**(code **)(*piVar11 + 0x1c))(piVar11,uVar2,0);
        if (puVar6 != (undefined4 *)0x0) {
          puVar10[0x66] = uVar2;
          puVar10[2] = puVar6[1];
          *puVar10 = *puVar6;
          uVar4 = QCameraMemory::getFd((QCameraMemory *)piVar11,uVar2);
          puVar10[3] = 0;
          puVar10[1] = uVar4;
          __aeabi_memcpy8(puVar10 + 4,&local_3a8,0x188);
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        }
        uVar2 = uVar2 + 1;
        uVar9 = QCameraMemory::getCnt((QCameraMemory *)piVar11);
        puVar10 = puVar10 + 0x68;
      } while (uVar2 < uVar9);
    }
    local_3d0 = 1;
    QCameraStream::getFormat(param_3,&local_3d0);
    if (local_3d0 - 1 < 7) {
      uVar4 = *(undefined4 *)(DAT_000d3e08 + 0xd3ad4 + (local_3d0 - 1) * 4);
    }
    else {
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 0x13814) = uVar4;
    if (param_3 != param_2) {
      local_3b8 = 0;
      local_3b0 = 0;
      iStack940 = 0;
      QCameraStream::getCropInfo(param_3,(cam_rect_t *)&local_3b8);
    }
    local_3c0 = 0;
    local_3bc = 0;
    QCameraStream::getFrameDimension(param_3,(cam_dimension_t *)&local_3c0);
    *(int *)(param_1 + 0x13838) = local_3c0;
    *(int *)(param_1 + 0x1383c) = local_3bc;
    iVar1 = QCamera2HardwareInterface::needRotationReprocess
                      (*(QCamera2HardwareInterface **)(this + 8));
    if (iVar1 == 0) {
      uVar4 = QCameraParametersIntf::getJpegRotation
                        ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
      *(undefined4 *)(param_1 + 0x1385c) = uVar4;
    }
    *(undefined8 *)(param_1 + 0x13848) = local_3b8;
    *(longlong *)(param_1 + 0x13850) =
         SUB168(CONCAT412(iStack940,CONCAT48(local_3b0,local_3b8)) >> 0x40,0);
    iVar1 = QCameraParametersIntf::generateThumbFromMain
                      ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
    if ((local_3d0 == 0x66) || (iVar1 != 0)) {
      param_1[0x1388c] = (mm_jpeg_encode_params_t)0x0;
    }
    else {
      iVar1 = QCameraParametersIntf::useJpegExifRotation
                        ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
      if (iVar1 == 0) {
        iVar1 = QCameraParametersIntf::getJpegRotation
                          ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        uVar2 = count_leading_zeroes(iVar1);
        param_1[0x1388c] = SUB41(uVar2 >> 5,0);
        if (iVar1 != 0) goto LAB_000d3bf8;
      }
      else {
        param_1[0x1388c] = (mm_jpeg_encode_params_t)0x1;
      }
      iVar1 = QCameraParametersIntf::useJpegExifRotation
                        ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
      if (iVar1 != 0) {
        uVar4 = QCameraParametersIntf::getJpegExifRotation
                          ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        *(undefined4 *)(param_1 + 0x1385c) = uVar4;
      }
    }
LAB_000d3bf8:
    if (*(int *)(iVar13 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000d3e10 + 0xd3c56,0x2cf,DAT_000d3e0c + 0xd3c3c,
                          *(undefined4 *)(param_1 + 4),local_388,uStack900,local_224,
                          *(undefined4 *)(param_1 + 0x1385c),*(int *)(param_1 + 0x13838),
                          *(undefined4 *)(param_1 + 0x1383c),*puVar14,
                          *(undefined4 *)(param_1 + 0x13844));
    }
  }
  *(undefined4 *)(param_1 + 8) = 1;
  uVar4 = 2;
  if (this[0x2c9] == (QCameraPostProcessor)0x0) {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0x13884) = 0;
  if (this[0x2ca] == (QCameraPostProcessor)0x0) {
    *(undefined4 *)(this + 0x2cc) = uVar4;
    __size = local_9c;
LAB_000d3cba:
    auVar15 = ZEXT816(0);
    puVar14 = (undefined4 *)(param_1 + 0xd014);
    uVar2 = 0;
    do {
      if (*(void **)(this + uVar2 * 4 + 0x38) != (void *)0x0) {
        free(*(void **)(this + uVar2 * 4 + 0x38));
      }
      uStack932 = SUB168(auVar15,0);
      uStack924 = SUB164(auVar15 >> 0x40,0);
      local_398 = SUB164(auVar15 >> 0x60,0);
      uStack916 = 0;
      local_3a8 = this;
      puVar7 = (undefined8 *)malloc(__size);
      *(undefined8 **)(this + uVar2 * 4 + 0x38) = puVar7;
      if (puVar7 == (undefined8 *)0x0) {
        if (*(int *)(iVar13 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d3e20 + 0xd3d8a,0x2ea,DAT_000d3e1c + 0xd3d82);
        }
        uVar4 = 0xfffffff4;
        goto LAB_000d3d94;
      }
      if (this[0x2ca] != (QCameraPostProcessor)0x0) {
        *puVar7 = SUB128(CONCAT84(uStack932,local_3a8),0);
        puVar7[1] = SUB168(CONCAT412(uStack924,CONCAT84(uStack932,local_3a8)) >> 0x40,0);
        puVar7[2] = CONCAT44(uStack916,local_398);
      }
      puVar14[0x66] = uVar2;
      puVar14[2] = local_9c;
      uVar4 = *(undefined4 *)(this + uVar2 * 4 + 0x38);
      puVar14[3] = 0;
      *puVar14 = uVar4;
      puVar14[1] = 0xffffffff;
      __aeabi_memcpy8(puVar14 + 4,acStack544,0x188);
      uVar2 = uVar2 + 1;
      puVar14 = puVar14 + 0x68;
    } while (uVar2 < *(uint *)(this + 0x2cc));
  }
  else {
    *(undefined4 *)(param_1 + 0x13884) = *(undefined4 *)(DAT_000d3e14 + 0xd3c88);
    *(undefined4 *)(param_1 + 0x13888) = *(undefined4 *)(DAT_000d3e18 + 0xd3c92);
    iVar1 = *(int *)param_1;
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(this + 0x2cc) = iVar1;
    if (iVar1 != 0) {
      __size = 0x18;
      goto LAB_000d3cba;
    }
  }
  if (*(int *)(iVar13 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d3e30 + 0xd3d62,0x2fa,DAT_000d3e2c + 0xd3d5a);
  }
  uVar4 = 0;
LAB_000d3dda:
  if (*piVar12 == local_3c) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

