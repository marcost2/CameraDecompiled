
/* qcamera::QCamera2HardwareInterface::needPreviewFDCallback(unsigned char) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::needPreviewFDCallback
          (QCamera2HardwareInterface *this,uchar param_1)

{
  if ((param_1 == '\0') && (*(int *)(this + 0x1dc8) == 0)) {
    return 0;
  }
  return 1;
}

