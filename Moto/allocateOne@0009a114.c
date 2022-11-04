
/* qcamera::QCamera3HeapMemory::allocateOne(unsigned int) */

void __thiscall qcamera::QCamera3HeapMemory::allocateOne(QCamera3HeapMemory *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 local_18;
  int local_14;
  
  piVar6 = *(int **)(DAT_0009a248 + 0x9a122);
  local_14 = *piVar6;
  iVar4 = *(int *)(this + 4);
  if (*(uint *)(this + 0x60c) < iVar4 + 1U) {
    if (*(int *)(*(int *)(DAT_0009a24c + 0x9a138) + 0x20) == 0) {
      iVar2 = -0x4b;
    }
    else {
      mm_camera_debug_log(1,1,DAT_0009a254 + 0x9a154,0x279,DAT_0009a250 + 0x9a146,iVar4,
                          *(uint *)(this + 0x60c));
      iVar2 = -0x4b;
    }
    goto LAB_0009a238;
  }
  iVar4 = allocOneBuffer(this + iVar4 * 0x10,(QCamera3MemInfo *)(this + iVar4 * 0x10 + 8),0x2000000,
                         param_1);
  if (iVar4 < 0) {
    if (*(int *)(*(int *)(DAT_0009a258 + 0x9a1b6) + 0x20) != 0) {
      uVar5 = 0x27f;
      iVar4 = DAT_0009a25c + 0x9a1c6;
      iVar2 = DAT_0009a260 + 0x9a1ce;
LAB_0009a230:
      mm_camera_debug_log(1,1,iVar2,uVar5,iVar4);
    }
  }
  else {
    pvVar3 = mmap((void *)0x0,*(size_t *)(this + *(int *)(this + 4) * 0x10 + 0x14),3,1,
                  *(int *)(this + *(int *)(this + 4) * 0x10 + 8),0);
    iVar2 = *(int *)(this + 4);
    if (pvVar3 != (void *)0xffffffff) {
      *(void **)(this + iVar2 * 4 + 0x408) = pvVar3;
      iVar2 = *(int *)(this + 4);
      if (iVar4 == 0) {
        iVar2 = iVar2 + 1;
        *(int *)(this + 4) = iVar2;
      }
      iVar2 = iVar2 + -1;
      goto LAB_0009a238;
    }
    iVar4 = *(int *)(this + iVar2 * 0x10 + 8);
    if (-1 < iVar4) {
      close(iVar4);
      *(int *)(this + iVar2 * 0x10 + 8) = -1;
    }
    piVar1 = (int *)(this + iVar2 * 0x10 + 0xc);
    if (-1 < *piVar1) {
      local_18 = *(undefined4 *)(this + iVar2 * 0x10 + 0x10);
      ioctl(*piVar1,0xc0044901,&local_18);
      close(*piVar1);
      *piVar1 = -1;
    }
    *(undefined4 *)(this + iVar2 * 0x10 + 0x10) = 0;
    *(undefined4 *)(this + iVar2 * 0x10 + 0x14) = 0;
    if (*(int *)(*(int *)(DAT_0009a264 + 0x9a21a) + 0x20) != 0) {
      uVar5 = 0x28a;
      iVar4 = DAT_0009a268 + 0x9a22a;
      iVar2 = DAT_0009a26c + 0x9a232;
      goto LAB_0009a230;
    }
  }
  iVar2 = -0xc;
LAB_0009a238:
  if (*piVar6 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

