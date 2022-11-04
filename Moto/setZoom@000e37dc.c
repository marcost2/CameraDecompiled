
/* qcamera::QCameraParameters::setZoom(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setZoom(QCameraParameters *this,QCameraParameters *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar1 = *(int *)(this + 0x1d4);
  bVar5 = *(char *)(iVar1 + 0x2f7d) != '\0';
  if (bVar5) {
    iVar1 = *(int *)(iVar1 + 0x4c);
  }
  if (bVar5 && iVar1 != 0) {
    iVar1 = android::CameraParameters::getInt((char *)param_1);
    *(int *)(this + 0x37c) = iVar1;
    if ((iVar1 < 0) || (*(int *)(*(int *)(this + 0x1d4) + 0x4c) <= iVar1)) {
      if (*(int *)(*(int *)(DAT_000e38c8 + 0xe3876) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e38d0 + 0xe389e,0xd42,DAT_000e38cc + 0xe388c,iVar1,0,
                            *(int *)(*(int *)(this + 0x1d4) + 0x4c) + -1);
      }
      return 0xffffffea;
    }
    iVar3 = android::CameraParameters::getInt((char *)this);
    if (iVar3 != iVar1) {
      uVar2 = setZoom(this,iVar1);
      return uVar2;
    }
    if (*(int *)(*(int *)(DAT_000e38d4 + 0xe3852) + 0x2c) == 0) {
      return 0;
    }
    uVar2 = 4;
    uVar4 = 0xd48;
    iVar1 = DAT_000e38d8 + 0xe3864;
    iVar3 = DAT_000e38dc + 0xe3870;
  }
  else {
    if (*(int *)(*(int *)(DAT_000e38b8 + 0xe37fe) + 0x28) == 0) {
      return 0;
    }
    uVar2 = 3;
    uVar4 = 0xd39;
    iVar1 = DAT_000e38bc + 0xe380e;
    iVar3 = DAT_000e38c0 + 0xe3816;
  }
  mm_camera_debug_log(1,uVar2,iVar3,uVar4,iVar1);
  return 0;
}

