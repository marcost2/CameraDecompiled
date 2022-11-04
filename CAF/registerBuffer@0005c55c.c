
/* qcamera::QCamera3ReprocessChannel::registerBuffer(native_handle const**, cam_is_type_t) */

undefined4
qcamera::QCamera3ReprocessChannel::registerBuffer(native_handle **param_1,cam_stream_type_t param_2)

{
  int iVar1;
  native_handle *pnVar2;
  native_handle *extraout_r1;
  native_handle *pnVar3;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  native_handle *in_r2;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  cam_stream_type_t in_stack_ffffffcc;
  cam_stream_type_t cVar7;
  ScopedTraceDbg aSStack40 [12];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0005c684 + 0x5c56e);
  local_1c = *piVar4;
  iVar1 = DAT_0005c688 + 0x5c57c;
  ScopedTraceDbg::ScopedTraceDbg(aSStack40,CONCAT44(in_stack_ffffffcc,iVar1),(char *)param_2);
  param_1[0x1d] = in_r2;
  if (param_2 == 0) {
    pnVar3 = extraout_r1;
    if (*(int *)(*(int *)(DAT_0005c68c + 0x5c5c4) + 0x20) == 0) {
LAB_0005c62c:
      uVar6 = CONCAT44(pnVar3,0xffffffea);
      goto LAB_0005c630;
    }
    iVar1 = DAT_0005c690 + 0x5c5ce;
  }
  else {
    pnVar2 = (native_handle *)QCamera3StreamMem::getCnt((QCamera3StreamMem *)(param_1 + 0x3d));
    pnVar3 = param_1[0x1e] + -1;
    if (pnVar2 <= pnVar3) {
      if (param_1[0x11] == (native_handle *)0x0) {
        uVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_1[0x1d]);
        cVar7 = (cam_stream_type_t)uVar6;
        if (cVar7 != 0) {
          if (*(int *)(*(int *)(DAT_0005c6a4 + 0x5c65e) + 0x20) != 0) {
            iVar1 = DAT_0005c6a8 + 0x5c66a;
            mm_camera_debug_log();
            in_stack_ffffffcc = cVar7;
            uVar6 = uVar6 & 0xffffffff | (ulonglong)extraout_r1_02 << 0x20;
          }
          goto LAB_0005c630;
        }
      }
      QCamera3Stream::getMyType((QCamera3Stream *)param_1[9]);
      uVar5 = QCamera3StreamMem::registerBuffer(param_1 + 0x3d,param_2);
      uVar6 = uVar5 & 0xffffffff00000000;
      if (((int)uVar5 != -0x11 && (int)uVar5 != 0) &&
         (uVar6 = uVar5, *(int *)(*(int *)(DAT_0005c6b0 + 0x5c60c) + 0x20) != 0)) {
        iVar1 = DAT_0005c6b4 + 0x5c616;
        mm_camera_debug_log();
        uVar6 = uVar5 & 0xffffffff | (ulonglong)extraout_r1_01 << 0x20;
        in_stack_ffffffcc = param_2;
      }
      goto LAB_0005c630;
    }
    if (*(int *)(*(int *)(DAT_0005c698 + 0x5c5a4) + 0x20) == 0) goto LAB_0005c62c;
    iVar1 = DAT_0005c69c + 0x5c5b0;
  }
  mm_camera_debug_log();
  uVar6 = CONCAT44(extraout_r1_00,0xffffffea);
LAB_0005c630:
  ScopedTraceDbg::_ScopedTraceDbg
            (aSStack40,CONCAT44(in_stack_ffffffcc,iVar1),(char *)(uVar6 >> 0x20));
  if (*piVar4 == local_1c) {
    return (int)uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

