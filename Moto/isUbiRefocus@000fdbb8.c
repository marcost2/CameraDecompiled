
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParametersIntf::isUbiRefocus() */

void __thiscall qcamera::QCameraParametersIntf::isUbiRefocus(QCameraParametersIntf *this)

{
  QCameraParametersIntf *pQVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r9;
  undefined4 in_r12;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r4 + -0x2c0);
  }
  pQVar1 = this;
  if (in_NG) {
    pQVar1 = this + unaff_r5 * -0x1000;
    *(int *)this = unaff_r4;
  }
  *(undefined4 *)(in_lr + -4) = 0xfdbc8;
  *(int *)(in_lr + -8) = in_lr;
  *(BADSPACEBASE **)(in_lr + -0xc) = register0x00000054;
  *(undefined4 *)(in_lr + -0x10) = in_r12;
  *(int *)(in_lr + -0x14) = unaff_r4;
  *(QCameraParametersIntf **)(in_lr + -0x18) = pQVar1;
                    /* WARNING: Could not recover jumptable at 0x000fdbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_ZR) {
    (*(code *)(unaff_r9 - (!in_CY + 0x900000)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

