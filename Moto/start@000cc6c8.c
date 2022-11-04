
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraChannel::start() */

void qcamera::QCameraChannel::start(void)

{
  bool in_NG;
  undefined4 in_cr15;
  
  if (in_NG) {
    software_interrupt(0xf0e92d);
    coprocessor_loadlong(5,in_cr15,&stack0x000002b4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

