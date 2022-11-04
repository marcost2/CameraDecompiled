
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParametersIntf::isSnapshotFDNeeded() */

void __thiscall qcamera::QCameraParametersIntf::isSnapshotFDNeeded(QCameraParametersIntf *this)

{
  QCameraParametersIntf *pQVar1;
  int unaff_r4;
  int unaff_r5;
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (!in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r4 + -0x2c0);
  }
  pQVar1 = this;
  if (in_NG) {
    pQVar1 = this + unaff_r5 * -0x1000;
    *(int *)this = unaff_r4;
  }
  coprocessor_storelong(0,in_cr15,pQVar1 + 0x44);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

