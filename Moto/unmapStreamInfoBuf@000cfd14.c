
/* qcamera::QCameraStream::unmapStreamInfoBuf() */

uint __thiscall qcamera::QCameraStream::unmapStreamInfoBuf(QCameraStream *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x104) != 0) {
    uVar1 = (**(code **)(*(int *)(this + 0x6c) + 0x58))
                      (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                       *(undefined4 *)(this + 0x68),4,0,0xffffffff);
    if ((0x7fffffff < uVar1) && (*(int *)(*(int *)(DAT_000cfd68 + 0xcfd48) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000cfd70 + 0xcfd60,0x1cf,DAT_000cfd6c + 0xcfd58);
    }
  }
  return uVar1;
}

