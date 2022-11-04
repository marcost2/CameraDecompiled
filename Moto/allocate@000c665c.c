
/* qcamera::QCameraVideoMemory::allocate(unsigned char, unsigned int, unsigned int) */

int __thiscall
qcamera::QCameraVideoMemory::allocate
          (QCameraVideoMemory *this,uchar param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  undefined auStack64 [32];
  int local_20;
  
  uVar4 = (uint)param_1;
  piVar7 = *(int **)(DAT_000c6824 + 0xc6670);
  local_20 = *piVar7;
  puVar8 = *(uint **)(DAT_000c6828 + 0xc667e);
  if (1 < *puVar8) {
    FUN_000c51f4(auStack64,uVar4,param_2,DAT_000c6830 + 0xc669a);
    if (1 < *puVar8) {
      if ((**(byte **)(DAT_000c6834 + 0xc66aa) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c6838 + 0xc66ba) + 1) << 0x1d) < 0) {
        atrace_begin_body(auStack64);
      }
    }
  }
  iVar1 = QCameraStreamMemory::allocate((QCameraStreamMemory *)this,param_1,param_2,param_3);
  if (iVar1 < 0) {
    if (*puVar8 < 2) goto LAB_000c6790;
    if ((**(byte **)(DAT_000c683c + 0xc671a) & 1) == 0) {
      atrace_setup();
    }
    piVar2 = (int *)(DAT_000c6840 + 0xc6728);
LAB_000c6726:
    if ((int)((uint)*(byte *)(*piVar2 + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  else {
    if (-1 < (int)((uint)(byte)this[0x610] << 0x1e)) {
      iVar1 = allocateMeta(this,param_1,1,5);
      if (iVar1 != 0) {
        if (*puVar8 < 2) goto LAB_000c6790;
        if ((**(byte **)(DAT_000c6850 + 0xc66fa) & 1) == 0) {
          atrace_setup();
        }
        piVar2 = (int *)(DAT_000c6854 + 0xc670a);
        goto LAB_000c6726;
      }
      if (uVar4 != 0) {
        puVar3 = (undefined4 *)(this + 0x14);
        uVar5 = 0;
        do {
          iVar1 = *(int *)(this + uVar5 * 4 + 0x82c);
          if (iVar1 == 0) {
            if (*(int *)(*(int *)(DAT_000c6844 + 0xc67a8) + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000c684c + 0xc67c0,0x56d,DAT_000c6848 + 0xc67b8);
            }
            if (1 < *puVar8) {
              if ((**(byte **)(DAT_000c6858 + 0xc67d0) & 1) == 0) {
                atrace_setup();
              }
              if ((int)((uint)*(byte *)(*(int *)(DAT_000c685c + 0xc67de) + 1) << 0x1d) < 0) {
                atrace_end_body();
                iVar1 = -0xc;
                goto LAB_000c6790;
              }
            }
            iVar1 = -0xc;
            goto LAB_000c6790;
          }
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar1 + 0xc) = puVar3[-3];
          *(undefined4 *)(iVar1 + 0x10) = 0;
          uVar6 = *puVar3;
          puVar3 = puVar3 + 6;
          *(undefined4 *)(iVar1 + 0x14) = uVar6;
          *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(this + 0x824);
          *(undefined4 *)(iVar1 + 0x1c) = 0;
          *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(this + 0x828);
        } while (uVar5 < uVar4);
      }
    }
    this[5] = (QCameraVideoMemory)param_1;
    if (1 < *puVar8) {
      if ((**(byte **)(DAT_000c6860 + 0xc677a) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c6864 + 0xc6788) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
    iVar1 = 0;
  }
LAB_000c6790:
  if (*piVar7 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

