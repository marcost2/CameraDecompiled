
/* qcamera::QCamera3HardwareInterface::getFlashInfo(int, bool&, char (&) [64]) */

void qcamera::QCamera3HardwareInterface::getFlashInfo(int param_1,bool *param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_00098b00 + 0x98ad6) + param_1 * 4);
  if (iVar1 != 0) {
    cVar2 = *(char *)(iVar1 + 0x3831);
    if (cVar2 != '\0') {
      cVar2 = true;
    }
    *param_2 = (bool)cVar2;
    strlcpy(param_3,iVar1 + 0x3fb0,0x40);
    return;
  }
  *param_2 = false;
  *param_3 = '\0';
  return;
}

