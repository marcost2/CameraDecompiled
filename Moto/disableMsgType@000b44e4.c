
/* qcamera::QCamera2HardwareInterface::disableMsgType(int) */

int __thiscall
qcamera::QCamera2HardwareInterface::disableMsgType(QCamera2HardwareInterface *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = QCameraParametersIntf::isUBWCEnabled((QCameraParametersIntf *)(this + 0x4ac));
  if ((((iVar1 == 0) || (-1 < (int)((*(uint *)(this + 0x4b4) & param_1) << 0x1b))) ||
      (piVar2 = *(int **)(this + 0x9d4), piVar2 == (int *)0x0)) || (*(char *)(piVar2 + 3) == '\0'))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*piVar2 + 0x18))();
    if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000b4570 + 0xb451a) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000b4578 + 0xb4532,0x1067,DAT_000b4574 + 0xb452a);
    }
  }
  uVar3 = *(uint *)(this + 0x4b4);
  *(uint *)(this + 0x4b4) = uVar3 & ~param_1;
  if (*(int *)(*(int *)(DAT_000b457c + 0xb4548) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b4584 + 0xb4566,0x106d,DAT_000b4580 + 0xb4556,param_1,
                        uVar3 & ~param_1,iVar1);
  }
  return iVar1;
}

