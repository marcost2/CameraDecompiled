
/* qcamera::QCameraVideoMemory::setVideoInfo(int, cam_format_t) */

void __thiscall
qcamera::QCameraVideoMemory::setVideoInfo(QCameraVideoMemory *this,int param_1,cam_format_t param_2)

{
  undefined4 uVar1;
  
  *(uint *)(this + 0x824) = param_1 | *(uint *)(this + 0x824);
  uVar1 = 0x7fa30c00;
  if ((int)param_2 < 7) {
    if (param_2 - 2 < 2) goto LAB_000c6f6c;
  }
  else if (param_2 == 0x67) goto LAB_000c6f6c;
  uVar1 = 0x15;
LAB_000c6f6c:
  *(undefined4 *)(this + 0x828) = uVar1;
  return;
}

