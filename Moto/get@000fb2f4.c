
/* WARNING: Control flow encountered bad instruction data */
/* android::CameraParameters::get(char const*) const */

void android::CameraParameters::get(char *param_1)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    in_NG = -1 < (int)((uint)&stack0x00000000 >> 0x12);
  }
  if (in_NG) {
    *unaff_r4 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

