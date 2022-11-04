
/* qcamera::QCameraParameters::setSkinToneEnhancement(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setSkinToneEnhancement
          (QCameraParameters *this,QCameraParameters *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = android::CameraParameters::getInt((char *)param_1);
  iVar2 = android::CameraParameters::getInt((char *)this);
  iVar3 = android::CameraParameters::get((char *)param_1);
  if (iVar3 == 0) {
    if (*(int *)(*(int *)(DAT_000e1e48 + 0xe1da2) + 0x28) == 0) {
      return 0;
    }
    uVar4 = 3;
    uVar5 = 0xb9b;
    iVar1 = DAT_000e1e4c + 0xe1db2;
    iVar2 = DAT_000e1e50 + 0xe1dba;
  }
  else {
    if (iVar2 != iVar1) {
      iVar2 = *(int *)(this + 0x1d4);
      if ((*(int *)(iVar2 + 0x2fc8) <= iVar1) && (iVar1 <= *(int *)(iVar2 + 0x2fcc))) {
        if (*(int *)(*(int *)(DAT_000e1e54 + 0xe1e18) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000e1e5c + 0xe1e32,0xba1,DAT_000e1e58 + 0xe1e28,iVar1);
        }
        uVar4 = setSkinToneEnhancement(this,iVar1);
        return uVar4;
      }
      if (*(int *)(*(int *)(DAT_000e1e60 + 0xe1de2) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e1e68 + 0xe1e06,0xba7,DAT_000e1e64 + 0xe1df6,iVar1,
                            *(int *)(iVar2 + 0x2fc8),*(undefined4 *)(iVar2 + 0x2fcc));
      }
      return 0xffffffea;
    }
    if (*(int *)(*(int *)(DAT_000e1e6c + 0xe1d84) + 0x2c) == 0) {
      return 0;
    }
    uVar4 = 4;
    uVar5 = 0xbab;
    iVar1 = DAT_000e1e70 + 0xe1d94;
    iVar2 = DAT_000e1e74 + 0xe1d9c;
  }
  mm_camera_debug_log(1,uVar4,iVar2,uVar5,iVar1);
  return 0;
}

