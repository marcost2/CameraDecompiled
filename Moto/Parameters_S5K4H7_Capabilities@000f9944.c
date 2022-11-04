
/* qcamera::Parameters_S5K4H7_Capabilities(cam_capability_t*) */

void qcamera::Parameters_S5K4H7_Capabilities(cam_capability_t *param_1)

{
  param_1[0x2f83] = (cam_capability_t)0x1;
  *(undefined4 *)(param_1 + 0x5b4) = 0;
  *(undefined4 *)(param_1 + 500) = 1;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  return;
}

