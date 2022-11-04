
/* WARNING: Control flow encountered bad instruction data */
/* android::CameraParameters::getSupportedPreviewFormats(android::Vector<int>&) const */

void android::CameraParameters::getSupportedPreviewFormats(Vector *param_1)

{
  undefined4 unaff_r11;
  undefined4 *in_r12;
  bool in_NG;
  
  if (in_NG) {
    in_NG = -1 < (int)((uint)&stack0x00000000 >> 0x12);
  }
  if (in_NG) {
    *in_r12 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

