
/* WARNING: Control flow encountered bad instruction data */
/* qcamera::QCamera2HardwareInterface::metadata_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::metadata_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  int *unaff_r5;
  int unaff_r11;
  bool in_NG;
  undefined4 in_cr15;
  
  if (in_NG) {
    software_interrupt(0xf0e92d);
    *unaff_r5 = unaff_r11;
  }
  else {
    coprocessor_store(5,in_cr15,unaff_r11 + 0x2b4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

