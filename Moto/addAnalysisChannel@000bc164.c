
/* qcamera::QCamera2HardwareInterface::addAnalysisChannel() */

int __thiscall
qcamera::QCamera2HardwareInterface::addAnalysisChannel(QCamera2HardwareInterface *this)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int **)(this + 0x9d0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9d0) + 4))();
    *(undefined4 *)(this + 0x9d0) = 0;
  }
  this_00 = (int *)operator_new(0x34);
  QCameraChannel::QCameraChannel
            ((QCameraChannel *)this_00,**(uint **)(this + 0x60),
             (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
  iVar1 = (**(code **)(*this_00 + 8))(this_00,0,0,this);
  if (iVar1 == 0) {
    iVar1 = addStreamToChannel(this,(QCameraChannel *)this_00,0xb,(FuncDef91 *)0x0,this);
    if (iVar1 == 0) {
      *(int **)(this + 0x9d0) = this_00;
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000bc218 + 0xbc1da) + 0x20) == 0) goto LAB_000bc1f6;
    uVar4 = 0x2494;
    iVar2 = DAT_000bc21c + 0xbc1ea;
    iVar3 = DAT_000bc220 + 0xbc1f4;
  }
  else {
    if (*(int *)(*(int *)(DAT_000bc20c + 0xbc1a8) + 0x20) == 0) goto LAB_000bc1f6;
    uVar4 = 0x248c;
    iVar2 = DAT_000bc210 + 0xbc1b8;
    iVar3 = DAT_000bc214 + 0xbc1c2;
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar2,iVar1);
LAB_000bc1f6:
  (**(code **)(*this_00 + 4))(this_00);
  return iVar1;
}

