
/* qcamera::QCameraStreamMemory::allocate(unsigned char, unsigned int, unsigned int) */

int __thiscall
qcamera::QCameraStreamMemory::allocate
          (QCameraStreamMemory *this,uchar param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined auStack72 [32];
  int local_28;
  
  uVar4 = (uint)param_1;
  piVar3 = *(int **)(DAT_000c632c + 0xc620c);
  local_28 = *piVar3;
  puVar7 = *(uint **)(DAT_000c6330 + 0xc6216);
  if ((1 < *puVar7) && (FUN_000c51f4(auStack72,uVar4,param_2,DAT_000c6338 + 0xc6230), 1 < *puVar7))
  {
    if ((**(byte **)(DAT_000c633c + 0xc6240) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000c6340 + 0xc624e) + 1) << 0x1d) < 0) {
      atrace_begin_body(auStack72);
    }
  }
  iVar1 = QCameraMemory::alloc((QCameraMemory *)this,uVar4,param_2,0x2000000,param_3);
  if (iVar1 < 0) {
    if (1 < *puVar7) {
      if ((**(byte **)(DAT_000c6344 + 0xc62e0) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c6348 + 0xc62ee) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
  }
  else {
    if (uVar4 != 0) {
      puVar6 = (undefined4 *)(this + 0x14);
      puVar5 = (undefined4 *)(this + 0x61c);
      do {
        if (param_3 == 1) {
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(this + 0x618))(puVar6[-3],*puVar6,1,*(undefined4 *)(this + 0x71c));
        }
        puVar6 = puVar6 + 6;
        *puVar5 = uVar2;
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
    this[5] = (QCameraStreamMemory)param_1;
    if (1 < *puVar7) {
      if ((**(byte **)(DAT_000c634c + 0xc62b4) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c6350 + 0xc62c4) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
    iVar1 = 0;
  }
  if (*piVar3 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

