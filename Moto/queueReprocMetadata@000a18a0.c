
/* qcamera::QCamera3QCfaRawChannel::queueReprocMetadata(mm_camera_super_buf_t*,
   cam_frame_len_offset_t&, bool) */

undefined4 __thiscall
qcamera::QCamera3QCfaRawChannel::queueReprocMetadata
          (QCamera3QCfaRawChannel *this,mm_camera_super_buf_t *param_1,
          cam_frame_len_offset_t *param_2,bool param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  QCamera3StreamMem *pQVar3;
  int *__src;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar4 = *(int *)(DAT_000a1a24 + 0xa18b4);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a1a2c + 0xa18ce,0xb8c,DAT_000a1a28 + 0xa18c4,param_3);
  }
  __src = *(int **)(*(int *)(param_1 + 0x10) + 0x208);
  piVar2 = __src;
  if (__src != (int *)0x0) {
    piVar2 = __src + 0x3161;
  }
  if (param_3 == false) {
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    if (*piVar2 != *(int *)(this + 0x118044)) {
      return 0xffffffff;
    }
    pQVar3 = (QCamera3StreamMem *)operator_new(0xe30);
    pQVar3 = (QCamera3StreamMem *)QCamera3StreamMem::QCamera3StreamMem(pQVar3,1,true);
    *(QCamera3StreamMem **)(this + 0x118034) = pQVar3;
    puVar1 = (undefined8 *)(param_1 + 0x10);
    QCamera3StreamMem::allocateAll(pQVar3,*(uint *)(*(int *)puVar1 + 0x20c));
    QCamera3StreamMem::getBufDef
              (*(QCamera3StreamMem **)(this + 0x118034),param_2,(mm_camera_buf_def *)(this + 0x318),
               0);
    __aeabi_memcpy8(*(void **)(this + 0x520),*(void **)(*(int *)puVar1 + 0x208),
                    (size_t)&PTR_bufDone_00117af8);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x2f8) = *puVar1;
    *(undefined8 *)(this + 0x300) = uVar7;
    *(undefined8 *)(this + 0x2e8) = uVar5;
    *(undefined8 *)(this + 0x2f0) = uVar6;
    this[0x530] = (QCamera3QCfaRawChannel)0x1;
    *(mm_camera_buf_def **)(this + 0x2f8) = (mm_camera_buf_def *)(this + 0x318);
    *(undefined8 *)(this + 0x308) = uVar8;
    *(undefined8 *)(this + 0x310) = uVar9;
    if (this[0x2e4] != (QCamera3QCfaRawChannel)0x0) {
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x11803c));
      *(int *)(this + 0x118038) = *(int *)(this + 0x118038) + 1;
      pthread_cond_signal((pthread_cond_t *)(this + 0x118040));
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x11803c));
    }
  }
  else {
    if ((__src == (int *)0x0) || (__src[0x3162] != *(int *)(this + 0x118044))) {
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a1a34 + 0xa1a18,0xb94,DAT_000a1a30 + 0xa1a10);
      }
      return 0xffffffff;
    }
    __aeabi_memcpy8(this + 0x538,__src,(size_t)&PTR_bufDone_00117af8);
  }
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a1a3c + 0xa19f6,0xbb2,DAT_000a1a38 + 0xa19ee);
  }
  return 0;
}

