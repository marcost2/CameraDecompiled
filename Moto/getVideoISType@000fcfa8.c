
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParametersIntf::getVideoISType() */

void __thiscall qcamera::QCameraParametersIntf::getVideoISType(QCameraParametersIntf *this)

{
  int unaff_r4;
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r4 + -0x2c0);
  }
  if (in_NG) {
    *(int *)this = unaff_r4;
  }
  software_interrupt(0x36f011);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

