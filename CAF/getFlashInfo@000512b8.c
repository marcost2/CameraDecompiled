
/* qcamera::QCamera3HardwareInterface::getFlashInfo(int, bool&, char (&) [64]) */

void qcamera::QCamera3HardwareInterface::getFlashInfo(int param_1,bool *param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_000512e8 + 0x512be) + param_1 * 4);
  if (iVar1 != 0) {
    cVar2 = *(char *)(iVar1 + 0x3734);
    if (cVar2 != '\0') {
      cVar2 = true;
    }
    *param_2 = (bool)cVar2;
    __ThumbV7PILongThunk_strlcpy();
    return;
  }
  *param_2 = false;
  *param_3 = '\0';
  return;
}

