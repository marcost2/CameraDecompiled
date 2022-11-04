
/* qcamera::QCamera2HardwareInterface::addMetaDataChannel() */

int __thiscall
qcamera::QCamera2HardwareInterface::addMetaDataChannel(QCamera2HardwareInterface *this)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int **)(this + 0x9cc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9cc) + 4))();
    *(undefined4 *)(this + 0x9cc) = 0;
  }
  this_00 = (int *)operator_new(0x34);
  QCameraChannel::QCameraChannel
            ((QCameraChannel *)this_00,**(uint **)(this + 0x60),
             (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
  iVar1 = (**(code **)(*this_00 + 8))(this_00,0,0,0);
  if (iVar1 == 0) {
    iVar1 = addStreamToChannel(this,(QCameraChannel *)this_00,7,
                               *(FuncDef91 **)(DAT_000bc08c + 0xbc03e),this);
    if (iVar1 == 0) {
      *(int **)(this + 0x9cc) = this_00;
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000bc090 + 0xbc04e) + 0x20) == 0) goto LAB_000bc06a;
    uVar4 = 0x2434;
    iVar2 = DAT_000bc094 + 0xbc05e;
    iVar3 = DAT_000bc098 + 0xbc068;
  }
  else {
    if (*(int *)(*(int *)(DAT_000bc080 + 0xbc018) + 0x20) == 0) goto LAB_000bc06a;
    uVar4 = 0x242c;
    iVar2 = DAT_000bc084 + 0xbc028;
    iVar3 = DAT_000bc088 + 0xbc032;
  }
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar2,iVar1);
LAB_000bc06a:
  (**(code **)(*this_00 + 4))(this_00);
  return iVar1;
}

