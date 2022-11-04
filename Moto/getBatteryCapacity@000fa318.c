
/* qcamera::QCameraParameters::getBatteryCapacity() */

undefined2 qcamera::QCameraParameters::getBatteryCapacity(void)

{
  FILE *__stream;
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined uStack40;
  undefined7 local_27;
  undefined uStack32;
  undefined8 uStack31;
  int local_14;
  
  piVar3 = *(int **)(DAT_000fa3dc + 0xfa324);
  local_14 = *piVar3;
  local_30 = *(undefined8 *)(DAT_000fa3e0 + 0xfa340);
  uStack31 = *(undefined8 *)(DAT_000fa3e0 + 0xfa351);
  local_40 = SUB168(*(undefined (*) [16])(DAT_000fa3e0 + 0xfa330),0);
  uStack56 = SUB168(*(undefined (*) [16])(DAT_000fa3e0 + 0xfa330) >> 0x40,0);
  uStack40 = (undefined)*(undefined8 *)(DAT_000fa3e0 + 0xfa348);
  local_27 = (undefined7)*(undefined8 *)(DAT_000fa3e0 + 0xfa349);
  uStack32 = (undefined)((ulonglong)*(undefined8 *)(DAT_000fa3e0 + 0xfa349) >> 0x38);
  local_60 = 0;
  uStack88 = 0;
  local_50 = 0;
  uStack72 = 0;
  __stream = fopen((char *)&local_40,(char *)(DAT_000fa3e4 + 0xfa366));
  if (__stream == (FILE *)0x0) {
    __android_log_print(6,DAT_000fa3e8 + 0xfa39c,DAT_000fa3ec + 0xfa39e,DAT_000fa3f0 + 0xfa3a0,0x716
                        ,&local_40);
    uVar2 = 0;
  }
  else {
    iVar1 = __fread_chk(&local_60,1,0x20,__stream,0x20);
    if (iVar1 == 0) {
      uVar2 = 0;
      __android_log_print(6,DAT_000fa3f4 + 0xfa3bc,DAT_000fa3f8 + 0xfa3be,DAT_000fa3fc + 0xfa3c0,
                          0x71a,0);
    }
    else {
      iVar1 = atoi((char *)&local_60);
      uVar2 = (undefined2)iVar1;
    }
    fclose(__stream);
  }
  if (*piVar3 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

