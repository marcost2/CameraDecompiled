
/* qcamera::QCamera2HardwareInterface::cancelAutoFocus() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::cancelAutoFocus(QCamera2HardwareInterface *this)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = QCameraParametersIntf::getFocusMode((QCameraParametersIntf *)(this + 0x4ac));
  if ((uVar1 < 8) && ((1 << (uVar1 & 0xff) & 0xcaU) != 0)) {
    this[0xa9c] = (QCamera2HardwareInterface)0x0;
                    /* WARNING: Could not recover jumptable at 0x000b58f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((*(undefined4 **)(this + 0x60))[1] + 0x24))(**(undefined4 **)(this + 0x60))
    ;
    return uVar2;
  }
  if (*(int *)(*(int *)(DAT_000b5920 + 0xb58fc) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000b5928 + 0xb5916,0x12ec,DAT_000b5924 + 0xb590a,uVar1);
  }
  return 0;
}

