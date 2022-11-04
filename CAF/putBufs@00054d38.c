
/* qcamera::QCamera3Stream::putBufs(mm_camera_map_unmap_ops_tbl_t*) */

uint __thiscall
qcamera::QCamera3Stream::putBufs(QCamera3Stream *this,mm_camera_map_unmap_ops_tbl_t *param_1)

{
  int *piVar1;
  int iVar2;
  Mutex *extraout_r1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  Autolock aAStack44 [4];
  int local_28;
  
  piVar1 = *(int **)(DAT_00054e34 + 0x54d48);
  local_28 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0x27c));
  if (this[0x34] == (QCamera3Stream)0x0) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    iVar4 = 0x210;
    iVar6 = *(int *)(DAT_00054e44 + 0x54d6a);
    uVar3 = 0;
    do {
      iVar2 = QCamera3StreamMem::valid(*(QCamera3StreamMem **)(this + 0xcc),uVar5);
      if ((((iVar2 != 0) && (*(int *)(*(int *)(this + 0xd0) + iVar4) != 0)) &&
          (uVar3 = (**(code **)(param_1 + 8))(uVar5,0xffffffff,3,*(undefined4 *)(param_1 + 0xc)),
          0x7fffffff < uVar3)) && (*(int *)(iVar6 + 0x3c) != 0)) {
        mm_camera_debug_log();
      }
      iVar4 = iVar4 + 0x218;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (byte)this[0x34]);
  }
  *(undefined4 *)(this + 0xd0) = 0;
  __aeabi_memclr4(this + 0xd4,0x188);
  if ((*(int *)(this + 0xcc) == 0) && (*(int *)(*(int *)(DAT_00054e38 + 0x54dec) + 0x3c) != 0)) {
    mm_camera_debug_log();
  }
  (**(code **)(**(int **)(this + 0x278) + 0x38))();
  *(undefined4 *)(this + 0xcc) = 0;
  android::Mutex::Autolock::_Autolock(aAStack44,extraout_r1);
  if (*piVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

