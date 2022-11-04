
/* qcamera::QCameraHeapMemory::allocateMore(unsigned char, unsigned int) */

int __thiscall
qcamera::QCameraHeapMemory::allocateMore(QCameraHeapMemory *this,uchar param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  QCameraHeapMemory QVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  int local_48 [8];
  int local_28;
  
  uVar3 = (uint)param_1;
  piVar7 = *(int **)(DAT_000c5f9c + 0xc5db2);
  local_28 = *piVar7;
  puVar8 = *(uint **)(DAT_000c5fa0 + 0xc5dc0);
  if ((1 < *puVar8) && (FUN_000c51f4(local_48,uVar3,param_2,DAT_000c5fa8 + 0xc5ddc), 1 < *puVar8)) {
    if ((**(byte **)(DAT_000c5fac + 0xc5dec) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000c5fb0 + 0xc5dfc) + 1) << 0x1d) < 0) {
      atrace_begin_body(local_48);
    }
  }
  iVar1 = QCameraMemory::alloc((QCameraMemory *)this,uVar3,param_2,0x2000000,0);
  if (iVar1 < 0) {
    if (1 < *puVar8) {
      if ((**(byte **)(DAT_000c5fb4 + 0xc5e9e) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c5fb8 + 0xc5eac) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
  }
  else {
    QVar4 = this[5];
    uVar5 = (uint)(byte)QVar4;
    if (uVar3 != 0) {
      piVar6 = (int *)(this + uVar5 * 0x18 + 8);
      do {
        pvVar2 = mmap((void *)0x0,piVar6[3],3,1,*piVar6,0);
        if (pvVar2 == (void *)0xffffffff) {
          if ((byte)this[5] < uVar5) {
            piVar6 = piVar6 + -4;
            do {
              munmap(*(void **)(this + uVar5 * 4 + 0x614),piVar6[1]);
              *(undefined4 *)(this + uVar5 * 4 + 0x614) = 0;
              if (-1 < piVar6[-2]) {
                close(piVar6[-2]);
                piVar6[-2] = -1;
              }
              uVar5 = uVar5 - 1;
              if (-1 < piVar6[-1]) {
                local_48[0] = *piVar6;
                ioctl(piVar6[-1],0xc0044901,local_48);
                close(piVar6[-1]);
                piVar6[-1] = -1;
              }
              *piVar6 = 0;
              piVar6[1] = 0;
              piVar6 = piVar6 + -6;
            } while ((int)(uint)(byte)this[5] < (int)uVar5);
          }
          if (1 < *puVar8) {
            if ((**(byte **)(DAT_000c5fbc + 0xc5f38) & 1) == 0) {
              atrace_setup();
            }
            if ((int)((uint)*(byte *)(*(int *)(DAT_000c5fc0 + 0xc5f4a) + 1) << 0x1d) < 0) {
              atrace_end_body();
            }
          }
          iVar1 = -0xc;
          goto LAB_000c5f5e;
        }
        *(void **)(this + uVar5 * 4 + 0x618) = pvVar2;
        piVar6 = piVar6 + 6;
        uVar5 = uVar5 + 1;
        QVar4 = this[5];
      } while (uVar5 < uVar3 + (byte)QVar4);
    }
    this[5] = (QCameraHeapMemory)((char)QVar4 + param_1);
    if (1 < *puVar8) {
      if ((**(byte **)(DAT_000c5fc4 + 0xc5e74) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c5fc8 + 0xc5e84) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
    iVar1 = 0;
  }
LAB_000c5f5e:
  if (*piVar7 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

