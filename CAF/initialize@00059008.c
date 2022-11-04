
/* qcamera::QCamera3MetadataChannel::initialize(cam_is_type_t) */

undefined4
qcamera::QCamera3MetadataChannel::initialize(camera3_device *param_1,camera3_callback_ops *param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  uint extraout_r1_01;
  int *piVar3;
  ulonglong uVar4;
  undefined4 in_stack_ffffffc4;
  cam_is_type_t in_stack_ffffffcc;
  ScopedTraceDbg aSStack32 [12];
  int local_14;
  
  piVar3 = *(int **)(DAT_000590d0 + 0x59016);
  local_14 = *piVar3;
  iVar1 = DAT_000590d4 + 0x59020;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffc4,iVar1),(char *)param_2);
  if ((*(int *)(param_1 + 0x90) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    *(camera3_callback_ops **)(param_1 + 0x74) = param_2;
    iVar1 = 1;
    in_stack_ffffffc4 = 1;
    uVar4 = QCamera3Channel::addStream
                      ((cam_stream_type_t)param_1,7,(cam_dimension_t)0x7c,0x1174b8,'\x01',
                       (ulonglong)CONCAT14(param_1[0x78],1),in_stack_ffffffcc,
                       *(uint *)(param_1 + 0x68));
    if ((0x7fffffff < (uint)uVar4) && (*(int *)(*(int *)(DAT_000590e4 + 0x590ac) + 0x20) != 0)) {
      iVar1 = DAT_000590e8 + 0x590b8;
      mm_camera_debug_log();
      uVar4 = uVar4 & 0xffffffff | (ulonglong)extraout_r1_01 << 0x20;
    }
  }
  else {
    uVar2 = extraout_r1;
    if (*(int *)(*(int *)(DAT_000590d8 + 0x5903c) + 0x20) != 0) {
      iVar1 = DAT_000590dc + 0x59046;
      mm_camera_debug_log();
      uVar2 = extraout_r1_00;
    }
    uVar4 = CONCAT44(uVar2,0xffffffea);
  }
  ScopedTraceDbg::_ScopedTraceDbg
            (aSStack32,CONCAT44(in_stack_ffffffc4,iVar1),(char *)(uVar4 >> 0x20));
  if (*piVar3 == local_14) {
    return (int)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

