
/* qcamera::QCamera3YUVChannel::initialize(cam_is_type_t) */

undefined4
qcamera::QCamera3YUVChannel::initialize(camera3_device *param_1,camera3_callback_ops *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  undefined4 extraout_r1_01;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int in_stack_fffffe0c;
  cam_is_type_t in_stack_fffffe14;
  ScopedTraceDbg aSStack432 [8];
  undefined auStack424 [388];
  undefined4 local_24;
  int local_20;
  
  piVar5 = *(int **)(DAT_00059e30 + 0x59c90);
  local_20 = *piVar5;
  iVar1 = DAT_00059e34 + 0x59c9e;
  ScopedTraceDbg::ScopedTraceDbg(aSStack432,CONCAT44(in_stack_fffffe0c,iVar1),(char *)param_2);
  iVar4 = *(int *)(param_1 + 0x1238);
  if (iVar4 == 0) {
    uVar3 = extraout_r1;
    if (*(int *)(*(int *)(DAT_00059e38 + 0x59d8a) + 0x20) != 0) {
      iVar1 = DAT_00059e3c + 0x59d94;
      mm_camera_debug_log();
      uVar3 = extraout_r1_00;
    }
    lVar6 = CONCAT44(uVar3,0xffffffed);
  }
  else {
    lVar6 = (ulonglong)extraout_r1 << 0x20;
    if (*(int *)(param_1 + 0x44) == 0) {
      *(camera3_callback_ops **)(param_1 + 0x74) = param_2;
      uVar2 = QCamera3Channel::getStreamDefaultFormat((QCamera3Channel *)0x0,5);
      *(undefined4 *)(param_1 + 0x1244) = uVar2;
      iVar1 = *(int *)(iVar4 + 8);
      in_stack_fffffe0c = 1;
      lVar6 = QCamera3Channel::addStream
                        ((cam_stream_type_t)param_1,*(cam_format_t *)(param_1 + 0x1240),
                         SUB41(uVar2,0),*(cam_rotation_t *)(iVar4 + 4),(uchar)iVar1,
                         (ulonglong)CONCAT14(param_1[0x123c],1),in_stack_fffffe14,
                         *(uint *)(param_1 + 0x68));
      iVar4 = (int)lVar6;
      if (iVar4 < 0) {
        if (*(int *)(*(int *)(DAT_00059e44 + 0x59db2) + 0x20) == 0) goto LAB_00059e14;
        iVar1 = DAT_00059e48 + 0x59dbc;
      }
      else {
        __aeabi_memclr4(auStack424,0x188);
        lVar6 = mm_stream_calc_offset_snapshot();
        iVar4 = (int)lVar6;
        if (iVar4 < 0) {
          if (*(int *)(*(int *)(DAT_00059e50 + 0x59dd0) + 0x20) == 0) goto LAB_00059e14;
          iVar1 = DAT_00059e54 + 0x59dda;
        }
        else {
          lVar6 = CONCAT44(0x2ed8,iVar4);
          *(undefined4 *)(param_1 + 0x2ed8) = local_24;
          if (iVar4 == 0) {
            lVar6 = QCamera3ProcessingChannel::initialize(param_1,(camera3_callback_ops *)0x2ed8);
            iVar4 = (int)lVar6;
            if ((iVar4 == 0) || (*(int *)(*(int *)(DAT_00059e68 + 0x59df8) + 0x20) == 0))
            goto LAB_00059e14;
            iVar1 = DAT_00059e6c + 0x59e02;
            in_stack_fffffe0c = iVar4;
          }
          else {
            if (*(int *)(*(int *)(DAT_00059e5c + 0x59d68) + 0x20) == 0) goto LAB_00059e14;
            iVar1 = DAT_00059e60 + 0x59d74;
            in_stack_fffffe0c = iVar4;
          }
        }
      }
      mm_camera_debug_log();
      lVar6 = CONCAT44(extraout_r1_01,iVar4);
    }
  }
LAB_00059e14:
  ScopedTraceDbg::_ScopedTraceDbg
            (aSStack432,CONCAT44(in_stack_fffffe0c,iVar1),(char *)((ulonglong)lVar6 >> 0x20));
  if (*piVar5 == local_20) {
    return (int)lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

