
/* qcamera::QCameraParameters::getPicSizeFromAPK(int&, int&) */

undefined4 __thiscall
qcamera::QCameraParameters::getPicSizeFromAPK(QCameraParameters *this,int *param_1,int *param_2)

{
  if (this[0x25] != (QCameraParameters)0x0) {
    *param_1 = *(int *)(this + 0x1c0);
    *param_2 = *(int *)(this + 0x1c4);
    return 0;
  }
  return 0xffffffea;
}

