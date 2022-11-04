
/* qcamera::BSTLiveBokeh::dump(BokehOneData*, BokehOneData*) */

void __thiscall
qcamera::BSTLiveBokeh::dump(BSTLiveBokeh *this,BokehOneData *param_1,BokehOneData *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_bc;
  undefined4 uStack184;
  undefined4 local_b4;
  timespec local_b0;
  char acStack168 [128];
  int local_28;
  
  piVar5 = *(int **)(DAT_00101a6c + 0x10199e);
  local_28 = *piVar5;
  uVar2 = (uint)(byte)this[9];
  bVar6 = uVar2 != 0;
  if (bVar6) {
    uVar2 = *(uint *)(this + 0xc);
  }
  if (bVar6 && uVar2 != 0) {
    clock_gettime(1,&local_b0);
    lVar1 = (longlong)local_b0.tv_sec * 1000000000 + (longlong)local_b0.tv_nsec;
    uVar3 = __aeabi_ldivmod((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),(uint)&DAT_000f4240,0);
    uStack184 = *(undefined4 *)(param_1 + 0x40);
    local_b4 = *(undefined4 *)(param_1 + 0x50);
    local_bc = *(undefined4 *)(param_1 + 0x48);
    iVar4 = DAT_00101a70 + 0x101a10;
    FUN_00101a74(acStack168,local_bc,iVar4,uVar3);
    BokehOneData::dump(param_1,acStack168);
    uStack184 = *(undefined4 *)(param_2 + 0x40);
    local_bc = *(undefined4 *)(param_2 + 0x48);
    local_b4 = *(undefined4 *)(param_2 + 0x50);
    FUN_00101a74(acStack168,&local_bc,iVar4,uVar3);
    BokehOneData::dump(param_2,acStack168);
    (**(code **)(*(int *)this + 0x18))(this,0);
  }
  if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

