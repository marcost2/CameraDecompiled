
/* qcamera::QCameraParameters::setSharpness(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setSharpness(QCameraParameters *this,QCameraParameters *param_1)

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
    if (*(int *)(*(int *)(DAT_000e1c2c + 0xe1b86) + 0x28) == 0) {
      return 0;
    }
    uVar4 = 3;
    uVar5 = 0xb74;
    iVar1 = DAT_000e1c30 + 0xe1b96;
    iVar2 = DAT_000e1c34 + 0xe1b9e;
  }
  else {
    if (iVar2 != iVar1) {
      iVar2 = *(int *)(this + 0x1d4);
      if ((*(int *)(iVar2 + 0x2f98) <= iVar1) && (iVar1 <= *(int *)(iVar2 + 0x2f9c))) {
        if (*(int *)(*(int *)(DAT_000e1c38 + 0xe1bfc) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000e1c40 + 0xe1c16,0xb7a,DAT_000e1c3c + 0xe1c0c,iVar1);
        }
        uVar4 = setSharpness(this,iVar1);
        return uVar4;
      }
      if (*(int *)(*(int *)(DAT_000e1c44 + 0xe1bc6) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e1c4c + 0xe1bea,0xb80,DAT_000e1c48 + 0xe1bda,iVar1,
                            *(int *)(iVar2 + 0x2f98),*(undefined4 *)(iVar2 + 0x2f9c));
      }
      return 0xffffffea;
    }
    if (*(int *)(*(int *)(DAT_000e1c50 + 0xe1b68) + 0x2c) == 0) {
      return 0;
    }
    uVar4 = 4;
    uVar5 = 0xb84;
    iVar1 = DAT_000e1c54 + 0xe1b78;
    iVar2 = DAT_000e1c58 + 0xe1b80;
  }
  mm_camera_debug_log(1,uVar4,iVar2,uVar5,iVar1);
  return 0;
}

