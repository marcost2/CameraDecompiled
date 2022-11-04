
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParameters::updateFlash(bool) */

void qcamera::QCameraParameters::updateFlash(bool param_1)

{
  uint uVar1;
  undefined4 in_r2;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  bool in_NG;
  undefined in_CY;
  
  uVar1 = (uint)param_1;
  if (in_NG) {
    in_CY = (byte)((uint)&stack0x00000000 >> 0x11) & 1;
    in_lr = ~((uint)&stack0x00000000 >> 0x12);
    in_NG = -1 < (int)((uint)&stack0x00000000 >> 0x12);
  }
  if (in_NG) {
    *unaff_r8 = unaff_r11;
  }
  if ((bool)in_CY) {
    *(uint *)(uVar1 - 4) = in_lr;
    *(undefined4 *)(uVar1 - 8) = unaff_r10;
    *(undefined4 *)(uVar1 - 0xc) = unaff_r9;
    *(undefined4 *)(uVar1 - 0x10) = in_r2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

