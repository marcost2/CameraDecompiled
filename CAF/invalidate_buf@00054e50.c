
/* qcamera::QCamera3Stream::invalidate_buf(unsigned int, void*) */

uint qcamera::QCamera3Stream::invalidate_buf(uint param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_00054f1c + 0x54ee4) + 0x3c) != 0) {
      mm_camera_debug_log();
    }
    uVar4 = 0xfffffff4;
  }
  else {
    if (*(int *)((int)param_2 + 0x284) == 0) {
      uVar4 = __ThumbV7PILongThunk__ZN7qcamera14QCamera3Stream13invalidateBufEj
                        ((QCamera3Stream *)param_2,param_1);
      return uVar4;
    }
    iVar1 = *(int *)((int)param_2 + 0x290);
    if (*(char *)(param_1 * 0x218 + iVar1 + 0x21) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      iVar5 = *(int *)(DAT_00054f28 + 0x54e8a);
      uVar4 = 0;
      do {
        uVar2 = invalidateBuf((QCamera3Stream *)param_2,
                              *(uint *)(iVar1 + param_1 * 0x218 + 0x24 + uVar3 * 4));
        if ((uVar2 != 0) && (*(int *)(iVar5 + 0x3c) != 0)) {
          mm_camera_debug_log();
        }
        iVar1 = *(int *)((int)param_2 + 0x290);
        uVar4 = uVar4 | uVar2;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(byte *)(param_1 * 0x218 + iVar1 + 0x21));
    }
  }
  return uVar4;
}

