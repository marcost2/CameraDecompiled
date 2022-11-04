
/* qcamera::QCamera3ProcessingChannel::registerBuffer(native_handle const**, cam_is_type_t) */

undefined4
qcamera::QCamera3ProcessingChannel::registerBuffer
          (native_handle **param_1,cam_stream_type_t param_2)

{
  int iVar1;
  native_handle *pnVar2;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  native_handle *in_r2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  cam_stream_type_t in_stack_ffffffcc;
  cam_stream_type_t cVar6;
  ScopedTraceDbg aSStack40 [12];
  int local_1c;
  
  piVar3 = *(int **)(DAT_00058398 + 0x582a6);
  local_1c = *piVar3;
  iVar1 = DAT_0005839c + 0x582b0;
  ScopedTraceDbg::ScopedTraceDbg(aSStack40,CONCAT44(in_stack_ffffffcc,iVar1),(char *)param_2);
  param_1[0x1d] = in_r2;
  pnVar2 = (native_handle *)QCamera3StreamMem::getCnt((QCamera3StreamMem *)(param_1 + 0x102));
  if (param_1[0x48f] + -1 < pnVar2) {
    if (*(int *)(*(int *)(DAT_000583a0 + 0x582da) + 0x20) == 0) {
      uVar5 = CONCAT44(param_1[0x48f] + -1,0xffffffea);
    }
    else {
      iVar1 = DAT_000583a4 + 0x582e4;
      mm_camera_debug_log();
      uVar5 = CONCAT44(extraout_r1,0xffffffea);
    }
  }
  else {
    if (param_1[0x11] == (native_handle *)0x0) {
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_1[0x1d]);
      cVar6 = (cam_stream_type_t)uVar5;
      if (cVar6 != 0) {
        if (*(int *)(*(int *)(DAT_000583ac + 0x58360) + 0x20) != 0) {
          iVar1 = DAT_000583b0 + 0x5836a;
          mm_camera_debug_log();
          in_stack_ffffffcc = cVar6;
          uVar5 = uVar5 & 0xffffffff | (ulonglong)extraout_r1_01 << 0x20;
        }
        goto LAB_0005837c;
      }
    }
    QCamera3Stream::getMyType((QCamera3Stream *)param_1[9]);
    uVar4 = QCamera3StreamMem::registerBuffer(param_1 + 0x102,param_2);
    uVar5 = uVar4 & 0xffffffff00000000;
    if (((int)uVar4 != -0x11 && (int)uVar4 != 0) &&
       (uVar5 = uVar4, *(int *)(*(int *)(DAT_000583b8 + 0x58322) + 0x20) != 0)) {
      iVar1 = DAT_000583bc + 0x5832c;
      mm_camera_debug_log();
      uVar5 = uVar4 & 0xffffffff | (ulonglong)extraout_r1_00 << 0x20;
      in_stack_ffffffcc = param_2;
    }
  }
LAB_0005837c:
  ScopedTraceDbg::_ScopedTraceDbg
            (aSStack40,CONCAT44(in_stack_ffffffcc,iVar1),(char *)(uVar5 >> 0x20));
  if (*piVar3 == local_1c) {
    return (int)uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

