
/* qcamera::QCameraStream::deleteStream() */

void __thiscall qcamera::QCameraStream::deleteStream(QCameraStream *this)

{
  uint uVar1;
  
  if (*(int *)(this + 0x68) != 0) {
    this[0x2e0] = (QCameraStream)0x1;
    (**(code **)(*(int *)this + 0x2c))(this);
    if (*(int *)(this + 0x104) != 0) {
      uVar1 = (**(code **)(*(int *)(this + 0x6c) + 0x58))
                        (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                         *(undefined4 *)(this + 0x68),4,0,0xffffffff);
      if ((0x7fffffff < uVar1) && (*(int *)(*(int *)(DAT_000cff0c + 0xcfede) + 0x20) != 0)) {
        mm_camera_debug_log(1,1,DAT_000cff14 + 0xcfef6,0x1cf,DAT_000cff10 + 0xcfeee);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000cff06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(this + 0x6c) + 0x44))
              (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),*(undefined4 *)(this + 0x68)
              );
    return;
  }
  return;
}

