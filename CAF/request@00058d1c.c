
/* qcamera::QCamera3RegularChannel::request(native_handle const**, unsigned int, int&) */

undefined4
qcamera::QCamera3RegularChannel::request
          (native_handle **param_1,uint param_2,camera3_stream_buffer *param_3,
          metadata_buffer_t *param_4,int *param_5,bool param_6,bool param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  undefined4 extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  undefined4 extraout_r1_05;
  native_handle **this;
  int *piVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  camera3_stream_buffer *in_stack_ffffffc4;
  camera3_stream_buffer *pcVar6;
  ScopedTraceDbg aSStack48 [8];
  int local_28;
  
  piVar3 = *(int **)(DAT_00058f08 + 0x58d30);
  local_28 = *piVar3;
  iVar1 = DAT_00058f0c + 0x58d3e;
  ScopedTraceDbg::ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffffc4,iVar1),(char *)param_2);
  if (param_2 == 0) {
    if (*(int *)(*(int *)(DAT_00058f10 + 0x58dc8) + 0x20) == 0) {
      uVar4 = CONCAT44(extraout_r1,0xffffffea);
    }
    else {
      iVar1 = DAT_00058f14 + 0x58dd4;
      mm_camera_debug_log();
      uVar4 = CONCAT44(extraout_r1_01,0xffffffea);
    }
    goto LAB_00058ee6;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_1[0x1d]);
    pcVar6 = (camera3_stream_buffer *)uVar4;
    if (pcVar6 != (camera3_stream_buffer *)0x0) {
      if (*(int *)(*(int *)(DAT_00058f1c + 0x58e02) + 0x20) != 0) {
        iVar1 = DAT_00058f20 + 0x58e0e;
        mm_camera_debug_log();
        uVar4 = uVar4 & 0xffffffff | (ulonglong)extraout_r1_02 << 0x20;
        in_stack_ffffffc4 = pcVar6;
      }
      goto LAB_00058ee6;
    }
    uVar4 = (**(code **)(*param_1 + 8))(param_1);
    if ((int)uVar4 != 0) goto LAB_00058ee6;
  }
  else if (*(int *)(*(int *)(DAT_00058f28 + 0x58d5a) + 0x2c) != 0) {
    iVar1 = DAT_00058f2c + 0x58d64;
    mm_camera_debug_log();
  }
  this = param_1 + 0x102;
  uVar2 = QCamera3StreamMem::getMatchBufIndex(this);
  if ((int)uVar2 < 0) {
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_1[0x1d]);
    pcVar6 = (camera3_stream_buffer *)uVar4;
    if (pcVar6 != (camera3_stream_buffer *)0x0) {
      if (*(int *)(*(int *)(DAT_00058f34 + 0x58e38) + 0x20) != 0) {
        iVar1 = DAT_00058f38 + 0x58e44;
        mm_camera_debug_log();
        uVar4 = uVar4 & 0xffffffff | (ulonglong)extraout_r1_03 << 0x20;
        in_stack_ffffffc4 = pcVar6;
      }
      goto LAB_00058ee6;
    }
    uVar5 = QCamera3StreamMem::getMatchBufIndex(this);
    uVar2 = (uint)uVar5;
    if (0x7fffffff < uVar2) {
      if (*(int *)(*(int *)(DAT_00058f40 + 0x58ec0) + 0x20) == 0) {
        uVar4 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),0xffffffe0);
      }
      else {
        iVar1 = DAT_00058f44 + 0x58eca;
        mm_camera_debug_log();
        uVar4 = CONCAT44(extraout_r1_05,0xffffffe0);
      }
      goto LAB_00058ee6;
    }
  }
  uVar4 = QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)this,uVar2,(uint)param_3);
  if ((int)uVar4 == 0) {
    uVar4 = (**(code **)(*(int *)param_1[9] + 0xc))(param_1[9],uVar2);
    if ((int)uVar4 == 0) {
      *(uint *)param_4 = uVar2;
      uVar4 = uVar4 & 0xffffffff00000000;
    }
    else {
      if (*(int *)(*(int *)(DAT_00058f58 + 0x58e72) + 0x20) != 0) {
        iVar1 = DAT_00058f5c + 0x58e7c;
        mm_camera_debug_log();
      }
      QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)this,uVar2,0xffffffff);
      uVar4 = uVar4 & 0xffffffff | (ulonglong)extraout_r1_04 << 0x20;
    }
  }
  else if (*(int *)(*(int *)(DAT_00058f4c + 0x58d9e) + 0x20) != 0) {
    iVar1 = DAT_00058f50 + 0x58dac;
    mm_camera_debug_log();
    uVar4 = uVar4 & 0xffffffff | (ulonglong)extraout_r1_00 << 0x20;
    in_stack_ffffffc4 = param_3;
  }
LAB_00058ee6:
  ScopedTraceDbg::_ScopedTraceDbg
            (aSStack48,CONCAT44(in_stack_ffffffc4,iVar1),(char *)(uVar4 >> 0x20));
  if (*piVar3 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)uVar4;
}

