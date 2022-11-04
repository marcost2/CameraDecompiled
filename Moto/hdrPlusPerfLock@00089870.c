
/* qcamera::QCamera3HardwareInterface::hdrPlusPerfLock(mm_camera_super_buf_t*) */

void __thiscall
qcamera::QCamera3HardwareInterface::hdrPlusPerfLock
          (QCamera3HardwareInterface *this,mm_camera_super_buf_t *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (param_1 == (mm_camera_super_buf_t *)0x0) {
    if (*(int *)(*(int *)(DAT_00089934 + 0x898c2) + 0x20) != 0) {
      uVar6 = 0xf10;
      iVar2 = DAT_00089938 + 0x898d2;
      iVar5 = DAT_0008993c + 0x898da;
LAB_000898d8:
      mm_camera_debug_log(1,1,iVar5,uVar6,iVar2);
      return;
    }
  }
  else {
    piVar3 = *(int **)(*(int *)(param_1 + 0x10) + 0x208);
    piVar4 = piVar3;
    piVar1 = piVar3;
    if (piVar3 != (int *)0x0) {
      piVar1 = piVar3 + 0x3161;
      piVar4 = piVar3 + 0x314e;
    }
    if (piVar4 == (int *)0x0 || piVar1 == (int *)0x0) {
      if (*(int *)(*(int *)(DAT_00089940 + 0x898a2) + 0x20) != 0) {
        uVar6 = 0xf1b;
        iVar5 = DAT_00089944 + 0x898b4;
        iVar2 = DAT_00089948 + 0x898b6;
        goto LAB_000898d8;
      }
    }
    else {
      bVar7 = piVar3 != (int *)0x0;
      if (bVar7) {
        piVar3 = (int *)*piVar4;
      }
      if ((bVar7 && piVar3 != (int *)0x0) && (*(int *)(this + 0x117fc0) == *piVar1)) {
        QCameraPerfLock::lock_acq_timed((QCameraPerfLock *)(this + 0xa8),7000);
      }
      iVar2 = QCameraPerfLock::isTimerReset((QCameraPerfLock *)(this + 0xa8));
      if (iVar2 != 0) {
        *(undefined4 *)(this + 0x117fc0) = 0xffffffff;
        QCameraPerfLock::lock_rel_timed((QCameraPerfLock *)(this + 0xa8));
        return;
      }
    }
  }
  return;
}

