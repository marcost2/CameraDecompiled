
/* qcamera::QCamera3HardwareInterface::convertToRegions(cam_rect_t, int*, int) */

void qcamera::QCamera3HardwareInterface::convertToRegions
               (cam_rect_t param_1,int *param_2,int param_3)

{
  int in_r3;
  cam_rect_t *in_stack_00000000;
  cam_rect_t in_stack_00000004;
  
  *in_stack_00000000 = param_1;
  in_stack_00000000[1] = (cam_rect_t)param_2;
  in_stack_00000000[2] = param_3 + param_1;
  in_stack_00000000[3] = (int)param_2 + in_r3;
  if (-1 < (int)in_stack_00000004) {
    in_stack_00000000[4] = in_stack_00000004;
  }
  return;
}

