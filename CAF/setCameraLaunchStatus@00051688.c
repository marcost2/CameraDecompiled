
/* setCameraLaunchStatus(unsigned int) */

void setCameraLaunchStatus(uint param_1)

{
  sendSingleParam(0x1e,param_1);
  return;
}

