
/* qcamera::MotUtil::getBatteryCapacity() */

undefined qcamera::MotUtil::getBatteryCapacity(void)

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
  undefined uStack40;
  undefined7 local_27;
  undefined uStack32;
  undefined8 uStack31;
  int local_14;
  
  piVar3 = *(int **)(DAT_0010276c + 0x1026b8);
  local_14 = *piVar3;
  local_30 = *(undefined8 *)(DAT_00102770 + 0x1026d4);
  uStack31 = *(undefined8 *)(DAT_00102770 + 0x1026e5);
  local_40 = SUB168(*(undefined (*) [16])(DAT_00102770 + 0x1026c4),0);
  uStack56 = SUB168(*(undefined (*) [16])(DAT_00102770 + 0x1026c4) >> 0x40,0);
  uStack40 = (undefined)*(undefined8 *)(DAT_00102770 + 0x1026dc);
  local_27 = (undefined7)*(undefined8 *)(DAT_00102770 + 0x1026dd);
  uStack32 = (undefined)((ulonglong)*(undefined8 *)(DAT_00102770 + 0x1026dd) >> 0x38);
  local_60 = 0;
  uStack88 = 0;
  local_50 = 0;
  uStack72 = 0;
  __stream = fopen((char *)&local_40,(char *)(DAT_00102774 + 0x1026fa));
  if (__stream == (FILE *)0x0) {
    __android_log_print(6,DAT_00102778 + 0x10272e,DAT_0010277c + 0x102730,DAT_00102780 + 0x102732,
                        0x20,&local_40);
    uVar2 = 0;
  }
  else {
    iVar1 = __fread_chk(&local_60,1,0x20,__stream,0x20);
    if (iVar1 == 0) {
      uVar2 = 0;
      __android_log_print(6,DAT_00102784 + 0x10274c,DAT_00102788 + 0x10274e,DAT_0010278c + 0x102750,
                          0x24,0);
    }
    else {
      iVar1 = atoi((char *)&local_60);
      uVar2 = (undefined)iVar1;
    }
    fclose(__stream);
  }
  if (*piVar3 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

