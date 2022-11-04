
/* qcamera::QCamera3HardwareInterface::handlePendingReprocResults(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::handlePendingReprocResults
          (QCamera3HardwareInterface *this,uint param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  uint local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack52;
  undefined4 local_30;
  uint local_28;
  int local_24;
  
  piVar8 = *(int **)(DAT_00084a20 + 0x84880);
  local_24 = *piVar8;
  pvVar6 = *(void **)(this + 0x1fc);
  do {
    pvVar6 = *(void **)((int)pvVar6 + 0x44);
    if (pvVar6 == *(void **)(this + 0x1fc)) goto LAB_000849ca;
  } while (*(uint *)((int)pvVar6 + 0x3c) != param_1);
  iVar1 = FrameNumberRegistry::getFrameworkFrameNumber
                    ((FrameNumberRegistry *)(this + 0x1e4),*(uint *)((int)pvVar6 + 8),&local_50);
  if (iVar1 == 0) {
    if (local_50 == 0xffffffff) {
      if (*(int *)(*(int *)(DAT_00084a30 + 0x849e2) + 0x20) != 0) {
        uVar4 = 0x110d;
        iVar1 = DAT_00084a34 + 0x849f6;
        iVar3 = DAT_00084a38 + 0x849fe;
        goto LAB_000848c8;
      }
    }
    else {
      *(uint *)((int)pvVar6 + 8) = local_50;
      (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),pvVar6);
    }
  }
  else if (*(int *)(*(int *)(DAT_00084a24 + 0x848b2) + 0x20) != 0) {
    uVar4 = 0x1109;
    iVar1 = DAT_00084a28 + 0x848c2;
    iVar3 = DAT_00084a2c + 0x848ca;
LAB_000848c8:
    mm_camera_debug_log(1,1,iVar3,uVar4,iVar1);
  }
  iVar1 = *(int *)(DAT_00084a3c + 0x848e8);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00084a44 + 0x84906,0xc76,DAT_00084a40 + 0x848fc,param_1);
  }
  piVar7 = *(int **)(this + 0x204);
  do {
    piVar7 = (int *)piVar7[0x15];
    if (piVar7 == *(int **)(this + 0x204)) goto LAB_000849bc;
  } while (*piVar7 != *(int *)((int)pvVar6 + 0x3c));
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00084a4c + 0x84938,0xc7e,DAT_00084a48 + 0x8492c,*piVar7);
  }
  local_38 = 0;
  uStack52 = 0;
  local_48 = 1;
  local_30 = 0;
  local_44 = (int)pvVar6 + 0x28;
  local_40 = piVar7[0xc];
  local_4c = piVar7[0xd];
  local_3c = 2;
  local_50 = param_1;
  iVar3 = FrameNumberRegistry::getFrameworkFrameNumber
                    ((FrameNumberRegistry *)(this + 0x1e4),param_1,&local_28);
  if (iVar3 == 0) {
    if (local_28 != 0xffffffff) {
      local_50 = local_28;
      (***(code ***)(this + 0x88))(*(code ***)(this + 0x88),&local_50);
      goto LAB_00084996;
    }
    if (*(int *)(iVar1 + 0x2c) == 0) goto LAB_00084996;
    uVar4 = 4;
    uVar5 = 0x10ef;
    iVar1 = DAT_00084a58 + 0x84a12;
    iVar3 = DAT_00084a5c + 0x84a1a;
  }
  else {
    if (*(int *)(iVar1 + 0x20) == 0) goto LAB_00084996;
    uVar4 = 1;
    uVar5 = 0x10eb;
    iVar1 = DAT_00084a50 + 0x84978;
    iVar3 = DAT_00084a54 + 0x84980;
  }
  mm_camera_debug_log(1,uVar4,iVar3,uVar5,iVar1);
LAB_00084996:
  if ((void *)piVar7[0xc] != (void *)0x0) {
    free((void *)piVar7[0xc]);
    piVar7[0xc] = 0;
  }
  if (piVar7[0xd] != 0) {
    free_camera_metadata();
  }
  iVar1 = piVar7[0x14];
  iVar3 = piVar7[0x15];
  *(int *)(iVar1 + 0x54) = iVar3;
  *(int *)(iVar3 + 0x50) = iVar1;
  pvVar2 = (void *)FUN_00098ffc((int)piVar7);
  operator_delete(pvVar2);
LAB_000849bc:
  iVar1 = *(int *)((int)pvVar6 + 0x40);
  iVar3 = *(int *)((int)pvVar6 + 0x44);
  *(int *)(iVar1 + 0x44) = iVar3;
  *(int *)(iVar3 + 0x40) = iVar1;
  operator_delete(pvVar6);
LAB_000849ca:
  if (*piVar8 == local_24) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

