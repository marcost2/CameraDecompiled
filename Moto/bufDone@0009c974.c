
/* qcamera::QCamera3Stream::bufDone(unsigned int) */

int __thiscall qcamera::QCamera3Stream::bufDone(QCamera3Stream *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x27c));
  if (((byte)this[0x34] <= param_1) || (*(int *)(this + 0xd0) == 0)) {
    if (*(int *)(*(int *)(DAT_0009cb80 + 0x9c9e0) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009cb88 + 0x9c9fc,0x2b5,DAT_0009cb84 + 0x9c9ee,param_1,
                          (uint)(byte)this[0x34]);
    }
    iVar1 = -0x4b;
    goto LAB_0009ca02;
  }
  if (*(QCamera3StreamMem **)(this + 0xcc) == (QCamera3StreamMem *)0x0) {
    if (*(int *)(*(int *)(DAT_0009cb8c + 0x9ca16) + 0x3c) == 0) {
LAB_0009ca64:
      iVar1 = -0x26;
      goto LAB_0009ca02;
    }
    uVar4 = 0x2ba;
    iVar1 = DAT_0009cb90 + 0x9ca26;
    iVar3 = DAT_0009cb94 + 0x9ca2e;
LAB_0009ca2c:
    mm_camera_debug_log(2,1,iVar3,uVar4,iVar1);
    iVar1 = -0x26;
  }
  else {
    if (*(int *)(param_1 * 0x218 + *(int *)(this + 0xd0) + 0x210) == 0) {
      if (*(int *)(this + 0x30) == 0) {
        if (*(int *)(*(int *)(DAT_0009cb98 + 0x9ca70) + 0x3c) == 0) {
          iVar1 = -0x13;
        }
        else {
          mm_camera_debug_log(2,1,DAT_0009cba0 + 0x9ca8a,0x2c0,DAT_0009cb9c + 0x9ca82);
          iVar1 = -0x13;
        }
        goto LAB_0009ca02;
      }
      iVar1 = QCamera3StreamMem::getSize(*(QCamera3StreamMem **)(this + 0xcc),param_1);
      if (iVar1 == -0x4b) {
        if (*(int *)(*(int *)(DAT_0009cbc0 + 0x9ca4c) + 0x3c) == 0) goto LAB_0009ca64;
        uVar4 = 0x2d7;
        iVar1 = DAT_0009cbc4 + 0x9ca5c;
        iVar3 = DAT_0009cbc8 + 0x9ca64;
        goto LAB_0009ca2c;
      }
      iVar3 = *(int *)(DAT_0009cba4 + 0x9ca98);
      if (*(int *)(iVar3 + 0x48) != 0) {
        mm_camera_debug_log(2,4,DAT_0009cbac + 0x9cab6,0x2c7,DAT_0009cba8 + 0x9caac,param_1);
      }
      pcVar5 = **(code ***)(this + 0x30);
      uVar4 = QCamera3StreamMem::getFd(*(QCamera3StreamMem **)(this + 0xcc),param_1);
      uVar2 = QCamera3StreamMem::getPtr(*(QCamera3StreamMem **)(this + 0xcc),param_1);
      iVar1 = (*pcVar5)(param_1,0xffffffff,uVar4,iVar1,uVar2,3,
                        *(undefined4 *)(*(int *)(this + 0x30) + 0xc));
      if (iVar1 < 0) {
        if (*(int *)(iVar3 + 0x3c) != 0) {
          mm_camera_debug_log(2,1,DAT_0009cbb4 + 0x9cb66,0x2cc,DAT_0009cbb0 + 0x9cb5c,param_1);
        }
        goto LAB_0009ca02;
      }
      iVar1 = QCamera3StreamMem::getBufDef
                        (*(QCamera3StreamMem **)(this + 0xcc),
                         (cam_frame_len_offset_t *)(this + 0xd4),
                         (mm_camera_buf_def *)(param_1 * 0x218 + *(int *)(this + 0xd0)),param_1);
      if (iVar1 != 0) {
        if (*(int *)(iVar3 + 0x3c) != 0) {
          mm_camera_debug_log(2,1,DAT_0009cbbc + 0x9cb2a,0x2d2,DAT_0009cbb8 + 0x9cb22);
        }
        (**(code **)(*(int *)(this + 0x30) + 8))
                  (param_1,0xffffffff,3,*(undefined4 *)(*(int *)(this + 0x30) + 0xc));
        goto LAB_0009ca02;
      }
    }
    if (*(int *)(this + 0x280) == 0) {
      iVar1 = (**(code **)(*(int *)(this + 0x10) + 0x6c))
                        (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                         param_1 * 0x218 + *(int *)(this + 0xd0));
      if (iVar1 < 0) {
        iVar1 = -0x7ffffffe;
      }
    }
    else {
      iVar1 = aggregateBufToBatch(this,(mm_camera_buf_def *)
                                       (param_1 * 0x218 + *(int *)(this + 0xd0)));
    }
  }
LAB_0009ca02:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x27c));
  return iVar1;
}

