
/* qcamera::QCamera3ProcessingChannel::registerBuffer(native_handle const**, cam_is_type_t) */

int __thiscall
qcamera::QCamera3ProcessingChannel::registerBuffer
          (QCamera3ProcessingChannel *this,native_handle **param_1,cam_is_type_t param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(DAT_0009f6ac + 0x9f586);
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_0009f6b0 + 0x9f592) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009f6b4 + 0x9f5a0) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0009f6b8 + 0x9f69a);
    }
  }
  *(cam_is_type_t *)(this + 0x74) = param_2;
  uVar1 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x6b0));
  if (*(int *)(this + 0x14e4) - 1U < uVar1) {
    if (*(int *)(*(int *)(DAT_0009f6bc + 0x9f5c4) + 0x20) == 0) {
      iVar3 = -0x16;
    }
    else {
      mm_camera_debug_log(1,1,DAT_0009f6c4 + 0x9f5dc,0x51a,DAT_0009f6c0 + 0x9f5d4);
      iVar3 = -0x16;
    }
  }
  else if ((*(int *)(this + 0x44) == 0) &&
          (iVar3 = (**(code **)(*(int *)this + 0x24))(this,*(undefined4 *)(this + 0x74)), iVar3 != 0
          )) {
    if (*(int *)(*(int *)(DAT_0009f6c8 + 0x9f64a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009f6d0 + 0x9f664,0x521,DAT_0009f6cc + 0x9f65a,iVar3);
    }
  }
  else {
    QCamera3Stream::getMyType(*(QCamera3Stream **)(this + 0x24));
    iVar2 = QCamera3StreamMem::registerBuffer
                      ((native_handle **)(this + 0x6b0),(cam_stream_type_t)param_1);
    iVar3 = 0;
    if ((iVar2 != -0x11 && iVar2 != 0) &&
       (iVar3 = iVar2, *(int *)(*(int *)(DAT_0009f6d4 + 0x9f60c) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_0009f6dc + 0x9f628,0x52b,DAT_0009f6d8 + 0x9f61c,param_1,iVar2);
    }
  }
  if (1 < *puVar4) {
    if ((**(byte **)(DAT_0009f6e0 + 0x9f672) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009f6e4 + 0x9f680) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return iVar3;
}

