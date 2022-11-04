
/* qcamera::QCameraParameters::modifyCapabilities() */

void __thiscall qcamera::QCameraParameters::modifyCapabilities(QCameraParameters *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1d4);
  *(undefined4 *)(iVar1 + 0x2704) = 4;
  *(undefined4 *)(iVar1 + 0x2700) = 2;
  *(undefined *)(iVar1 + 0x2f7e) = 1;
  *(undefined4 *)(iVar1 + 0x2c2c) = 0;
  *(undefined4 *)(iVar1 + 0x26fc) = 2;
  iVar1 = *(int *)(this + 0x1d4);
  if (*(uint *)(iVar1 + 4) == 2) {
    *(undefined *)(iVar1 + 0x2f83) = 1;
    *(undefined4 *)(iVar1 + 0x5b4) = 0;
    *(undefined4 *)(iVar1 + 500) = 1;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    return;
  }
  if (*(uint *)(iVar1 + 4) < 2) {
    *(undefined *)(iVar1 + 0x2f83) = 1;
    *(undefined4 *)(iVar1 + 0x5b4) = 0;
    *(undefined4 *)(iVar1 + 500) = 1;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    return;
  }
  __android_log_print(6,DAT_000f0a24 + 0xf0a18,DAT_000f0a28 + 0xf0a1a,DAT_000f0a2c + 0xf0a1c);
  return;
}

