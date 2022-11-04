
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParametersIntf::getRotation() */

void __thiscall qcamera::QCameraParametersIntf::getRotation(QCameraParametersIntf *this)

{
  int unaff_r4;
  undefined4 unaff_r10;
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (!in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r4 + -0x2c0);
  }
  if (in_NG) {
    *(int *)this = unaff_r4;
  }
  coprocessor_loadlong(0,in_cr15,unaff_r10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

