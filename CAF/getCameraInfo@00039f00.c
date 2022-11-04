
/* qcamera::QCamera2Factory::getCameraInfo(int, camera_info*) */

undefined4 __thiscall
qcamera::QCamera2Factory::getCameraInfo(QCamera2Factory *this,int param_1,camera_info *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*(int *)(this + 4) == 0) || (param_1 < 0)) || (param_2 == (camera_info *)0x0)) ||
     (*(int *)(this + 4) <= param_1)) {
    iVar2 = *(int *)(*(int *)(DAT_00039fb8 + 0x39f70) + 0x3c);
  }
  else {
    if (*(int *)(this + 8) != 0) {
      if (*(int *)(*(int *)(DAT_00039fd0 + 0x39f22) + 0x50) != 0) {
        mm_camera_debug_log();
      }
      uVar1 = QCamera3HardwareInterface::getCamInfo
                        (*(uint *)(*(int *)(this + 8) + param_1 * 8),param_2);
      if (*(int *)(*(int *)(this + 8) + param_1 * 8 + 4) == 0x100) {
        *(undefined4 *)(param_2 + 8) = 0x100;
      }
      return uVar1;
    }
    iVar2 = *(int *)(*(int *)(DAT_00039fc4 + 0x39f9e) + 0x3c);
  }
  if (iVar2 != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffed;
}

