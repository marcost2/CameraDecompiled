
/* qcamera::QCamera2HardwareInterface::addCallbackChannel() */

int __thiscall
qcamera::QCamera2HardwareInterface::addCallbackChannel(QCamera2HardwareInterface *this)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int **)(this + 0x9d4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9d4) + 4))();
    *(undefined4 *)(this + 0x9d4) = 0;
  }
  this_00 = (int *)operator_new(0x34);
  QCameraChannel::QCameraChannel
            ((QCameraChannel *)this_00,**(uint **)(this + 0x60),
             (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
  iVar1 = (**(code **)(*this_00 + 8))(this_00,0,0,this);
  if (iVar1 == 0) {
    iVar1 = addStreamToChannel(this,(QCameraChannel *)this_00,5,
                               *(FuncDef91 **)(DAT_000bc154 + 0xbc106),this);
    if (iVar1 == 0) {
      *(int **)(this + 0x9d4) = this_00;
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000bc158 + 0xbc116) + 0x20) == 0) goto LAB_000bc132;
    uVar4 = 0x2464;
    iVar2 = DAT_000bc15c + 0xbc126;
    iVar3 = DAT_000bc160 + 0xbc130;
  }
  else {
    if (*(int *)(*(int *)(DAT_000bc148 + 0xbc0e0) + 0x20) == 0) goto LAB_000bc132;
    uVar4 = 0x245c;
    iVar2 = DAT_000bc14c + 0xbc0f0;
    iVar3 = DAT_000bc150 + 0xbc0fa;
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar2,iVar1);
LAB_000bc132:
  (**(code **)(*this_00 + 4))(this_00);
  return iVar1;
}

