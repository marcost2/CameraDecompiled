
/* qcamera::QCameraParameters::setRawSize(cam_dimension_t&) */

undefined4 __thiscall
qcamera::QCameraParameters::setRawSize(QCameraParameters *this,cam_dimension_t *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x278) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x27c) = uVar1;
  return 0;
}

