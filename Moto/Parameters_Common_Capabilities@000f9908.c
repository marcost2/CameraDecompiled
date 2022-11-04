
/* qcamera::Parameters_Common_Capabilities(cam_capability_t*) */

void qcamera::Parameters_Common_Capabilities(cam_capability_t *param_1)

{
  *(undefined4 *)(param_1 + 0x2704) = 4;
  *(undefined4 *)(param_1 + 0x2700) = 2;
  param_1[0x2f7e] = (cam_capability_t)0x1;
  *(undefined4 *)(param_1 + 0x2c2c) = 0;
  *(undefined4 *)(param_1 + 0x26fc) = 2;
  return;
}

