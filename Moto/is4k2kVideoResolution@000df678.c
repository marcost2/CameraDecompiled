
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParameters::is4k2kVideoResolution() */

void qcamera::QCameraParameters::is4k2kVideoResolution(void)

{
  int in_r0;
  undefined4 *in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r8;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  char in_NG;
  bool in_OV;
  
  if ((bool)in_NG != in_OV) {
    unaff_r11 = unaff_r4 + (in_r0 << (unaff_r5 & 0xff));
  }
  if (in_OV) {
    *in_r1 = in_lr;
    in_r1[-1] = register0x00000054;
    in_r1[-2] = unaff_r11;
    in_r1[-3] = in_r3;
    in_r1[-4] = in_r2;
    in_r1 = in_r1 + -5;
  }
  if ((bool)in_NG == in_OV) {
    in_r1[-1] = &UNK_000df68c;
    in_r1[-2] = in_r12;
    in_r1[-3] = unaff_r8;
    in_r1[-4] = in_r1;
    in_r1[-5] = in_r0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

