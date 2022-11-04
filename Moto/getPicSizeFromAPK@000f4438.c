
/* qcamera::QCameraParameters::QCameraReprocScaleParam::getPicSizeFromAPK(int&, int&) */

undefined4 __thiscall
qcamera::QCameraParameters::QCameraReprocScaleParam::getPicSizeFromAPK
          (QCameraReprocScaleParam *this,int *param_1,int *param_2)

{
  if (this[1] != (QCameraReprocScaleParam)0x0) {
    *param_1 = *(int *)(this + 0x19c);
    *param_2 = *(int *)(this + 0x1a0);
    return 0;
  }
  return 0xffffffea;
}

