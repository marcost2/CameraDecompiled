
/* qcamera::QCameraMuxer::sendEvtNotify(int, int, int) */

undefined4 qcamera::QCameraMuxer::sendEvtNotify(int param_1,int param_2,int param_3)

{
  QCamera2HardwareInterface *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000c4280 + 0xc41d2);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c4288 + 0xc41ea,0x900,DAT_000c4284 + 0xc41e2);
  }
  if (**(int **)(DAT_000c428c + 0xc41f2) == 0) {
    if (*(int *)(iVar3 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar1 = 0x902;
    iVar3 = DAT_000c4290 + 0xc423c;
    iVar2 = DAT_000c4294 + 0xc4244;
  }
  else {
    iVar2 = *(int *)(**(int **)(DAT_000c428c + 0xc41f2) + 0xd0);
    if (iVar2 == 0) {
      if (*(int *)(iVar3 + 0x20) == 0) {
        return 0xffffffed;
      }
      uVar1 = 0x907;
      iVar3 = DAT_000c4298 + 0xc4254;
      iVar2 = DAT_000c429c + 0xc425c;
    }
    else {
      this = *(QCamera2HardwareInterface **)(iVar2 + 0x30);
      if (this != (QCamera2HardwareInterface *)0x0) {
        if (*(int *)(iVar3 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000c42ac + 0xc4218,0x90c,DAT_000c42a8 + 0xc4210);
          this = *(QCamera2HardwareInterface **)(iVar2 + 0x30);
        }
        uVar1 = QCamera2HardwareInterface::sendEvtNotify(this,param_1,param_2,param_3);
        return uVar1;
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        return 0xffffffed;
      }
      uVar1 = 0x90a;
      iVar3 = DAT_000c42a0 + 0xc426c;
      iVar2 = DAT_000c42a4 + 0xc4274;
    }
  }
  mm_camera_debug_log(1,1,iVar2,uVar1,iVar3);
  return 0xffffffed;
}

