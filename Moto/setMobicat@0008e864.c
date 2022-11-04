
/* qcamera::QCamera3HardwareInterface::setMobicat() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::setMobicat(QCamera3HardwareInterface *this)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char acStack112 [92];
  int local_14;
  
  piVar3 = *(int **)(DAT_0008e924 + 0x8e870);
  local_14 = *piVar3;
  property_get(DAT_0008e928 + 0x8e880,acStack112,DAT_0008e92c + 0x8e882);
  uVar1 = atoi(acStack112);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = *(int *)(this + 0x1b4);
    if (iVar2 == 0) {
      __android_log_print(6,DAT_0008e930 + 0x8e8ca,DAT_0008e934 + 0x8e8cc,0,0x56);
    }
    else {
      *(undefined4 *)("%s: CameraMetadata is locked" + iVar2 + 0x16) = 1;
      *(undefined2 *)("%s: CameraMetadata is locked" + iVar2 + 0x12) = 0x200;
      *(undefined *)(*(int *)(this + 0x1b4) + 0x56) = 1;
    }
    iVar2 = *(int *)(this + 0x1b4);
    if (iVar2 == 0) {
      __android_log_print(6,DAT_0008e938 + 0x8e908,DAT_0008e93c + 0x8e90a,0,0x57);
    }
    else {
      *(undefined4 *)("updateImpl" + iVar2 + 1) = 1;
      *(undefined2 *)("%s: CameraMetadata is locked" + iVar2 + 0x1a) = 0x200;
      *(undefined *)(*(int *)(this + 0x1b4) + 0x57) = 1;
    }
  }
  this[0x1dc] = SUB41(uVar1,0);
  if (*piVar3 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

