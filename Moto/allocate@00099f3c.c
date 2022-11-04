
/* qcamera::QCamera3HeapMemory::allocate(unsigned int) */

void __thiscall qcamera::QCamera3HeapMemory::allocate(QCamera3HeapMemory *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  QCamera3HeapMemory *pQVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  QCamera3HeapMemory *pQVar8;
  int *piVar9;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  piVar9 = *(int **)(DAT_0009a0ec + 0x99f4a);
  local_28 = *piVar9;
  if (*(int *)(this + 4) == 0) {
    pQVar3 = *(QCamera3HeapMemory **)(this + 0x60c);
    if (pQVar3 == (QCamera3HeapMemory *)0x0) {
      pQVar3 = (QCamera3HeapMemory *)0x0;
    }
    else {
      iVar6 = 0;
      pQVar8 = (QCamera3HeapMemory *)0x0;
      do {
        iVar4 = allocOneBuffer(pQVar3,(QCamera3MemInfo *)(this + iVar6 + 8),0x2000000,param_1);
        if (iVar4 < 0) {
          if (*(int *)(*(int *)(DAT_0009a0fc + 0x99fee) + 0x20) != 0) {
            uVar2 = 0x245;
            iVar6 = DAT_0009a100 + 0x99ffe;
            iVar4 = DAT_0009a104 + 0x9a006;
LAB_0009a05e:
            mm_camera_debug_log(1,1,iVar4,uVar2,iVar6);
          }
LAB_0009a062:
          if (pQVar8 != (QCamera3HeapMemory *)0x0) {
            piVar7 = (int *)(this + 0xc);
            pQVar3 = (QCamera3HeapMemory *)0x0;
            do {
              munmap(*(void **)(this + (int)pQVar3 * 4 + 0x408),piVar7[2]);
              *(undefined4 *)(this + (int)pQVar3 * 4 + 0x408) = 0;
              if (-1 < piVar7[-1]) {
                close(piVar7[-1]);
                piVar7[-1] = -1;
              }
              if (-1 < *piVar7) {
                local_2c = piVar7[1];
                ioctl(*piVar7,0xc0044901,&local_2c);
                close(*piVar7);
                *piVar7 = -1;
              }
              piVar7[1] = 0;
              piVar7[2] = 0;
              piVar7 = piVar7 + 4;
              pQVar3 = pQVar3 + 1;
            } while (pQVar8 != pQVar3);
          }
          uVar2 = 0xfffffff4;
          goto LAB_0009a0d6;
        }
        pvVar5 = mmap((void *)0x0,*(size_t *)(this + iVar6 + 0x14),3,1,*(int *)(this + iVar6 + 8),0)
        ;
        if (pvVar5 == (void *)0xffffffff) {
          if (-1 < *(int *)(this + iVar6 + 8)) {
            close(*(int *)(this + iVar6 + 8));
            *(undefined4 *)(this + iVar6 + 8) = 0xffffffff;
          }
          if (-1 < *(int *)(this + iVar6 + 0xc)) {
            local_30 = *(undefined4 *)(this + iVar6 + 0x10);
            ioctl(*(int *)(this + iVar6 + 0xc),0xc0044901,&local_30);
            close(*(int *)(this + iVar6 + 0xc));
            *(undefined4 *)(this + iVar6 + 0xc) = 0xffffffff;
          }
          *(undefined4 *)(this + iVar6 + 0x10) = 0;
          *(undefined4 *)(this + iVar6 + 0x14) = 0;
          if (*(int *)(*(int *)(DAT_0009a108 + 0x9a046) + 0x20) != 0) {
            uVar2 = 0x250;
            iVar6 = DAT_0009a10c + 0x9a056;
            iVar4 = DAT_0009a110 + 0x9a060;
            goto LAB_0009a05e;
          }
          goto LAB_0009a062;
        }
        iVar1 = (int)pQVar8 * 4;
        iVar6 = iVar6 + 0x10;
        pQVar8 = pQVar8 + 1;
        *(void **)(this + iVar1 + 0x408) = pvVar5;
        pQVar3 = *(QCamera3HeapMemory **)(this + 0x60c);
      } while (pQVar8 < pQVar3);
      if (iVar4 != 0) {
        uVar2 = 0;
        goto LAB_0009a0d6;
      }
    }
    *(QCamera3HeapMemory **)(this + 4) = pQVar3;
    uVar2 = 0;
  }
  else if (*(int *)(*(int *)(DAT_0009a0f0 + 0x99f5e) + 0x20) == 0) {
    uVar2 = 0xffffffb5;
  }
  else {
    mm_camera_debug_log(1,1,DAT_0009a0f8 + 0x99f76,0x23e,DAT_0009a0f4 + 0x99f6e);
    uVar2 = 0xffffffb5;
  }
LAB_0009a0d6:
  if (*piVar9 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

