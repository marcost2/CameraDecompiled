
/* qcamera::MotUtil::getBatteryTemp() */

undefined qcamera::MotUtil::getBatteryTemp(void)

{
  FILE *__stream;
  int iVar1;
  undefined uVar2;
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
  
  piVar3 = *(int **)(DAT_00102860 + 0x10279c);
  local_14 = *piVar3;
  local_30 = *(undefined8 *)(DAT_00102864 + 0x1027b8);
  local_40 = SUB168(*(undefined (*) [16])(DAT_00102864 + 0x1027a8),0);
  uStack56 = SUB168(*(undefined (*) [16])(DAT_00102864 + 0x1027a8) >> 0x40,0);
  uStack40 = (undefined5)*(undefined8 *)(DAT_00102864 + 0x1027c0);
  local_23 = (undefined3)*(undefined8 *)(DAT_00102864 + 0x1027c5);
  uStack32 = (undefined5)((ulonglong)*(undefined8 *)(DAT_00102864 + 0x1027c5) >> 0x18);
  local_60 = 0;
  uStack88 = 0;
  local_50 = 0;
  uStack72 = 0;
  __stream = fopen((char *)&local_40,(char *)(DAT_00102868 + 0x1027de));
  if (__stream == (FILE *)0x0) {
    __android_log_print(6,DAT_0010286c + 0x102822,DAT_00102870 + 0x102824,DAT_00102874 + 0x102826,
                        0x3a,&local_40);
    uVar2 = 0;
  }
  else {
    iVar1 = __fread_chk(&local_60,1,0x20,__stream,0x20);
    if (iVar1 == 0) {
      uVar2 = 0;
      __android_log_print(6,DAT_00102878 + 0x102840,DAT_0010287c + 0x102842,DAT_00102880 + 0x102844,
                          0x3e,0);
    }
    else {
      iVar1 = atoi((char *)&local_60);
      uVar2 = (undefined)(iVar1 / 10);
    }
    fclose(__stream);
  }
  if (*piVar3 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

