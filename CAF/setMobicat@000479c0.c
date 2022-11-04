
/* qcamera::QCamera3HardwareInterface::setMobicat() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::setMobicat(QCamera3HardwareInterface *this)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char acStack112 [92];
  int local_14;
  
  piVar3 = *(int **)(DAT_00047aa8 + 0x479cc);
  local_14 = *piVar3;
  property_get();
  uVar1 = atoi(acStack112);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = *(int *)(this + 0x14c);
    if (iVar2 == 0) {
      if (*(int *)(*(int *)(DAT_00047ab4 + 0x47a1c) + 0x20) == 0) goto LAB_00047a90;
      mm_camera_debug_log();
    }
    else {
      *(undefined4 *)(iVar2 + 0x7328c) = 1;
      *(undefined2 *)(iVar2 + 0x73288) = 0x200;
      *(undefined *)(*(int *)(this + 0x14c) + 0x56) = 1;
    }
    iVar2 = *(int *)(this + 0x14c);
    if (iVar2 == 0) {
      if (*(int *)(*(int *)(DAT_00047ac0 + 0x47a6e) + 0x20) != 0) {
        mm_camera_debug_log();
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0x73294) = 1;
      *(undefined2 *)(iVar2 + 0x73290) = 0x200;
      *(undefined *)(*(int *)(this + 0x14c) + 0x57) = 1;
    }
  }
LAB_00047a90:
  this[0x174] = SUB41(uVar1,0);
  if (*piVar3 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

