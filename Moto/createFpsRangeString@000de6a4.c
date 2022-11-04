
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCameraParameters::createFpsRangeString(cam_fps_range_t const*, unsigned int, int&) */

void qcamera::QCameraParameters::createFpsRangeString
               (cam_fps_range_t *param_1,uint param_2,int *param_3)

{
  bool in_NG;
  undefined4 in_cr11;
  undefined auStack516 [516];
  
  if (in_NG) {
    software_interrupt(0xf0e92d);
  }
  coprocessor_store(0,in_cr11,auStack516);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

