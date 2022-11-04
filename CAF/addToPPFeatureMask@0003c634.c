
/* qcamera::QCamera3HardwareInterface::addToPPFeatureMask(int, unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::addToPPFeatureMask
          (QCamera3HardwareInterface *this,int param_1,uint param_2)

{
  int iVar1;
  char *__format;
  int *piVar2;
  uint local_80;
  undefined4 uStack124;
  char local_78;
  char local_77;
  int local_1c;
  
  piVar2 = *(int **)(DAT_0003c764 + 0x3c646);
  local_1c = *piVar2;
  iVar1 = property_get();
  if (((iVar1 < 3) || (local_78 != '0')) || (local_77 != 'x')) {
    __format = (char *)(DAT_0003c774 + 0x3c678);
  }
  else {
    __format = (char *)(DAT_0003c770 + 0x3c672);
  }
  iVar1 = sscanf(&local_78,__format,&local_80);
  if (iVar1 != 1) {
    local_80 = 0;
    uStack124 = 0;
    iVar1 = *(int *)(*(int *)(DAT_0003c778 + 0x3c6da) + 0x20);
    goto joined_r0x0003c6dc;
  }
  if ((param_1 == 0x22) && (this[0x15c] != (QCamera3HardwareInterface)0x0)) {
    if ((int)((local_80 >> 0x18) << 0x19) < 0) {
      *(uint *)(this + param_2 * 8 + 0x288) = *(uint *)(this + param_2 * 8 + 0x288) | 0x40000000;
      iVar1 = *(int *)(*(int *)(DAT_0003c784 + 0x3c70a) + 0x28);
    }
    else {
      if (-1 < (int)((local_80 >> 0x10) << 0x1b)) goto LAB_0003c724;
      *(uint *)(this + param_2 * 8 + 0x288) = *(uint *)(this + param_2 * 8 + 0x288) | 0x100000;
      iVar1 = *(int *)(*(int *)(DAT_0003c790 + 0x3c6b6) + 0x28);
    }
    if (iVar1 != 0) {
      mm_camera_debug_log();
    }
  }
LAB_0003c724:
  iVar1 = *(int *)(*(int *)(DAT_0003c79c + 0x3c72a) + 0x2c);
joined_r0x0003c6dc:
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  if (*piVar2 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

