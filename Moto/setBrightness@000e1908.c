
/* qcamera::QCameraParameters::setBrightness(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setBrightness(QCameraParameters *this,QCameraParameters *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = android::CameraParameters::getInt((char *)this);
  iVar2 = android::CameraParameters::getInt((char *)param_1);
  iVar3 = android::CameraParameters::get((char *)param_1);
  if (iVar3 == 0) {
    if (*(int *)(*(int *)(DAT_000e1a04 + 0xe195e) + 0x28) == 0) {
      return 0;
    }
    uVar4 = 3;
    uVar5 = 0xb3c;
    iVar1 = DAT_000e1a08 + 0xe196e;
    iVar2 = DAT_000e1a0c + 0xe1976;
  }
  else {
    if (iVar1 != iVar2) {
      iVar1 = *(int *)(this + 0x1d4);
      if ((*(int *)(iVar1 + 0x2f88) <= iVar2) && (iVar2 <= *(int *)(iVar1 + 0x2f8c))) {
        if (*(int *)(*(int *)(DAT_000e1a10 + 0xe19d4) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000e1a18 + 0xe19ee,0xb42,DAT_000e1a14 + 0xe19e4,iVar2);
        }
        uVar4 = setBrightness(this,iVar2);
        return uVar4;
      }
      if (*(int *)(*(int *)(DAT_000e1a1c + 0xe199e) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e1a24 + 0xe19c2,0xb48,DAT_000e1a20 + 0xe19b2,iVar2,
                            *(int *)(iVar1 + 0x2f88),*(undefined4 *)(iVar1 + 0x2f8c));
      }
      return 0xffffffea;
    }
    if (*(int *)(*(int *)(DAT_000e1a28 + 0xe1940) + 0x2c) == 0) {
      return 0;
    }
    uVar4 = 4;
    uVar5 = 0xb4c;
    iVar1 = DAT_000e1a2c + 0xe1950;
    iVar2 = DAT_000e1a30 + 0xe1958;
  }
  mm_camera_debug_log(1,uVar4,iVar2,uVar5,iVar1);
  return 0;
}

