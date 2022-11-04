
/* qcamera::QCamera2HardwareInterface::addSnapshotChannel() */

int __thiscall
qcamera::QCamera2HardwareInterface::addSnapshotChannel(QCamera2HardwareInterface *this)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_38;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  
  piVar5 = *(int **)(DAT_000bbaa8 + 0xbb9b2);
  local_20 = *piVar5;
  if (*(int **)(this + 0x9c4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c4) + 4))();
    *(undefined4 *)(this + 0x9c4) = 0;
  }
  this_00 = (int *)operator_new(0x34);
  QCameraChannel::QCameraChannel
            ((QCameraChannel *)this_00,**(uint **)(this + 0x60),
             (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_33 = 0;
  local_38 = 1;
  local_32 = QCameraParametersIntf::getZSLBurstInterval((QCameraParametersIntf *)(this + 0x4ac));
  local_34 = 1;
  local_31 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue
                       ((QCameraParametersIntf *)(this + 0x4ac));
  local_2c = 3;
  iVar1 = (**(code **)(*this_00 + 8))
                    (this_00,&local_38,*(undefined4 *)(DAT_000bbaac + 0xbba22),this);
  if (iVar1 == 0) {
    iVar1 = addStreamToChannel(this,(QCameraChannel *)this_00,3,(FuncDef91 *)0x0,(void *)0x0);
    if (iVar1 == 0) {
      iVar1 = 0;
      *(int **)(this + 0x9c4) = this_00;
      goto LAB_000bba88;
    }
    if (*(int *)(*(int *)(DAT_000bbabc + 0xbba64) + 0x20) != 0) {
      uVar4 = 0x22a6;
      iVar2 = DAT_000bbac0 + 0xbba74;
      iVar3 = DAT_000bbac4 + 0xbba7e;
      goto LAB_000bba7c;
    }
  }
  else if (*(int *)(*(int *)(DAT_000bbab0 + 0xbba30) + 0x20) != 0) {
    uVar4 = 0x229e;
    iVar2 = DAT_000bbab4 + 0xbba40;
    iVar3 = DAT_000bbab8 + 0xbba4a;
LAB_000bba7c:
    mm_camera_debug_log(1,1,iVar3,uVar4,iVar2,iVar1);
  }
  (**(code **)(*this_00 + 4))(this_00);
LAB_000bba88:
  if (*piVar5 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

