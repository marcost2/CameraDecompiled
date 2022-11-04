
/* qcamera::QCamera2Factory::getCameraInfo(int, camera_info*) */

undefined4 __thiscall
qcamera::QCamera2Factory::getCameraInfo(QCamera2Factory *this,int param_1,camera_info *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((((*(int *)(this + 4) == 0) || (param_1 < 0)) || (param_2 == (camera_info *)0x0)) ||
     (*(int *)(this + 4) <= param_1)) {
    if (*(int *)(*(int *)(DAT_0007e558 + 0x7e510) + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar2 = 0x167;
    iVar1 = DAT_0007e55c + 0x7e51e;
    iVar3 = DAT_0007e560 + 0x7e52e;
  }
  else {
    iVar1 = *(int *)(this + 8);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_0007e570 + 0x7e4c2) + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_0007e578 + 0x7e4e4,0x171,DAT_0007e574 + 0x7e4d6,param_1,
                            *(undefined4 *)(iVar1 + param_1 * 8 + 4));
        iVar1 = *(int *)(this + 8);
      }
      uVar2 = QCamera3HardwareInterface::getCamInfo(*(uint *)(iVar1 + param_1 * 8),param_2);
      if (*(int *)(*(int *)(this + 8) + param_1 * 8 + 4) == 0x100) {
        *(undefined4 *)(param_2 + 8) = 0x100;
      }
      return uVar2;
    }
    if (*(int *)(*(int *)(DAT_0007e564 + 0x7e53e) + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar2 = 0x16c;
    iVar1 = DAT_0007e568 + 0x7e550;
    iVar3 = (int)&DAT_0007e558 + DAT_0007e56c;
  }
  mm_camera_debug_log(1,1,iVar3,uVar2,iVar1);
  return 0xffffffed;
}

