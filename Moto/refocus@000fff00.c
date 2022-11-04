
/* BokehImpl::refocus(BokehOneData*, BokehOneData*, BokehOneData*) */

void __thiscall
BokehImpl::refocus(BokehImpl *this,BokehOneData *param_1,BokehOneData *param_2,BokehOneData *param_3
                  )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 local_b0;
  undefined8 uStack168;
  undefined8 local_a0;
  undefined8 uStack152;
  undefined8 local_90;
  undefined auStack136 [40];
  undefined4 local_60;
  undefined4 uStack92;
  undefined4 local_58;
  undefined4 uStack84;
  undefined4 local_50;
  undefined4 uStack76;
  undefined4 uStack72;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack60;
  int local_34;
  
  piVar4 = *(int **)(DAT_0010006c + 0xfff14);
  local_34 = *piVar4;
  if (*(int *)(this + 4) == 1) {
    uStack92 = *(undefined4 *)(param_1 + 0x14);
    local_60 = *(undefined4 *)(param_1 + 0x18);
    local_58 = *(undefined4 *)(param_1 + 8);
    uStack84 = *(undefined4 *)(param_1 + 0xc);
    uStack168 = *(undefined8 *)(param_1 + 8);
    uStack76 = *(undefined4 *)(param_1 + 0x24);
    local_50 = *(undefined4 *)(param_1 + 0x3c);
    uStack60 = *(undefined4 *)(param_1 + 0x40);
    local_44 = *(undefined4 *)(param_1 + 0x60);
    local_40 = *(undefined4 *)(param_1 + 100);
    local_a0 = CONCAT44(uStack76,local_50);
    uStack152 = CONCAT44(local_44,uStack84);
    local_90 = CONCAT44(uStack60,local_40);
    local_b0 = CONCAT44(uStack92,*(undefined4 *)(param_3 + 0x18));
    uStack72 = uStack84;
    if (this[0x419] == (BokehImpl)0x0) {
      iVar1 = dbe2PrepareComputation
                        (*(undefined4 *)(this + 8),&local_60,auStack136,0x3f800000,uStack60,1,
                         0xffffffff);
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(DAT_00100080 + 0x100038) + 0x20) != 0) {
          iVar2 = DAT_00100084 + 0x100048;
          iVar1 = DAT_00100088 + 0x10004a;
          iVar3 = DAT_0010008c + 0x10004c;
          uVar5 = 0x137;
          goto LAB_000ffff6;
        }
        goto LAB_000ffffa;
      }
      this[0x419] = (BokehImpl)0x1;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    (**(code **)(*(int *)this + 0x24))
              (this,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14));
    iVar1 = dbe2BokehImage(*(undefined4 *)(this + 8),*(undefined4 *)(param_1 + 0x44),
                           *(undefined4 *)(param_1 + 0x48),0x80,uVar5,&local_b0);
    if (iVar1 == 0) {
      uVar5 = 0;
      goto LAB_000ffffe;
    }
    if (*(int *)(*(int *)(DAT_00100090 + 0xfffb0) + 0x20) != 0) {
      iVar2 = DAT_00100094 + 0xfffbe;
      iVar1 = DAT_00100098 + 0xfffc0;
      iVar3 = DAT_0010009c + 0xfffc2;
      uVar5 = 0x142;
      goto LAB_000ffff6;
    }
  }
  else if (*(int *)(*(int *)(DAT_00100070 + 0xfffd8) + 0x20) != 0) {
    uVar5 = 0x122;
    iVar2 = DAT_00100074 + 0xfffea;
    iVar1 = DAT_00100078 + 0xfffec;
    iVar3 = DAT_0010007c + 0xfffee;
LAB_000ffff6:
    mm_camera_debug_log(1,1,iVar2,uVar5,iVar3,iVar1,iVar2);
  }
LAB_000ffffa:
  uVar5 = 0xffffffff;
LAB_000ffffe:
  if (*piVar4 == local_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

