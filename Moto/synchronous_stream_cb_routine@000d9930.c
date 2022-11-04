
/* qcamera::QCamera2HardwareInterface::synchronous_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::synchronous_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  QCameraGrallocMemory *this;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  longlong lVar10;
  int in_stack_ffffffb0;
  void *in_stack_ffffffb4;
  
  puVar7 = *(uint **)(DAT_000d9c30 + 0xd9942);
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000d9c34 + 0xd994e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000d9c38 + 0xd995e) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000d9c3c + 0xd9c12);
    }
  }
  iVar6 = *(int *)(DAT_000d9c40 + 0xd996c);
  if (*(int *)(iVar6 + 0x28) != 0) {
    in_stack_ffffffb0 = DAT_000d9c44 + 0xd997c;
    mm_camera_debug_log(1,3,DAT_000d9c48 + 0xd9984,0x38f);
  }
  if (param_3 == (void *)0x0) {
    if (*(int *)(iVar6 + 0x20) == 0) goto LAB_000d9be0;
    uVar4 = 1;
    uVar5 = 0x393;
    iVar6 = DAT_000d9c4c + 0xd9b08;
    iVar8 = DAT_000d9c50 + 0xd9b10;
  }
  else if (param_1 == (mm_camera_super_buf_t *)0x0) {
    if (*(int *)(iVar6 + 0x20) == 0) goto LAB_000d9be0;
    uVar4 = 1;
    uVar5 = 0x397;
    iVar6 = DAT_000d9c54 + 0xd9b22;
    iVar8 = DAT_000d9c58 + 0xd9b2a;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x10);
    if (iVar8 == 0) {
      if (*(int *)(iVar6 + 0x20) == 0) goto LAB_000d9be0;
      uVar4 = 1;
      uVar5 = 0x39c;
      iVar6 = DAT_000d9c5c + 0xd9b3c;
      iVar8 = DAT_000d9c60 + 0xd9b44;
    }
    else {
      iVar2 = QCameraStream::getMyType(param_2);
      if (iVar2 == 1) {
        if (*(char *)((int)param_3 + 0x9d8) != '\0') {
          if (*(int *)(iVar6 + 0x34) != 0) {
            in_stack_ffffffb0 = DAT_000d9c6c + 0xd99c0;
            mm_camera_debug_log(extraout_s0,1,6,DAT_000d9c70 + 0xd99c8,0x3c2);
          }
          *(undefined *)((int)param_3 + 0x9d8) = 0;
        }
        this = *(QCameraGrallocMemory **)(iVar8 + 0x210);
        iVar2 = needProcessPreviewFrame
                          ((QCamera2HardwareInterface *)param_3,*(uint *)(iVar8 + 0x1c));
        if (iVar2 == 0) {
          pthread_mutex_lock((pthread_mutex_t *)((int)param_3 + 0x1df8));
          *(undefined4 *)((int)param_3 + 0x1e18) = *(undefined4 *)(iVar8 + 0x1c);
          QCameraGrallocMemory::setBufferStatus(this,*(uint *)(iVar8 + 0xc),1);
          pthread_mutex_unlock((pthread_mutex_t *)((int)param_3 + 0x1df8));
          if (*(int *)(iVar6 + 0x28) == 0) goto LAB_000d9be0;
          uVar4 = 3;
          uVar5 = 0x3cc;
          iVar6 = DAT_000d9c74 + 0xd9b98;
          iVar8 = DAT_000d9c78 + 0xd9ba0;
        }
        else {
          iVar2 = needDebugFps();
          if (iVar2 != 0) {
            piVar9 = (int *)((int)param_3 + 0x1c08);
            *piVar9 = *piVar9 + 1;
            lVar10 = systemTime(extraout_s0_00,1);
            lVar1 = lVar10 - *(longlong *)((int)param_3 + 0x1c10);
            uVar3 = (uint)lVar1;
            iVar2 = (int)((ulonglong)lVar1 >> 0x20);
            if ((int)(iVar2 - (uint)(uVar3 < 0xee6b281)) < 0 ==
                (SBORROW4(iVar2,(uint)(uVar3 < 0xee6b281)) != false)) {
              __floatdidf(uVar3,iVar2);
              iVar2 = *piVar9;
              *(double *)((int)param_3 + 0x1c18) =
                   ((double)(longlong)(iVar2 - *(int *)((int)param_3 + 0x1c0c)) * DAT_000d9c28) /
                   (double)CONCAT44(extraout_r1,uVar3);
              if (*(int *)(iVar6 + 0x34) != 0) {
                in_stack_ffffffb0 = DAT_000d9c7c + 0xd9a72;
                mm_camera_debug_log(1,6,DAT_000d9c80 + 0xd9a7a,0xd35);
                iVar2 = *piVar9;
              }
              *(int *)(longlong *)((int)param_3 + 0x1c10) = (int)lVar10;
              *(int *)((int)param_3 + 0x1c14) = (int)((ulonglong)lVar10 >> 0x20);
              *(int *)((int)param_3 + 0x1c0c) = iVar2;
            }
          }
          lVar1 = (longlong)*(int *)(iVar8 + 0x14) * 1000000000 + (longlong)*(int *)(iVar8 + 0x18);
          *(int *)(param_2 + 0x10) = (int)lVar1;
          *(int *)(param_2 + 0x14) = (int)((ulonglong)lVar1 >> 0x20);
          if (*(int *)(iVar6 + 0x2c) != 0) {
            in_stack_ffffffb0 = DAT_000d9c84 + 0xd9abc;
            in_stack_ffffffb4 = param_3;
            mm_camera_debug_log(1,4,DAT_000d9c88 + 0xd9ac6,999,in_stack_ffffffb0,param_3,
                                *(undefined4 *)(iVar8 + 0xc));
          }
          iVar2 = QCameraGrallocMemory::enqueueBuffer
                            ((uint)this,CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0));
          if (iVar2 == 0) {
            pthread_mutex_lock((pthread_mutex_t *)((int)param_3 + 0x1df8));
            *(undefined4 *)((int)param_3 + 0x1e18) = *(undefined4 *)(iVar8 + 0x1c);
            *(char *)((int)param_3 + 0x1dfc) = *(char *)((int)param_3 + 0x1dfc) + '\x01';
            pthread_mutex_unlock((pthread_mutex_t *)((int)param_3 + 0x1df8));
          }
          else if (*(int *)(iVar6 + 0x20) != 0) {
            mm_camera_debug_log(extraout_s0_01,1,1,DAT_000d9c90 + 0xd9af2,0x3ef,
                                DAT_000d9c8c + 0xd9aea);
          }
          if (*(int *)(iVar6 + 0x28) == 0) goto LAB_000d9be0;
          uVar4 = 3;
          uVar5 = 0x3f2;
          iVar6 = DAT_000d9c94 + 0xd9bd6;
          iVar8 = DAT_000d9c98 + 0xd9bde;
        }
      }
      else {
        if (*(int *)(iVar6 + 0x20) == 0) goto LAB_000d9be0;
        uVar4 = 1;
        uVar5 = 0x3a1;
        iVar6 = DAT_000d9c64 + 0xd9b56;
        iVar8 = DAT_000d9c68 + 0xd9b5e;
      }
    }
  }
  mm_camera_debug_log(1,uVar4,iVar8,uVar5,iVar6);
LAB_000d9be0:
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000d9c9c + 0xd9bec) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000d9ca0 + 0xd9bfa) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

