
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParameters::setPictureSize(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setPictureSize(QCameraParameters *this,QCameraParameters *param_1)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    in_NG = true;
  }
  if (in_NG) {
    *(undefined4 **)param_1 = unaff_r11;
    *unaff_r11 = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

