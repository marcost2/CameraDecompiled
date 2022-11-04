
/* qcamera::QCameraParameters::stopAEBracket() */

void __thiscall qcamera::QCameraParameters::stopAEBracket(QCameraParameters *this)

{
  setHDRAEBracket((cam_exp_bracketing_t)this);
  return;
}

