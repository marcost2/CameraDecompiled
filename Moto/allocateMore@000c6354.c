
/* qcamera::QCameraStreamMemory::allocateMore(unsigned char, unsigned int) */

int __thiscall
qcamera::QCameraStreamMemory::allocateMore(QCameraStreamMemory *this,uchar param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  undefined auStack72 [32];
  int local_28;
  
  uVar3 = (uint)param_1;
  piVar7 = *(int **)(DAT_000c6490 + 0xc6366);
  local_28 = *piVar7;
  puVar8 = *(uint **)(DAT_000c6494 + 0xc6374);
  if ((1 < *puVar8) && (FUN_000c51f4(auStack72,uVar3,param_2,DAT_000c649c + 0xc638e), 1 < *puVar8))
  {
    if ((**(byte **)(DAT_000c64a0 + 0xc639e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000c64a4 + 0xc63ac) + 1) << 0x1d) < 0) {
      atrace_begin_body(auStack72);
    }
  }
  iVar1 = QCameraMemory::alloc((QCameraMemory *)this,uVar3,param_2,0x2000000,0);
  if (iVar1 < 0) {
    if (1 < *puVar8) {
      if ((**(byte **)(DAT_000c64a8 + 0xc6416) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c64ac + 0xc6424) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
  }
  else {
    uVar4 = (uint)(byte)this[5];
    if (uVar3 != 0) {
      puVar6 = (undefined4 *)(this + uVar4 * 0x18 + 0x14);
      uVar5 = uVar4;
      do {
        uVar2 = (**(code **)(this + 0x618))(puVar6[-3],*puVar6,1,*(undefined4 *)(this + 0x71c));
        *(undefined4 *)(this + uVar5 * 4 + 0x61c) = uVar2;
        puVar6 = puVar6 + 6;
        uVar5 = uVar5 + 1;
        uVar4 = (byte)this[5] + uVar3;
      } while (uVar5 < uVar4);
    }
    this[5] = SUB41(uVar4,0);
    if (1 < *puVar8) {
      if ((**(byte **)(DAT_000c64b0 + 0xc6444) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c64b4 + 0xc6452) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
    iVar1 = 0;
  }
  if (*piVar7 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

