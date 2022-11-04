
/* qcamera::QCamera3HardwareInterface::isOnEncoder(cam_dimension_t, unsigned int, unsigned int) */

bool qcamera::QCamera3HardwareInterface::isOnEncoder
               (cam_dimension_t param_1,uint param_2,uint param_3)

{
  uint in_r3;
  uint in_stack_00000000;
  
  if (param_2 < in_r3) {
    return true;
  }
  return 0x870 < in_stack_00000000 || (param_3 < in_stack_00000000 || 0xf00 < in_r3);
}

