
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3YUVChannel::initialize(cam_is_type_t) */

int __thiscall
qcamera::QCamera3YUVChannel::initialize(QCamera3YUVChannel *this,cam_is_type_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  cam_is_type_t in_stack_fffffe14;
  undefined8 local_1d8;
  undefined4 uStack464;
  undefined4 local_1cc;
  undefined4 uStack456;
  undefined8 uStack452;
  cam_rotation_t local_1b8;
  undefined4 uStack436;
  undefined auStack432 [388];
  undefined4 local_2c;
  int local_24;
  
  piVar6 = *(int **)(DAT_000a1e58 + 0xa1c68);
  local_24 = *piVar6;
  puVar7 = *(uint **)(DAT_000a1e5c + 0xa1c76);
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000a1e60 + 0xa1c86) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a1e64 + 0xa1c96) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a1e68 + 0xa1e42);
    }
  }
  iVar1 = *(int *)(this + 0x14e0);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_000a1e6c + 0xa1d78) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a1e74 + 0xa1d90,0xc13,DAT_000a1e70 + 0xa1d88);
    }
    iVar5 = -0x13;
  }
  else {
    iVar5 = 0;
    if (*(int *)(this + 0x44) == 0) {
      *(undefined4 *)(this + 0x14ec) = 2;
      *(cam_is_type_t *)(this + 0x74) = param_1;
      local_1b8 = *(cam_rotation_t *)(iVar1 + 4);
      uStack436 = *(undefined4 *)(iVar1 + 8);
      iVar1 = 1;
      iVar5 = QCamera3Channel::addStream
                        ((cam_stream_type_t)this,*(cam_format_t *)(this + 0x14e8),
                         (cam_dimension_t)0x2,local_1b8,(uchar)uStack436,
                         (ulonglong)CONCAT14(this[0x14e4],1),in_stack_fffffe14,
                         *(uint *)(this + 0x68));
      if (iVar5 < 0) {
        if (*(int *)(*(int *)(DAT_000a1e78 + 0xa1da0) + 0x20) == 0) goto LAB_000a1e02;
        uVar4 = 0xc29;
        iVar2 = DAT_000a1e7c + 0xa1db0;
        iVar3 = DAT_000a1e80 + 0xa1db8;
      }
      else {
        local_1d8 = *(undefined8 *)(this + 8);
        uStack452 = *(undefined8 *)(this + 0x1c);
        uStack464 = (undefined4)*(undefined8 *)(this + 0x10);
        local_1cc = (undefined4)*(undefined8 *)(this + 0x14);
        uStack456 = (undefined4)((ulonglong)*(undefined8 *)(this + 0x14) >> 0x20);
        __aeabi_memclr8(auStack432,0x188);
        if (local_1d8._4_4_ < (uint)local_1d8) {
          local_1d8._4_4_ = (uint)local_1d8;
        }
        local_1d8 = CONCAT44(local_1d8._4_4_,local_1d8._4_4_);
        iVar5 = mm_stream_calc_offset_snapshot
                          (*(undefined4 *)(this + 0x14ec),&local_1b8,&local_1d8,auStack432);
        if (iVar5 < 0) {
          if (*(int *)(*(int *)(DAT_000a1e84 + 0xa1dbe) + 0x20) == 0) goto LAB_000a1e02;
          uVar4 = 0xc39;
          iVar2 = DAT_000a1e88 + 0xa1dce;
          iVar3 = DAT_000a1e8c + 0xa1dd6;
        }
        else {
          *(undefined4 *)(this + 0x3174) = local_2c;
          if (iVar5 == 0) {
            iVar5 = QCamera3ProcessingChannel::initialize((cam_is_type_t)this);
            if ((iVar5 == 0) || (*(int *)(*(int *)(DAT_000a1e9c + 0xa1de6) + 0x20) == 0))
            goto LAB_000a1e02;
            uVar4 = 0xc48;
            iVar2 = DAT_000a1ea0 + 0xa1df6;
            iVar3 = DAT_000a1ea4 + 0xa1e00;
            iVar1 = iVar5;
          }
          else {
            if (*(int *)(*(int *)(DAT_000a1e90 + 0xa1d56) + 0x20) == 0) goto LAB_000a1e02;
            uVar4 = 0xc40;
            iVar2 = DAT_000a1e94 + 0xa1d68;
            iVar3 = DAT_000a1e98 + 0xa1d72;
            iVar1 = iVar5;
          }
        }
      }
      mm_camera_debug_log(1,1,iVar3,uVar4,iVar2,iVar1);
    }
  }
LAB_000a1e02:
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000a1ea8 + 0xa1e10) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a1eac + 0xa1e1e) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar6 == local_24) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

