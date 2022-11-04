
/* qcamera::QCameraFlash::initFlash(int) */

uint __thiscall qcamera::QCameraFlash::initFlash(QCameraFlash *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
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
  
  piVar4 = *(int **)(DAT_00037818 + 0x3761a);
  local_18 = *piVar4;
  local_c1 = false;
  uStack99 = 0;
  uStack96 = 0;
  local_73 = 0;
  uStack107 = 0;
  local_68 = 0;
  local_83 = 0;
  uStack123 = 0;
  local_93 = 0;
  uStack139 = 0;
  local_94 = 0x2f;
  local_98 = 0x7665642f;
  if (4 < (uint)param_1) {
    if (*(int *)(*(int *)(DAT_0003781c + 0x37662) + 0x3c) == 0) {
      uVar3 = 0xffffffea;
    }
    else {
      mm_camera_debug_log();
      uVar3 = 0xffffffea;
    }
    goto LAB_00037804;
  }
  QCamera3HardwareInterface::getFlashInfo(param_1,&local_c1,acStack88);
  __strlcat_chk();
  if (local_c1 == false) {
    if (*(int *)(*(int *)(DAT_00037828 + 0x376e0) + 0x3c) == 0) {
      uVar3 = 0xffffffda;
    }
    else {
      mm_camera_debug_log();
      uVar3 = 0xffffffda;
    }
  }
  else if (this[param_1 + 0x21] == (QCameraFlash)0x0) {
    piVar1 = (int *)(this + param_1 * 4 + 8);
    if (*piVar1 < 0) {
      iVar2 = __open_2();
      *piVar1 = iVar2;
      if (iVar2 < 0) {
        iVar2 = *(int *)(*(int *)(DAT_0003784c + 0x377c8) + 0x3c);
        goto joined_r0x000377ca;
      }
      local_ac = 0;
      uStack164 = 0;
      local_bc = 0;
      uStack180 = 0;
      local_9c = &local_d8;
      local_d4 = 0;
      uStack204 = 0;
      local_d8 = 3;
      local_c0 = 0;
      uVar3 = ioctl(*piVar1,0xc02856cd);
      if (0x7fffffff < uVar3) {
        if (*(int *)(*(int *)(DAT_00037858 + 0x3778e) + 0x3c) != 0) {
          mm_camera_debug_log();
        }
        close(*piVar1);
        *piVar1 = -1;
      }
      usleep(5000);
    }
    else {
      if (*(int *)(*(int *)(DAT_00037840 + 0x37712) + 0x48) == 0) {
        uVar3 = 0;
        goto LAB_00037804;
      }
      mm_camera_debug_log();
      uVar3 = 0;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_00037834 + 0x376b0) + 0x3c);
joined_r0x000377ca:
    if (iVar2 == 0) {
      uVar3 = 0xfffffff0;
    }
    else {
      mm_camera_debug_log();
      uVar3 = 0xfffffff0;
    }
  }
  if (*(int *)(*(int *)(DAT_00037864 + 0x377ea) + 0x48) != 0) {
    mm_camera_debug_log();
  }
LAB_00037804:
  if (*piVar4 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

