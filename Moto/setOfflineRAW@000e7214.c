
/* qcamera::QCameraParameters::setOfflineRAW(bool) */

void __thiscall qcamera::QCameraParameters::setOfflineRAW(QCameraParameters *this,bool param_1)

{
  QCameraParameters QVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char acStack120 [92];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000e72d8 + 0xe7224);
  local_1c = *piVar5;
  if (param_1 == false) {
    uVar4 = *(undefined4 *)(DAT_000e72e8 + 0xe725c);
    property_get(DAT_000e72ec + 0xe7266,acStack120,uVar4);
    iVar2 = atoi(acStack120);
    property_get(DAT_000e72f0 + 0xe727c,acStack120,uVar4);
    iVar3 = atoi(acStack120);
    if (iVar2 < 1) {
      if ((this[0x2ee] == (QCameraParameters)0x0) || (iVar3 < 1)) goto LAB_000e729c;
LAB_000e7298:
      QVar1 = (QCameraParameters)0x1;
    }
    else {
      if (0 < iVar3) goto LAB_000e7298;
LAB_000e729c:
      QVar1 = (QCameraParameters)0x0;
    }
    this[0x301] = QVar1;
    if (*(int *)(*(int *)(DAT_000e72f4 + 0xe72a8) + 0x28) == 0) goto LAB_000e72c4;
    uVar4 = 0x3a72;
    iVar2 = DAT_000e72f8 + 0xe72b6;
    iVar3 = DAT_000e72fc + 0xe72c2;
  }
  else {
    this[0x301] = (QCameraParameters)0x1;
    if (*(int *)(*(int *)(DAT_000e72dc + 0xe723a) + 0x28) == 0) goto LAB_000e72c4;
    uVar4 = 0x3a65;
    iVar2 = DAT_000e72e0 + 0xe724a;
    QVar1 = (QCameraParameters)0x1;
    iVar3 = DAT_000e72e4 + 0xe7256;
  }
  mm_camera_debug_log(1,3,iVar3,uVar4,iVar2,QVar1);
LAB_000e72c4:
  if (*piVar5 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

