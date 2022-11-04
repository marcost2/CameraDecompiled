
/* qcamera::QCameraVideoChannel::releaseFrame(void const*, bool) */

undefined4 __thiscall
qcamera::QCameraVideoChannel::releaseFrame(QCameraVideoChannel *this,void *param_1,bool param_2)

{
  QCameraStream *this_00;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(this + 0x1c);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      this_00 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar5 * 4);
      if (this_00 != (QCameraStream *)0x0) {
        iVar1 = QCameraStream::isTypeOf(this_00,4);
        if (iVar1 != 0) {
          piVar2 = *(int **)(*(int *)(this + 0x18) + uVar5 * 4);
          if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000cd028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,param_1,param_2);
            return uVar3;
          }
          break;
        }
        uVar4 = *(uint *)(this + 0x1c);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*(int *)(*(int *)(DAT_000cd02c + 0xccfee) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000cd034 + 0xcd006,0x37b,DAT_000cd030 + 0xccffe);
  }
  return 0xffffffea;
}

