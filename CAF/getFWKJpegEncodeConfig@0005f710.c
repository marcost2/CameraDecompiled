
/* qcamera::QCamera3PostProcessor::getFWKJpegEncodeConfig(mm_jpeg_encode_params_t&,
   qcamera::qcamera_fwk_input_pp_data_t*, qcamera::jpeg_settings_t*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::getFWKJpegEncodeConfig
          (QCamera3PostProcessor *this,mm_jpeg_encode_params_t *param_1,
          qcamera_fwk_input_pp_data_t *param_2,jpeg_settings_t *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  QCamera3PostProcessor *this_00;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  undefined auStack432 [392];
  int local_28;
  
  piVar7 = *(int **)(DAT_0005f8dc + 0x5f724);
  local_28 = *piVar7;
  iVar8 = *(int *)(DAT_0005f8e0 + 0x5f732);
  if (*(int *)(iVar8 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  uVar2 = 0xffffffea;
  if (param_2 != (qcamera_fwk_input_pp_data_t *)0x0 && param_3 != (jpeg_settings_t *)0x0) {
    iVar3 = QCamera3StreamMem::getSize(*(QCamera3StreamMem **)(this + 0x1ec),*(uint *)param_3);
    if (iVar3 == -0x4b) {
      if (*(int *)(iVar8 + 0x20) == 0) {
        uVar2 = 0xffffffea;
      }
      else {
        mm_camera_debug_log();
        uVar2 = 0xffffffea;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x13830) = *(undefined4 *)(this + 8);
      *(undefined4 *)(param_1 + 0x13834) = *(undefined4 *)(this + 0xc);
      iVar4 = *(int *)(param_3 + 0xc);
      bVar9 = iVar4 == 1;
      iVar5 = iVar4;
      if (0 < iVar4) {
        iVar5 = *(int *)(param_3 + 0x10);
      }
      iVar1 = iVar4 + -1;
      if (iVar4 >= 1) {
        bVar9 = iVar5 == 0;
        iVar1 = iVar5;
      }
      this_00 = (QCamera3PostProcessor *)
                (uint)(!bVar9 && iVar1 < 0 == (iVar4 < 1 && SBORROW4(iVar4,1)));
      *(QCamera3PostProcessor **)(this + 0x1e8) = this_00;
      *(QCamera3PostProcessor **)(param_1 + 0xc) = this_00;
      uVar2 = getColorfmtFromImgFmt(this_00,*(cam_format_t *)(param_2 + 0x448));
      *(undefined4 *)(param_1 + 0x13810) = uVar2;
      uVar6 = (uint)(byte)param_3[8];
      if (uVar6 == 0) {
        uVar6 = 0x55;
      }
      *(uint *)(param_1 + 0x13818) = uVar6;
      *(uint *)(param_1 + 0x1381c) = (uint)(byte)param_3[9];
      __aeabi_memcpy8(auStack432,param_2 + 0x454,0x188);
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      *(undefined4 *)param_1 = 1;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x438);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x434);
      uVar2 = *(undefined4 *)(param_2 + 0x430);
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      __aeabi_memcpy8(param_1 + 0x24,auStack432,0x188);
      if (*(int *)(this + 0x1e8) == 1) {
        *(undefined4 *)(param_1 + 4) = 1;
        __aeabi_memcpy8(param_1 + 0x6810,param_1 + 0x10,0x1a0);
      }
      *(undefined4 *)(param_1 + 0xd1ac) = 0;
      *(int *)(param_1 + 0xd01c) = iVar3;
      *(undefined4 *)(param_1 + 8) = 1;
      uVar2 = QCamera3StreamMem::getPtr(*(uint *)(this + 0x1ec));
      *(undefined4 *)(param_1 + 0xd014) = uVar2;
      uVar2 = QCamera3StreamMem::getFd(*(QCamera3StreamMem **)(this + 0x1ec),*(uint *)param_3);
      *(undefined4 *)(param_1 + 0xd020) = 0;
      *(undefined4 *)(param_1 + 0xd018) = uVar2;
      __aeabi_memcpy8(param_1 + 0xd024,auStack432,0x188);
      if (*(int *)(iVar8 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      uVar2 = 0;
    }
  }
  if (*piVar7 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

