
/* qcamera::QCameraFlash::initFlash(int) */

uint __thiscall qcamera::QCameraFlash::initFlash(QCameraFlash *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 uStack204;
  bool local_c1;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 uStack180;
  undefined8 local_ac;
  undefined8 uStack164;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined local_94;
  undefined8 local_93;
  undefined8 uStack139;
  undefined8 local_83;
  undefined8 uStack123;
  undefined8 local_73;
  undefined3 uStack107;
  undefined5 local_68;
  undefined3 uStack99;
  undefined8 uStack96;
  char acStack88 [64];
  int local_18;
  
  piVar6 = *(int **)(DAT_0007c8b4 + 0x7c6be);
  local_18 = *piVar6;
  local_c1 = false;
  uStack99 = 0;
  uStack96 = 0;
  local_73 = 0;
  uStack107 = 0;
  local_68 = 0;
  local_93 = 0;
  uStack139 = 0;
  local_83 = 0;
  uStack123 = 0;
  local_94 = 0x2f;
  local_98 = 0x7665642f;
  if (4 < (uint)param_1) {
    if (*(int *)(*(int *)(DAT_0007c8b8 + 0x7c702) + 0x3c) == 0) {
      uVar5 = 0xffffffea;
    }
    else {
      mm_camera_debug_log(2,1,DAT_0007c8c0 + 0x7c71a,0x92,DAT_0007c8bc + 0x7c710,param_1);
      uVar5 = 0xffffffea;
    }
    goto LAB_0007c8a2;
  }
  QCamera3HardwareInterface::getFlashInfo(param_1,&local_c1,acStack88);
  __strlcat_chk(&local_98,acStack88,0x40,0x40);
  if (local_c1 == false) {
    if (*(int *)(*(int *)(DAT_0007c8c4 + 0x7c780) + 0x3c) == 0) {
      uVar5 = 0xffffffda;
    }
    else {
      mm_camera_debug_log(2,1,DAT_0007c8cc + 0x7c798,0xa0,DAT_0007c8c8 + 0x7c78e,param_1);
      uVar5 = 0xffffffda;
    }
  }
  else if (this[param_1 + 0x21] == (QCameraFlash)0x0) {
    piVar1 = (int *)(this + param_1 * 4 + 8);
    if (*piVar1 < 0) {
      puVar7 = &local_98;
      iVar2 = __open_2(puVar7,0x802);
      *piVar1 = iVar2;
      if (iVar2 < 0) {
        if (*(int *)(*(int *)(DAT_0007c8e8 + 0x7c866) + 0x3c) == 0) goto LAB_0007c87e;
        uVar4 = 0xae;
        iVar2 = DAT_0007c8ec + 0x7c874;
        iVar3 = DAT_0007c8f0 + 0x7c87e;
        goto LAB_0007c76a;
      }
      local_ac = 0;
      uStack164 = 0;
      local_bc = 0;
      uStack180 = 0;
      local_9c = &local_d8;
      local_c0 = 0;
      local_d4 = 0;
      uStack204 = 0;
      local_d8 = 3;
      uVar5 = ioctl(iVar2,0xc02856cd);
      if (0x7fffffff < uVar5) {
        if (*(int *)(*(int *)(DAT_0007c8f4 + 0x7c82c) + 0x3c) != 0) {
          mm_camera_debug_log(2,1,DAT_0007c8fc + 0x7c844,0xc5,DAT_0007c8f8 + 0x7c83a,param_1);
        }
        close(*piVar1);
        *piVar1 = -1;
      }
      usleep(5000);
    }
    else {
      if (*(int *)(*(int *)(DAT_0007c8dc + 0x7c7b2) + 0x48) == 0) {
        uVar5 = 0;
        goto LAB_0007c8a2;
      }
      mm_camera_debug_log(2,4,DAT_0007c8e4 + 0x7c7cc,0xa8,DAT_0007c8e0 + 0x7c7c2,param_1);
      uVar5 = 0;
    }
  }
  else if (*(int *)(*(int *)(DAT_0007c8d0 + 0x7c750) + 0x3c) == 0) {
LAB_0007c87e:
    uVar5 = 0xfffffff0;
  }
  else {
    uVar4 = 0xa4;
    iVar2 = DAT_0007c8d4 + 0x7c762;
    iVar3 = DAT_0007c8d8 + 0x7c76c;
    puVar7 = (undefined4 *)param_1;
LAB_0007c76a:
    mm_camera_debug_log(2,1,iVar3,uVar4,iVar2,puVar7);
    uVar5 = 0xfffffff0;
  }
  if (*(int *)(*(int *)(DAT_0007c900 + 0x7c888) + 0x48) != 0) {
    mm_camera_debug_log(2,4,DAT_0007c908 + 0x7c8a0,0xcf,DAT_0007c904 + 0x7c896,uVar5);
  }
LAB_0007c8a2:
  if (*piVar6 == local_18) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

