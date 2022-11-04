
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParametersIntf::commitParameters() */

void qcamera::QCameraParametersIntf::commitParameters(void)

{
  int *in_r0;
  int *piVar1;
  undefined4 in_r1;
  int unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r8;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r4 + -0x2c0);
  }
  piVar1 = in_r0;
  if (in_NG) {
    piVar1 = in_r0 + unaff_r5 * -0x400;
    *in_r0 = unaff_r4;
  }
  *unaff_r8 = &DAT_000fbdd4;
  unaff_r8[-1] = in_lr;
  unaff_r8[-2] = register0x00000054;
  unaff_r8[-3] = in_r12;
  unaff_r8[-4] = unaff_r4;
  unaff_r8[-5] = in_r1;
  unaff_r8[-6] = piVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

