
/* qcamera::QCamera2HardwareInterface::dumpFrameToFile(qcamera::QCameraStream*, mm_camera_buf_def*,
   unsigned int, char const*) */

void __thiscall
qcamera::QCamera2HardwareInterface::dumpFrameToFile
          (QCamera2HardwareInterface *this,QCameraStream *param_1,mm_camera_buf_def *param_2,
          uint param_3,char *param_4)

{
  bool bVar1;
  mm_camera_buf_def *pmVar2;
  uint uVar3;
  tm *__tp;
  int iVar4;
  ssize_t sVar5;
  uint uVar6;
  uint uVar7;
  size_t __n;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  size_t sVar14;
  undefined auVar15 [16];
  uint local_2ec;
  QCameraStream *local_2e8;
  int *piStack740;
  QCamera2HardwareInterface *local_2e0;
  mm_camera_buf_def *local_2dc;
  uint local_2d8;
  char *local_2d4;
  undefined4 local_2d0;
  undefined4 uStack716;
  time_t tStack708;
  uint local_2c0 [2];
  size_t local_2b8 [96];
  undefined8 local_138;
  undefined8 uStack304;
  undefined8 local_128;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 uStack272;
  undefined8 local_108;
  undefined8 uStack256;
  undefined8 local_f8;
  undefined8 uStack240;
  undefined8 local_e8;
  undefined8 uStack224;
  undefined8 local_d8;
  undefined8 uStack208;
  undefined8 local_c8;
  undefined8 uStack192;
  undefined8 local_b8;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 uStack160;
  char acStack152 [92];
  int local_3c;
  
  piVar13 = *(int **)(DAT_000d8984 + 0xd86c0);
  local_3c = *piVar13;
  property_get(DAT_000d8988 + 0xd86d2,acStack152,DAT_000d898c + 0xd86d4);
  if (param_1 == (QCameraStream *)0x0) {
    if (*(int *)(*(int *)(DAT_000d8990 + 0xd8742) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000d8998 + 0xd875e,0xc5a,DAT_000d8994 + 0xd8756);
    }
    goto LAB_000d8b40;
  }
  uVar3 = atoi(acStack152);
  if (this[0x1c23] != (QCamera2HardwareInterface)0x0) {
    uVar3 = 0x10;
  }
  if ((uVar3 & 0xff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 4);
    if ((param_2 == (mm_camera_buf_def *)0x0) || ((uVar3 & param_3) == 0)) goto LAB_000d8b3c;
    uVar8 = uVar3 >> 0x10;
    if (uVar3 >> 0x10 == 0) {
      uVar8 = 10;
    }
    uVar10 = uVar8;
    if (0xff < uVar8) {
      uVar10 = 0x100;
    }
    uVar7 = *(uint *)(param_1 + 0xc);
    uVar3 = (uVar3 << 0x10) >> 0x18;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    if (uVar7 == 0) {
      uVar7 = 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    if (uVar7 == (uVar7 / uVar3) * uVar3) {
      uVar3 = uVar6;
      if (0xff < uVar8) {
        uVar3 = 0;
      }
      if (uVar6 < 0x100) {
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
      if (uVar10 < uVar6) goto LAB_000d8b36;
      auVar15 = ZEXT816(0);
      local_d8 = 0;
      uStack208 = 0;
      local_e8 = 0;
      uStack224 = 0;
      local_f8 = 0;
      uStack240 = 0;
      local_108 = 0;
      uStack256 = 0;
      local_118 = 0;
      uStack272 = 0;
      local_128 = 0;
      uStack288 = 0;
      local_138 = 0;
      uStack304 = 0;
      local_c8 = 0;
      uStack192 = 0;
      local_2dc = param_2;
      time(&tStack708);
      __tp = localtime(&tStack708);
      local_b8 = SUB168(auVar15,0);
      uStack176 = SUB168(auVar15 >> 0x40,0);
      local_2d0 = 0;
      uStack716 = 0;
      local_a8 = local_b8;
      uStack160 = uStack176;
      QCameraStream::getFrameDimension(param_1,(cam_dimension_t *)&local_2d0);
      __aeabi_memclr8(local_2c0,0x188);
      QCameraStream::getFrameOffset(param_1,(cam_frame_len_offset_t *)local_2c0);
      if (__tp != (tm *)0x0) {
        strftime((char *)&local_138,0x80,(char *)(DAT_000d899c + 0xd880e),__tp);
      }
      android::String8::String8((String8 *)&local_2d4,(char *)&local_138);
      switch(param_3) {
      case 1:
        puVar9 = (undefined *)(DAT_000d8b78 + 0xd8884);
        break;
      case 2:
        puVar9 = (undefined *)(DAT_000d8b9c + 0xd88a2);
        break;
      default:
        if (*(int *)(*(int *)(DAT_000d8ba8 + 0xd88a8) + 0x20) == 0) {
          bVar1 = false;
        }
        else {
          mm_camera_debug_log(1,1,DAT_000d8bb0 + 0xd88c6,0xcd5,DAT_000d8bac + 0xd88bc,param_3);
          bVar1 = false;
        }
        goto LAB_000d8b2a;
      case 4:
        iVar4 = QCameraParametersIntf::isPostProcScaling((QCameraParametersIntf *)(this + 0x4ac));
        if (iVar4 == 0) {
          QCameraParametersIntf::getStreamDimension
                    ((QCameraParametersIntf *)(this + 0x4ac),3,(cam_dimension_t *)&local_2d0);
        }
        else {
          QCameraStream::getFrameDimension(param_1,(cam_dimension_t *)&local_2d0);
        }
        if (param_4 == (char *)0x0) {
          iVar4 = DAT_000d8b84 + 0xd8b6a;
        }
        else {
          iVar4 = DAT_000d8b80 + 0xd89d4;
        }
        FUN_000d6e38(&local_b8,0x20,0x20,iVar4);
        goto LAB_000d89f4;
      case 8:
        puVar9 = (undefined *)(DAT_000d8b7c + 0xd892c);
        break;
      case 0x10:
        QCameraParametersIntf::getStreamDimension
                  ((QCameraParametersIntf *)(this + 0x4ac),8,(cam_dimension_t *)&local_2d0);
        puVar9 = (undefined *)(DAT_000d8ba0 + 0xd8956);
        break;
      case 0x20:
        QCameraParametersIntf::getStreamDimension
                  ((QCameraParametersIntf *)(this + 0x4ac),3,(cam_dimension_t *)&local_2d0);
        puVar9 = (undefined *)(DAT_000d8ba4 + 0xd88f6);
        break;
      case 0x40:
        QCameraStream::getFrameDimension(param_1,(cam_dimension_t *)&local_2d0);
        if (param_4 == (char *)0x0) {
          puVar9 = (undefined *)(DAT_000d8b98 + 0xd89ea);
        }
        else {
          puVar9 = &UNK_000d8982 + DAT_000d8b94;
        }
      }
      FUN_000d6e38(&local_b8,0x20,0x20,puVar9);
LAB_000d89f4:
      local_2e0 = this + 0x1c23;
      android::String8::append((char *)&local_2d4);
      iVar4 = open(local_2d4,0x42,0x1ff);
      if (iVar4 < 0) {
        if (*(int *)(*(int *)(DAT_000d8bb4 + 0xd8ab2) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d8bbc + 0xd8aca,0xcf9,DAT_000d8bb8 + 0xd8ac2);
        }
        iVar12 = 0;
      }
      else {
        local_2ec = uVar6;
        local_2e8 = param_1;
        piStack740 = piVar13;
        fchmod(iVar4,0x1a4);
        pmVar2 = local_2dc;
        if (local_2c0[0] == 0) {
          iVar12 = 0;
        }
        else {
          uVar3 = 0;
          iVar12 = 0;
          do {
            local_2d8 = uVar3;
            sVar14 = local_2b8[uVar3 * 0xc];
            if (uVar3 != 0) {
              sVar14 = sVar14 + (&local_2ec)[uVar3 * 0xc];
            }
            __n = local_2b8[uVar3 * 0xc + 10];
            if (__n != 0) {
              sVar5 = write(iVar4,(void *)(*(int *)(local_2dc + 0x208) + sVar14),__n);
              iVar12 = iVar12 + sVar5;
              sVar14 = sVar14 + local_2b8[uVar3 * 0xc + 10];
            }
            if (0 < (int)local_2b8[uVar3 * 0xc + 7]) {
              iVar11 = 0;
              do {
                sVar5 = write(iVar4,(void *)(*(int *)(pmVar2 + 0x208) + sVar14),
                              local_2b8[uVar3 * 0xc + 6]);
                iVar12 = iVar12 + sVar5;
                iVar11 = iVar11 + 1;
                sVar14 = sVar14 + local_2b8[uVar3 * 0xc + 3];
              } while (iVar11 < (int)local_2b8[uVar3 * 0xc + 7]);
            }
            uVar3 = local_2d8 + 1;
          } while (uVar3 < local_2c0[0]);
        }
        if (*(int *)(*(int *)(DAT_000d8b88 + 0xd8adc) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000d8b90 + 0xd8af6,0xcf6,DAT_000d8b8c + 0xd8aec,iVar12);
        }
        close(iVar4);
        uVar6 = local_2ec;
        param_1 = local_2e8;
        piVar13 = piStack740;
      }
      if (*local_2e0 == (QCamera2HardwareInterface)0x0) {
        uVar6 = uVar6 + 1;
      }
      else {
        __strlcpy_chk(this + 0x1c24,local_2d4,0x40,0x40);
        *(int *)(this + 0x1c64) = iVar12;
      }
      bVar1 = true;
LAB_000d8b2a:
      android::String8::_String8((String8 *)&local_2d4);
      if (!bVar1) goto LAB_000d8b40;
      uVar7 = *(uint *)(param_1 + 0xc);
    }
LAB_000d8b36:
    *(uint *)(param_1 + 0xc) = uVar7 + 1;
  }
LAB_000d8b3c:
  *(uint *)(param_1 + 4) = uVar6;
LAB_000d8b40:
  if (*piVar13 == local_3c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

