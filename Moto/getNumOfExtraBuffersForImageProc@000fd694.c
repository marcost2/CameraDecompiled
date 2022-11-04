
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParametersIntf::getNumOfExtraBuffersForImageProc() */

void __thiscall
qcamera::QCameraParametersIntf::getNumOfExtraBuffersForImageProc(QCameraParametersIntf *this)

{
  QCameraParametersIntf *pQVar1;
  int unaff_r4;
  int unaff_r5;
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r4 + -0x2c0);
  }
  pQVar1 = this;
  if (in_NG) {
    pQVar1 = this + unaff_r5 * -0x1000;
    *(int *)this = unaff_r4;
  }
  func_0xff1396e8(pQVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

