
/* qcamera::QCamera3GrallocMemory::getPtrLocked(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::getPtrLocked(QCamera3GrallocMemory *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      if (*(int *)(*(int *)(DAT_0009ad04 + 0x9aca2) + 0x20) == 0) {
        return 0;
      }
      uVar3 = 0x4bb;
      iVar1 = DAT_0009ad08 + 0x9acb0;
      iVar2 = DAT_0009ad0c + 0x9acbc;
    }
    else {
      if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
        return *(undefined4 *)(this + param_1 * 4 + 0x408);
      }
      if (*(int *)(*(int *)(DAT_0009ad10 + 0x9acd6) + 0x20) == 0) {
        return 0;
      }
      uVar3 = 0x4c1;
      iVar1 = DAT_0009ad14 + 0x9ace4;
      iVar2 = DAT_0009ad18 + 0x9acf0;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_0009acf8 + 0x9ac76) + 0x20) == 0) {
      return 0;
    }
    uVar3 = 0x4b6;
    iVar1 = DAT_0009acfc + 0x9ac86;
    iVar2 = DAT_0009ad00 + 0x9ac94;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1,param_1);
  return 0;
}

