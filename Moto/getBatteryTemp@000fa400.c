
/* qcamera::QCameraParameters::getBatteryTemp() */

undefined2 qcamera::QCameraParameters::getBatteryTemp(void)

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
  undefined5 uStack40;
  undefined3 local_23;
  undefined5 uStack32;
  int local_14;
  
  piVar3 = *(int **)(DAT_000fa4d4 + 0xfa40c);
  local_14 = *piVar3;
  local_30 = *(undefined8 *)(DAT_000fa4d8 + 0xfa428);
  local_40 = SUB168(*(undefined (*) [16])(DAT_000fa4d8 + 0xfa418),0);
  uStack56 = SUB168(*(undefined (*) [16])(DAT_000fa4d8 + 0xfa418) >> 0x40,0);
  uStack40 = (undefined5)*(undefined8 *)(DAT_000fa4d8 + 0xfa430);
  local_23 = (undefined3)*(undefined8 *)(DAT_000fa4d8 + 0xfa435);
  uStack32 = (undefined5)((ulonglong)*(undefined8 *)(DAT_000fa4d8 + 0xfa435) >> 0x18);
  local_60 = 0;
  uStack88 = 0;
  local_50 = 0;
  uStack72 = 0;
  __stream = fopen((char *)&local_40,(char *)(DAT_000fa4dc + 0xfa44e));
  if (__stream == (FILE *)0x0) {
    __android_log_print(6,DAT_000fa4e0 + 0xfa494,DAT_000fa4e4 + 0xfa496,DAT_000fa4e8 + 0xfa498,0x730
                        ,&local_40);
    uVar2 = 0;
  }
  else {
    iVar1 = __fread_chk(&local_60,1,0x20,__stream,0x20);
    if (iVar1 == 0) {
      uVar2 = 0;
      __android_log_print(6,DAT_000fa4ec + 0xfa4b4,DAT_000fa4f0 + 0xfa4b6,DAT_000fa4f4 + 0xfa4b8,
                          0x734,0);
    }
    else {
      iVar1 = atoi((char *)&local_60);
      uVar2 = (undefined2)(iVar1 / 10);
    }
    fclose(__stream);
  }
  if (*piVar3 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

