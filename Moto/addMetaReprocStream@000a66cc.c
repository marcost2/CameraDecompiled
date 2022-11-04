
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCamera3ReprocessChannel::addMetaReprocStream(qcamera::QCamera3Channel*) */

void qcamera::QCamera3ReprocessChannel::addMetaReprocStream(QCamera3Channel *param_1)

{
  int unaff_r9;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr15;
  
  if (in_NG) {
    software_interrupt(0xf0e92d);
  }
  if (!in_OV) {
    coprocessor_load(5,in_cr15,unaff_r9 + -0x2b4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

