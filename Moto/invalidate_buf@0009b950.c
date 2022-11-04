
/* qcamera::QCamera3Stream::invalidate_buf(unsigned int, void*) */

uint qcamera::QCamera3Stream::invalidate_buf(uint param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (param_2 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_0009ba78 + 0x9ba16) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009ba80 + 0x9ba2c,0x9f,DAT_0009ba7c + 0x9ba24);
    }
    uVar8 = 0xfffffff4;
  }
  else if (*(int *)((int)param_2 + 0x280) == 0) {
    if (*(QCamera3StreamMem **)((int)param_2 + 0xcc) != (QCamera3StreamMem *)0x0) {
      uVar8 = QCamera3StreamMem::invalidateCache
                        (*(QCamera3StreamMem **)((int)param_2 + 0xcc),param_1);
      return uVar8;
    }
    if (*(int *)(*(int *)(DAT_0009ba98 + 0x9ba50) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009baa0 + 0x9ba68,0x3fe,DAT_0009ba9c + 0x9ba60);
    }
    uVar8 = 0xffffffda;
  }
  else {
    iVar1 = *(int *)((int)param_2 + 0x28c);
    if (*(char *)(param_1 * 0x218 + iVar1 + 0x21) == '\0') {
      uVar8 = 0;
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
      iVar10 = *(int *)(DAT_0009ba84 + 0x9b98c);
      iVar3 = DAT_0009ba88 + 0x9b994;
      iVar4 = DAT_0009ba8c + 0x9b99a;
      iVar5 = DAT_0009ba90 + 0x9b9a0;
      iVar6 = DAT_0009ba94 + 0x9b9a6;
      do {
        uVar9 = *(uint *)(iVar1 + param_1 * 0x218 + 0x24 + uVar7 * 4);
        if (*(QCamera3StreamMem **)((int)param_2 + 0xcc) == (QCamera3StreamMem *)0x0) {
          if (*(int *)(iVar10 + 0x3c) != 0) {
            mm_camera_debug_log(2,1,iVar4,0x3fe,iVar3);
          }
          uVar2 = 0xffffffda;
LAB_0009b9dc:
          if (*(int *)(iVar10 + 0x3c) != 0) {
            mm_camera_debug_log(2,1,iVar6,0xaa,iVar5,uVar9,uVar2);
          }
        }
        else {
          uVar2 = QCamera3StreamMem::invalidateCache
                            (*(QCamera3StreamMem **)((int)param_2 + 0xcc),uVar9);
          if (uVar2 != 0) goto LAB_0009b9dc;
        }
        iVar1 = *(int *)((int)param_2 + 0x28c);
        uVar8 = uVar8 | uVar2;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(param_1 * 0x218 + iVar1 + 0x21));
    }
  }
  return uVar8;
}

