
/* qcamera::getExifGpsProcessingMethod(char*, unsigned int&, char*) */

undefined4 qcamera::getExifGpsProcessingMethod(char *param_1,uint *param_2,char *param_3)

{
  size_t sVar1;
  uint uVar2;
  
  if (param_3 != (char *)0x0) {
    *(undefined8 *)param_1 = *(undefined8 *)(DAT_000abff8 + 0xabfc8);
    *param_2 = 8;
    strlcpy(param_1 + 8,param_3,0x21);
    sVar1 = strlen(param_3);
    uVar2 = *param_2;
    *param_2 = uVar2 + sVar1 + 1;
    param_1[uVar2 + sVar1] = '\0';
    return 0;
  }
  return 0xffffffea;
}

