
/* qcamera::QCameraParameters::setQuadraCfa(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setQuadraCfa(QCameraParameters *this,QCameraParameters *param_1)

{
  QCameraParameters QVar1;
  char *__s2;
  int iVar2;
  undefined4 uVar3;
  QCameraParameters QVar4;
  int *piVar5;
  int local_24;
  int local_20;
  int local_1c;
  
  piVar5 = *(int **)(DAT_000e761c + 0xe747c);
  local_1c = *piVar5;
  local_24 = 0;
  local_20 = 0;
  if (*(int *)(*(int *)(this + 0x1d4) + 0x26f8) == 0) {
    if (*(int *)(*(int *)(DAT_000e7620 + 0xe74e6) + 0x2c) == 0) {
      uVar3 = 0;
    }
    else {
      mm_camera_debug_log(1,4,DAT_000e7628 + 0xe7500,0x10f2,DAT_000e7624 + 0xe74f8);
      uVar3 = 0;
    }
    goto LAB_000e75f2;
  }
  QVar1 = this[0x800];
  android::CameraParameters::getPictureSize((CameraParameters *)param_1,&local_20,&local_24);
  if ((*(int *)(*(int *)(this + 0x1d4) + 0x2aec) < local_20) ||
     (*(int *)(*(int *)(this + 0x1d4) + 0x2af0) < local_24)) {
    if (*(int *)(*(int *)(DAT_000e762c + 0xe74c2) + 0x34) == 0) {
      QVar4 = (QCameraParameters)0x1;
    }
    else {
      QVar4 = (QCameraParameters)0x1;
      mm_camera_debug_log(1,6,DAT_000e7634 + 0xe74dc,0x10fc,DAT_000e7630 + 0xe74d4);
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000e7638 + 0xe7510) + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000e7640 + 0xe7528,0x10ff,DAT_000e763c + 0xe7520);
    }
    QVar4 = (QCameraParameters)0x0;
  }
  this[0x800] = QVar4;
  if (QVar1 == QVar4) {
    if (*(int *)(*(int *)(DAT_000e7644 + 0xe753a) + 0x2c) == 0) {
      uVar3 = 0;
    }
    else {
      mm_camera_debug_log(1,4,DAT_000e764c + 0xe7552,0x1104,DAT_000e7648 + 0xe754a);
      uVar3 = 0;
    }
  }
  else {
    if ((QVar4 == (QCameraParameters)0x0) || (this[0x210] == (QCameraParameters)0x0)) {
      __s2 = (char *)android::CameraParameters::get((char *)param_1);
      if (__s2 == (char *)0x0) {
LAB_000e759e:
        uVar3 = 0;
      }
      else {
        iVar2 = strcmp(*(char **)(DAT_000e7654 + 0xe758a),__s2);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = strcmp(*(char **)(DAT_000e7658 + 0xe7598),__s2);
          if (iVar2 != 0) goto LAB_000e759e;
          iVar2 = 1;
        }
        uVar3 = 0;
        iVar2 = *(int *)(*(int *)(DAT_000e765c + 0xe75b8) + iVar2 * 8 + 4);
        if (iVar2 != -2 && iVar2 != 0) {
          uVar3 = setZslMode(this,true);
          this[0x230] = (QCameraParameters)0x1;
        }
      }
    }
    else {
      uVar3 = 0;
      this[0x230] = (QCameraParameters)0x1;
      setZslMode(this,false);
    }
    setReprocCount(this);
  }
  if (*(int *)(*(int *)(DAT_000e7660 + 0xe75d2) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e7668 + 0xe75f0,0x1115,DAT_000e7664 + 0xe75e4,this[0x800]);
  }
LAB_000e75f2:
  if (*piVar5 == local_1c) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

