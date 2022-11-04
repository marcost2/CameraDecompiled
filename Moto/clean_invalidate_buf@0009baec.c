
/* qcamera::QCamera3Stream::clean_invalidate_buf(unsigned int, void*) */

uint qcamera::QCamera3Stream::clean_invalidate_buf(uint param_1,void *param_2)

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
    if (*(int *)(*(int *)(DAT_0009bc14 + 0x9bbb2) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009bc1c + 0x9bbc8,199,DAT_0009bc18 + 0x9bbc0);
    }
    uVar8 = 0xfffffff4;
  }
  else if (*(int *)((int)param_2 + 0x280) == 0) {
    if (*(QCamera3StreamMem **)((int)param_2 + 0xcc) != (QCamera3StreamMem *)0x0) {
      uVar8 = QCamera3StreamMem::cleanInvalidateCache
                        (*(QCamera3StreamMem **)((int)param_2 + 0xcc),param_1);
      return uVar8;
    }
    if (*(int *)(*(int *)(DAT_0009bc34 + 0x9bbec) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009bc3c + 0x9bc04,0x413,DAT_0009bc38 + 0x9bbfc);
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
      iVar10 = *(int *)(DAT_0009bc20 + 0x9bb28);
      iVar3 = DAT_0009bc24 + 0x9bb30;
      iVar4 = DAT_0009bc28 + 0x9bb36;
      iVar5 = DAT_0009bc2c + 0x9bb3c;
      iVar6 = DAT_0009bc30 + 0x9bb42;
      do {
        uVar9 = *(uint *)(iVar1 + param_1 * 0x218 + 0x24 + uVar7 * 4);
        if (*(QCamera3StreamMem **)((int)param_2 + 0xcc) == (QCamera3StreamMem *)0x0) {
          if (*(int *)(iVar10 + 0x3c) != 0) {
            mm_camera_debug_log(2,1,iVar4,0x413,iVar3);
          }
          uVar2 = 0xffffffda;
LAB_0009bb78:
          if (*(int *)(iVar10 + 0x3c) != 0) {
            mm_camera_debug_log(2,1,iVar6,0xd2,iVar5,uVar9,uVar2);
          }
        }
        else {
          uVar2 = QCamera3StreamMem::cleanInvalidateCache
                            (*(QCamera3StreamMem **)((int)param_2 + 0xcc),uVar9);
          if (uVar2 != 0) goto LAB_0009bb78;
        }
        iVar1 = *(int *)((int)param_2 + 0x28c);
        uVar8 = uVar8 | uVar2;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(param_1 * 0x218 + iVar1 + 0x21));
    }
  }
  return uVar8;
}

