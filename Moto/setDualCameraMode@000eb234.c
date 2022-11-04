
/* qcamera::QCameraParameters::setDualCameraMode(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setDualCameraMode(QCameraParameters *this,QCameraParameters *param_1)

{
  QCameraParameters QVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int local_28;
  int local_24;
  int local_20;
  
  piVar7 = *(int **)(DAT_000eb364 + 0xeb244);
  local_20 = *piVar7;
  pcVar2 = (char *)android::CameraParameters::get((char *)param_1);
  pcVar3 = (char *)android::CameraParameters::get((char *)this);
  if ((pcVar2 != (char *)0x0) &&
     ((pcVar3 == (char *)0x0 || (iVar4 = strcmp(pcVar2,pcVar3), iVar4 != 0)))) {
    iVar4 = strcmp(*(char **)(DAT_000eb36c + 0xeb27a),pcVar2);
    if (iVar4 != 0) {
      iVar4 = 1;
    }
    this[0x18] = SUB41(iVar4,0);
  }
  iVar4 = *(int *)(DAT_000eb370 + 0xeb28c);
  if (*(int *)(iVar4 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000eb378 + 0xeb2ac,0x3e58,DAT_000eb374 + 0xeb2a0,this[0x18]);
  }
  if (this[0x18] != (QCameraParameters)0x0) {
    uVar5 = android::CameraParameters::getInt((char *)param_1);
    *(undefined4 *)(this + 0x804) = uVar5;
    pcVar2 = (char *)android::CameraParameters::get((char *)param_1);
    pcVar3 = (char *)android::CameraParameters::get((char *)this);
    if ((pcVar3 == (char *)0x0) || (iVar6 = strcmp(pcVar2,pcVar3), iVar6 != 0)) {
      if (pcVar2 == (char *)0x0) {
        QVar1 = (QCameraParameters)0x1;
      }
      else {
        iVar6 = strcmp(*(char **)(DAT_000eb384 + 0xeb2f2),pcVar2);
        if (iVar6 != 0) {
          iVar6 = 1;
        }
        QVar1 = SUB41(iVar6,0);
      }
      this[0x808] = QVar1;
    }
    android::CameraParameters::getPictureSize((CameraParameters *)param_1,&local_24,&local_28);
    if ((*(int *)(*(int *)(this + 0x1d4) + 0x3ec8) < local_24) ||
       (*(int *)(*(int *)(this + 0x1d4) + 0x3ecc) < local_28)) {
      if (*(int *)(iVar4 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_000eb38c + 0xeb344,0x3e65,DAT_000eb388 + 0xeb33c);
      }
      this[0x24] = (QCameraParameters)0x1;
    }
  }
  if (*piVar7 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

