
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParametersIntf::isUBWCEnabled() */

void __thiscall qcamera::QCameraParametersIntf::isUBWCEnabled(QCameraParametersIntf *this)

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
  software_interrupt(0xa8f010);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

