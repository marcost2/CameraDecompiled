
/* qcamera::QCamera2HardwareInterface::autoFocus() */

int __thiscall qcamera::QCamera2HardwareInterface::autoFocus(QCamera2HardwareInterface *this)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined8 uStack40;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  piVar3 = *(int **)(DAT_000b589c + 0xb5794);
  local_18 = *piVar3;
  uVar1 = QCameraParametersIntf::getFocusMode((QCameraParametersIntf *)(this + 0x4ac));
  iVar4 = *(int *)(DAT_000b58a0 + 0xb57a8);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b58a8 + 0xb57c0,0x12b1,DAT_000b58a4 + 0xb57b8);
  }
  gettimeofday((timeval *)(this + 0x1ef0),(__timezone_ptr_t)0x0);
  if ((uVar1 < 8) && ((1 << (uVar1 & 0xff) & 0xcaU) != 0)) {
    this[0xa9c] = (QCamera2HardwareInterface)0x1;
    if (*(int *)(iVar4 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000b58b0 + 0xb5802,0x12bd,DAT_000b58ac + 0xb57f4,uVar1,
                          *(undefined4 *)(this + 0x9dc));
    }
    iVar2 = (**(code **)((*(undefined4 **)(this + 0x60))[1] + 0x20))(**(undefined4 **)(this + 0x60))
    ;
  }
  else {
    if (*(int *)(iVar4 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000b58b8 + 0xb585c,0x12c4,DAT_000b58b4 + 0xb5852,uVar1);
    }
    local_1c = 0;
    local_20 = 0;
    local_30 = 0;
    uStack40 = 0;
    local_40 = 0;
    uStack56 = 0;
    local_48 = 1;
    local_50 = 0x400000000;
    iVar2 = QCameraCbNotifier::notifyCallback
                      ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_50);
  }
  if (iVar2 != 0) {
    this[0xa9c] = (QCamera2HardwareInterface)0x0;
  }
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b58c0 + 0xb5832,0x12cc,DAT_000b58bc + 0xb5828,iVar2);
  }
  if (*piVar3 == local_18) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

