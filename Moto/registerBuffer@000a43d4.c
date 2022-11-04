
/* qcamera::QCamera3ReprocessChannel::registerBuffer(native_handle const**, cam_is_type_t) */

int __thiscall
qcamera::QCamera3ReprocessChannel::registerBuffer
          (QCamera3ReprocessChannel *this,native_handle **param_1,cam_is_type_t param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(DAT_000a4534 + 0xa43e6);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000a4538 + 0xa43f6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a453c + 0xa4406) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a4540 + 0xa4524);
    }
  }
  *(cam_is_type_t *)(this + 0x74) = param_2;
  if (param_1 == (native_handle **)0x0) {
    if (*(int *)(*(int *)(DAT_000a4544 + 0xa444c) + 0x20) == 0) {
LAB_000a44b4:
      iVar2 = -0x16;
      goto LAB_000a44b8;
    }
    uVar4 = 0x116e;
    iVar2 = DAT_000a4548 + 0xa445c;
    iVar3 = DAT_000a454c + 0xa4464;
  }
  else {
    uVar1 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x108));
    if (uVar1 <= *(int *)(this + 0x78) - 1U) {
      if ((*(int *)(this + 0x44) == 0) &&
         (iVar2 = (**(code **)(*(int *)this + 0x24))(this,*(undefined4 *)(this + 0x74)), iVar2 != 0)
         ) {
        if (*(int *)(*(int *)(DAT_000a455c + 0xa44f8) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000a4564 + 0xa4514,0x117b,DAT_000a4560 + 0xa450a,iVar2);
        }
      }
      else {
        QCamera3Stream::getMyType(*(QCamera3Stream **)(this + 0x24));
        iVar3 = QCamera3StreamMem::registerBuffer
                          ((native_handle **)(this + 0x108),(cam_stream_type_t)param_1);
        iVar2 = 0;
        if ((iVar3 != -0x11 && iVar3 != 0) &&
           (iVar2 = iVar3, *(int *)(*(int *)(DAT_000a4568 + 0xa4494) + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_000a4570 + 0xa44ae,0x1185,DAT_000a456c + 0xa44a4,param_1,iVar3
                             );
        }
      }
      goto LAB_000a44b8;
    }
    if (*(int *)(*(int *)(DAT_000a4550 + 0xa442c) + 0x20) == 0) goto LAB_000a44b4;
    uVar4 = 0x1173;
    iVar2 = DAT_000a4554 + 0xa443e;
    iVar3 = DAT_000a4558 + 0xa4446;
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar2);
  iVar2 = -0x16;
LAB_000a44b8:
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000a4574 + 0xa44c6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a4578 + 0xa44d4) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return iVar2;
}

