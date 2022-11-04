
/* qcamera::QCameraHeapMemory::allocate(unsigned char, unsigned int, unsigned int) */

uint __thiscall
qcamera::QCameraHeapMemory::allocate
          (QCameraHeapMemory *this,uchar param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int local_48 [8];
  int local_28;
  
  uVar5 = (uint)param_1;
  piVar9 = *(int **)(DAT_000c5d68 + 0xc5af8);
  local_28 = *piVar9;
  puVar6 = *(uint **)(DAT_000c5d6c + 0xc5b06);
  if ((*puVar6 < 2) || (FUN_000c51f4(local_48,uVar5,param_2,DAT_000c5d74 + 0xc5b1e), *puVar6 < 2)) {
LAB_000c5b40:
    if (param_3 == 1) goto LAB_000c5b44;
LAB_000c5b8c:
    uVar2 = QCameraMemory::alloc((QCameraMemory *)this,uVar5,param_2,0x2000000,0);
    if (-1 < (int)uVar2) {
      if (uVar5 != 0) {
        iVar7 = 0;
        uVar8 = 0;
        do {
          pvVar4 = mmap((void *)0x0,*(size_t *)(this + iVar7 + 0x14),3,1,*(int *)(this + iVar7 + 8),
                        0);
          if (pvVar4 == (void *)0xffffffff) {
            if (iVar7 != 0) {
              piVar3 = (int *)(this + iVar7 + -8);
              uVar2 = uVar8;
              do {
                munmap(*(void **)(this + uVar2 * 4 + 0x614),piVar3[1]);
                *(undefined4 *)(this + uVar2 * 4 + 0x614) = 0;
                if (-1 < piVar3[-2]) {
                  close(piVar3[-2]);
                  piVar3[-2] = -1;
                }
                uVar2 = uVar2 - 1;
                if (-1 < piVar3[-1]) {
                  local_48[0] = *piVar3;
                  ioctl(piVar3[-1],0xc0044901,local_48);
                  close(piVar3[-1]);
                  piVar3[-1] = -1;
                }
                *piVar3 = 0;
                piVar3[1] = 0;
                piVar3 = piVar3 + -6;
              } while (0 < (int)uVar2);
            }
            if (uVar8 < uVar5) {
              piVar3 = (int *)(this + iVar7 + 0xc);
              do {
                if (-1 < piVar3[-1]) {
                  close(piVar3[-1]);
                  piVar3[-1] = -1;
                }
                if (-1 < *piVar3) {
                  local_48[0] = piVar3[1];
                  ioctl(*piVar3,0xc0044901,local_48);
                  close(*piVar3);
                  *piVar3 = -1;
                }
                piVar3[1] = 0;
                piVar3[2] = 0;
                uVar5 = uVar5 - 1;
                piVar3 = piVar3 + 6;
              } while (uVar8 != uVar5);
            }
            if (*puVar6 < 2) {
              uVar2 = 0xfffffff4;
            }
            else {
              if ((**(byte **)(DAT_000c5d90 + 0xc5d04) & 1) == 0) {
                atrace_setup();
              }
              if ((int)((uint)*(byte *)(*(int *)(DAT_000c5d94 + 0xc5d16) + 1) << 0x1d) < 0) {
                atrace_end_body();
                uVar2 = 0xfffffff4;
              }
              else {
                uVar2 = 0xfffffff4;
              }
            }
            goto LAB_000c5d2a;
          }
          iVar1 = uVar8 * 4;
          iVar7 = iVar7 + 0x18;
          uVar8 = uVar8 + 1;
          *(void **)(this + iVar1 + 0x618) = pvVar4;
        } while (uVar8 < uVar5);
      }
      goto LAB_000c5bdc;
    }
    if (*puVar6 < 2) goto LAB_000c5d2a;
    if ((**(byte **)(DAT_000c5d88 + 0xc5c1e) & 1) == 0) {
      atrace_setup();
    }
    piVar3 = (int *)(DAT_000c5d8c + 0xc5c2e);
  }
  else {
    if ((**(byte **)(DAT_000c5d78 + 0xc5b2c) & 1) == 0) {
      atrace_setup();
    }
    if (-1 < (int)((uint)*(byte *)(*(int *)(DAT_000c5d7c + 0xc5b3a) + 1) << 0x1d))
    goto LAB_000c5b40;
    atrace_begin_body(local_48);
    if (param_3 != 1) goto LAB_000c5b8c;
LAB_000c5b44:
    uVar2 = QCameraMemory::alloc((QCameraMemory *)this,uVar5,param_2,0x2000000,1);
    if (uVar2 < 0x80000000) {
LAB_000c5bdc:
      if (uVar2 == 0) {
        this[5] = (QCameraHeapMemory)param_1;
      }
      if (1 < *puVar6) {
        if ((**(byte **)(DAT_000c5d98 + 0xc5bf2) & 1) == 0) {
          atrace_setup();
        }
        if ((int)((uint)*(byte *)(*(int *)(DAT_000c5d9c + 0xc5c02) + 1) << 0x1d) < 0) {
          atrace_end_body();
        }
      }
      uVar2 = 0;
      goto LAB_000c5d2a;
    }
    if (*puVar6 < 2) goto LAB_000c5d2a;
    if ((**(byte **)(DAT_000c5d80 + 0xc5b6c) & 1) == 0) {
      atrace_setup();
    }
    piVar3 = (int *)(DAT_000c5d84 + 0xc5b7c);
  }
  if ((int)((uint)*(byte *)(*piVar3 + 1) << 0x1d) < 0) {
    atrace_end_body();
  }
LAB_000c5d2a:
  if (*piVar9 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

