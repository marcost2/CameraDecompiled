
/* qcamera::QCamera3PicChannel::dataNotifyCB(mm_camera_super_buf_t*, void*) */

void qcamera::QCamera3PicChannel::dataNotifyCB(mm_camera_super_buf_t *param_1,void *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = *(uint **)(DAT_000a3d2c + 0xa3c32);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000a3d30 + 0xa3c3e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a3d34 + 0xa3c4c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a3d38 + 0xa3d18);
    }
  }
  iVar5 = *(int *)(DAT_000a3d3c + 0xa3c58);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a3d44 + 0xa3c70,0xffc,DAT_000a3d40 + 0xa3c68);
  }
  if (param_2 == (void *)0x0) {
    if (*(int *)(iVar5 + 0x20) == 0) goto LAB_000a3ce8;
    uVar1 = 1;
    uVar3 = 0x1000;
    iVar5 = DAT_000a3d48 + 0xa3cae;
    iVar2 = DAT_000a3d4c + 0xa3cb6;
  }
  else if (*(int *)((int)param_2 + 0x44) == 1) {
    if (*(QCamera3Stream **)((int)param_2 + 0x24) == (QCamera3Stream *)0x0) {
      if (*(int *)(iVar5 + 0x20) == 0) goto LAB_000a3ce8;
      uVar1 = 1;
      uVar3 = 0x100b;
      iVar5 = DAT_000a3d58 + 0xa3cde;
      iVar2 = DAT_000a3d5c + 0xa3ce6;
    }
    else {
      streamCbRoutine((QCamera3PicChannel *)param_2,param_1,
                      *(QCamera3Stream **)((int)param_2 + 0x24));
      if (*(int *)(iVar5 + 0x2c) == 0) goto LAB_000a3ce8;
      uVar1 = 4;
      uVar3 = 0x1011;
      iVar5 = DAT_000a3d60 + 0xa3c96;
      iVar2 = DAT_000a3d64 + 0xa3c9e;
    }
  }
  else {
    if (*(int *)(iVar5 + 0x20) == 0) goto LAB_000a3ce8;
    uVar1 = 1;
    uVar3 = 0x1005;
    iVar5 = DAT_000a3d50 + 0xa3cc6;
    iVar2 = DAT_000a3d54 + 0xa3cce;
  }
  mm_camera_debug_log(1,uVar1,iVar2,uVar3,iVar5);
LAB_000a3ce8:
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_000a3d68 + 0xa3cf4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a3d6c + 0xa3d02) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

