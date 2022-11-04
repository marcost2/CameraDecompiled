
/* qcamera::QCamera3YUVChannel::request(native_handle const**, unsigned int, camera3_stream_buffer*,
   metadata_buffer_t*, bool&, int&, bool, bool) */

uint qcamera::QCamera3YUVChannel::request
               (native_handle **param_1,uint param_2,camera3_stream_buffer *param_3,
               metadata_buffer_t *param_4,bool *param_5,int *param_6,bool param_7,bool param_8)

{
  undefined auVar1 [16];
  int *piVar2;
  native_handle *pnVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined3 in_stack_00000009;
  undefined4 uVar10;
  undefined4 local_200;
  undefined4 uStack508;
  camera3_stream_buffer *local_1f8;
  uint uStack500;
  uint local_1f0;
  undefined4 uStack492;
  camera3_stream_buffer acStack488 [448];
  int local_28;
  
  piVar2 = *(int **)(DAT_000a21d4 + 0xa1ec6);
  local_28 = *piVar2;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc66));
  iVar8 = *(int *)(DAT_000a21d8 + 0xa1ede);
  if (*(int *)(iVar8 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a21e0 + 0xa1efe,0xc6d,DAT_000a21dc + 0xa1ef2,param_4,param_3);
  }
  if ((param_2 == 0) || (param_5 == (bool *)0x0)) {
    if (*(int *)(iVar8 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a21e8 + 0xa2016,0xc6f,DAT_000a21e4 + 0xa200e);
    }
    uVar9 = 0xffffffea;
  }
  else {
    uVar9 = 0;
    local_1f0 = 0;
    uStack492 = 0;
    uStack500 = 0;
    local_1f8 = param_3;
    if ((param_4 == (metadata_buffer_t *)0x0) && (*(char *)((int)param_1 + 0x3171) != '\0')) {
      if (param_5[0x7e] != false) {
        pnVar3 = *(native_handle **)(param_5 + 0xc6a4);
        param_1[0xc5f] = *(native_handle **)(param_5 + 0xc6a8);
        param_1[0xc5e] = pnVar3;
      }
      if (param_5[0x8d] != false) {
        param_1[0xc60] = *(native_handle **)(param_5 + 0xc6f4);
      }
      if (param_5[0x8f] != false) {
        auVar1 = *(undefined (*) [16])(param_5 + 0xc6fc);
        *(longlong *)(param_1 + 0xc61) = SUB168(auVar1,0);
        *(longlong *)(param_1 + 0xc63) = SUB168(auVar1 >> 0x40,0);
      }
      if (param_5[0xd4] != false) {
        *(bool *)(param_1 + 0xc65) = param_5[0x22f8];
      }
      uVar9 = (uint)(*(char *)(param_1 + 0xc5e) != '\0' && *(char *)(param_1 + 0xc5e) != '\x03');
      if (((native_handle *)0x4 < param_1[0xc60]) ||
         ((1 << ((uint)param_1[0xc60] & 0xff) & 0x19U) == 0)) {
        uVar9 = 1;
      }
      if (((int)param_1[0xc63] < *(int *)(param_1[0x538] + 4)) ||
         ((int)param_1[0xc64] < *(int *)(param_1[0x538] + 8))) {
        uVar4 = count_leading_zeroes((uint)*(byte *)(param_1 + 0xc65));
        uVar9 = uVar9 | uVar4 >> 5;
      }
      uStack500 = uVar9 & 0xff;
      pnVar3 = param_1[0xc68];
      local_1f0 = param_2;
      puVar5 = (undefined8 *)operator_new(0x18);
      *(native_handle **)((int)puVar5 + 0x14) = pnVar3;
      *puVar5 = CONCAT44(uStack500,local_1f8);
      puVar5[1] = SUB168(CONCAT412(uStack492,CONCAT48(local_1f0,CONCAT44(uStack500,local_1f8))) >>
                         0x40,0);
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(pnVar3 + 0x10);
      *(undefined8 **)(*(int *)(pnVar3 + 0x10) + 0x14) = puVar5;
      *(undefined8 **)(pnVar3 + 0x10) = puVar5;
    }
    if (*(int *)(iVar8 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a21f0 + 0xa2072,0xc7d,DAT_000a21ec + 0xa2068,uVar9);
    }
    *(char *)param_6 = (char)uVar9;
    if (uVar9 == 0) {
      uVar9 = QCamera3ProcessingChannel::request
                        (param_1,param_2,param_3,param_4,(int *)param_5,param_7,false);
    }
    else {
      if (*(char *)(param_1 + 0x14) == '\0') {
        uVar9 = (**(code **)(*param_1 + 0xc))(param_1);
        if (uVar9 != 0) goto LAB_000a2194;
      }
      else if (*(int *)(iVar8 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a21f8 + 0xa20a4,0xc89,DAT_000a21f4 + 0xa209c);
      }
      puVar6 = *(uint **)((int)param_1[0xc6a] + 8);
      if (puVar6 == (uint *)param_1[0xc6a]) {
        uVar9 = QCamera3StreamMem::allocateOne
                          ((QCamera3StreamMem *)(param_1 + 0x1ac),(uint)param_1[0xc5d]);
        uVar4 = uVar9;
        if ((int)uVar9 < 0) {
          if (*(int *)(iVar8 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000a2200 + 0xa21c8,0xc92,DAT_000a21fc + 0xa21c0);
          }
          uVar9 = 0xffffffea;
          goto LAB_000a2194;
        }
      }
      else {
        uVar4 = *puVar6;
        uVar9 = puVar6[1];
        uVar7 = puVar6[2];
        *(uint *)(uVar9 + 8) = uVar7;
        *(uint *)(uVar7 + 4) = uVar9;
        if (puVar6 != (uint *)0x0) {
          operator_delete(puVar6);
        }
        uVar9 = 0;
      }
      __aeabi_memclr8(acStack488,0x1c0);
      local_200 = 0;
      uStack508 = 0;
      QCamera3Stream::getFrameDimension((QCamera3Stream *)param_1[9],(cam_dimension_t *)&local_200);
      uVar10 = uStack508;
      QCamera3ProcessingChannel::setReprocConfig
                ((reprocess_config_t *)param_1,acStack488,(metadata_buffer_t *)0x0,
                 (cam_format_t)param_5,SUB41(param_1[0x53b],0));
      if (*(char *)((int)param_1 + 0x14f1) == '\0') {
        QCamera3PostProcessor::start
                  ((QCamera3PostProcessor *)(param_1 + 0x25),(reprocess_config_t *)acStack488);
        *(undefined *)((int)param_1 + 0x14f1) = 1;
      }
      if (*(int *)(iVar8 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a2208 + 0xa2176,0xca7,DAT_000a2204 + 0xa216c,uVar4,uVar10);
      }
      QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)(param_1 + 0x1ac),uVar4,(uint)param_3)
      ;
      *_param_7 = uVar4;
      (**(code **)(*(int *)param_1[9] + 0xc))(param_1[9],uVar4);
    }
  }
LAB_000a2194:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc66));
  if (*piVar2 == local_28) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

