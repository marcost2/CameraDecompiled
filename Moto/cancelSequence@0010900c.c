
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::MotParamStateMachine::cancelSequence() */

void qcamera::MotParamStateMachine::cancelSequence(void)

{
  undefined4 *in_r0;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_OV;
  
  if (in_OV) {
    *in_r0 = in_lr;
    in_r0[-1] = unaff_r10;
    in_r0[-2] = unaff_r9;
    in_r0[-3] = in_r2;
    *in_r0 = in_r3;
    in_r0[1] = unaff_r4;
    in_r0[2] = unaff_r6;
    in_r0[3] = unaff_r8;
    in_r0[4] = in_r12;
    in_r0[5] = register0x00000054;
    in_r0[6] = &UNK_0010901c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

