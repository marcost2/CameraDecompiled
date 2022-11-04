
/* qcamera::QCamera3RegularChannel::initialize(cam_is_type_t) */

undefined4
qcamera::QCamera3RegularChannel::initialize(camera3_device *param_1,camera3_callback_ops *param_2)

{
  int iVar1;
  int *piVar2;
  camera3_stream *pcVar3;
  undefined4 extraout_r1;
  cam_stream_type_t cVar4;
  undefined4 uVar5;
  cam_stream_type_t extraout_r1_00;
  cam_stream_type_t cVar6;
  int *piVar7;
  cam_rotation_t cVar8;
  cam_stream_type_t *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  cam_stream_type_t in_stack_ffffffb4;
  cam_is_type_t in_stack_ffffffbc;
  ScopedTraceDbg aSStack48 [12];
  int local_24;
  
  piVar7 = *(int **)(DAT_00058c30 + 0x58a88);
  local_24 = *piVar7;
  iVar1 = DAT_00058c34 + 0x58a92;
  ScopedTraceDbg::ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffffb4,iVar1),(char *)param_2);
  pcVar3 = *(camera3_stream **)(param_1 + 0x1238);
  if (pcVar3 == (camera3_stream *)0x0) {
    if (*(int *)(*(int *)(DAT_00058c38 + 0x58ab4) + 0x20) == 0) {
      lVar11 = 0xffffffed;
    }
    else {
      iVar1 = DAT_00058c3c + 0x58abe;
      mm_camera_debug_log();
      lVar11 = CONCAT44(extraout_r1,0xffffffed);
    }
    goto LAB_00058bee;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    lVar11 = ZEXT48(pcVar3) << 0x20;
    goto LAB_00058bee;
  }
  pcVar9 = (cam_stream_type_t *)(param_1 + 0x1240);
  *(camera3_callback_ops **)(param_1 + 0x74) = param_2;
  uVar10 = QCamera3ProcessingChannel::translateStreamTypeAndFormat
                     ((QCamera3ProcessingChannel *)param_1,pcVar3,pcVar9,
                      (cam_format_t *)(param_1 + 0x1244));
  cVar4 = (cam_stream_type_t)((ulonglong)uVar10 >> 0x20);
  if ((int)uVar10 == 0) {
    piVar2 = (int *)(param_1 + 0x1238);
    cVar4 = *pcVar9;
    if (cVar4 == 4 || cVar4 == 1) {
      cVar4 = *(cam_stream_type_t *)(*piVar2 + 0x20);
      if (cVar4 == 0) {
        iVar1 = 1;
LAB_00058b6e:
        *(int *)(param_1 + 0x2edc) = iVar1;
        if (iVar1 == 8) {
          uVar5 = 2;
        }
        else {
          if (iVar1 != 2) goto LAB_00058b8a;
          uVar5 = 8;
        }
        *(undefined4 *)(param_1 + 0x2edc) = uVar5;
LAB_00058b8a:
        cVar8 = *(cam_rotation_t *)(*piVar2 + 4);
        iVar1 = *(int *)(*piVar2 + 8);
        if (*(int *)(*(int *)(DAT_00058c6c + 0x58b96) + 0x2c) != 0) {
          mm_camera_debug_log();
        }
        in_stack_ffffffb4 = *(cam_stream_type_t *)(param_1 + 0x2edc);
        lVar11 = QCamera3Channel::addStream
                           ((cam_stream_type_t)param_1,*pcVar9,
                            SUB41(*(undefined4 *)(param_1 + 0x1244),0),cVar8,(uchar)iVar1,
                            (ulonglong)CONCAT14(param_1[0x123c],in_stack_ffffffb4),in_stack_ffffffbc
                            ,*(uint *)(param_1 + 0x68));
        goto LAB_00058bee;
      }
      cVar6 = cVar4;
      if ((int)((uint)(byte)param_1[0x68] << 0x1c) < 0) {
        if (cVar4 - 1 < 3) {
          iVar1 = *(int *)(DAT_00058c5c + 0x58b6c + (cVar4 - 1) * 4);
          goto LAB_00058b6e;
        }
        if (*(int *)(*(int *)(DAT_00058c50 + 0x58c0a) + 0x20) != 0) {
          iVar1 = DAT_00058c54 + 0x58c18;
          goto LAB_00058c26;
        }
      }
      else if (*(int *)(*(int *)(DAT_00058c44 + 0x58b16) + 0x20) != 0) {
        iVar1 = DAT_00058c48 + 0x58b22;
LAB_00058c26:
        mm_camera_debug_log();
        cVar4 = extraout_r1_00;
        in_stack_ffffffb4 = cVar6;
      }
    }
    else {
      cVar6 = *(cam_stream_type_t *)(*piVar2 + 0x20);
      if (cVar6 == 0) goto LAB_00058b8a;
      if (*(int *)(*(int *)(DAT_00058c60 + 0x58b3e) + 0x20) != 0) {
        iVar1 = DAT_00058c64 + 0x58b4a;
        goto LAB_00058c26;
      }
    }
  }
  lVar11 = CONCAT44(cVar4,0xffffffea);
LAB_00058bee:
  ScopedTraceDbg::_ScopedTraceDbg
            (aSStack48,CONCAT44(in_stack_ffffffb4,iVar1),(char *)((ulonglong)lVar11 >> 0x20));
  if (*piVar7 == local_24) {
    return (int)lVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

