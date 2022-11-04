
/* qcamera::MotExif::write_mot_exif(unsigned int, bool) */

void __thiscall qcamera::MotExif::write_mot_exif(MotExif *this,uint param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  int *piVar5;
  float __x;
  float fVar6;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ushort local_100;
  ushort local_fe;
  undefined2 local_fc;
  undefined local_f9;
  float local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined8 uStack232;
  undefined8 local_e0;
  undefined8 uStack216;
  undefined8 local_d0;
  undefined8 uStack200;
  undefined8 local_c0;
  undefined8 uStack184;
  undefined8 local_b0;
  undefined4 uStack168;
  undefined4 local_a4;
  undefined4 uStack160;
  undefined8 uStack156;
  undefined8 local_90;
  undefined local_88;
  undefined local_35;
  int local_34;
  
  local_100 = (ushort)param_2;
  piVar5 = *(int **)(DAT_0010582c + 0x1054ac);
  local_34 = *piVar5;
  iVar2 = property_get(DAT_00105830 + 0x1054be,&local_90,0);
  if (iVar2 == 0) {
    __strncpy_chk2(&local_90,DAT_00105834 + 0x1054d2,0x5b,0x5c,9);
    local_35 = 0;
  }
  sVar3 = strnlen((char *)&local_90,0x5b);
  (**(code **)(*(int *)this + 0xc))(this,0x2c010f,2,sVar3 + 1,&local_90);
  iVar2 = property_get(DAT_00105838 + 0x105506,&local_90,0);
  if ((iVar2 < 1) ||
     (pcVar4 = strstr((char *)&local_90,(char *)(DAT_0010583c + 0x105514)), pcVar4 == (char *)0x0))
  {
    bVar1 = false;
LAB_0010554a:
    __strncpy_chk2(&local_90,DAT_00105844 + 0x10555c,0x5b,0x5c,6);
    local_35 = 0;
    local_b0 = 0;
    uStack168 = 0;
    local_c0 = 0;
    uStack184 = 0;
    local_d0 = 0;
    uStack200 = 0;
    local_e0 = 0;
    uStack216 = 0;
    local_f0 = 0;
    uStack232 = 0;
    local_a4 = 0;
    uStack160 = 0;
    uStack156 = 0;
    property_get(DAT_00105848 + 0x10559e,&local_f0,DAT_0010584c + 0x1055a0);
    pcVar4 = strcasestr((char *)&local_f0,(char *)(DAT_00105850 + 0x1055aa));
    if (pcVar4 != (char *)0x0) {
      property_get(DAT_00105854 + 0x1055b8,&local_90,0);
    }
    sVar3 = strnlen((char *)&local_90,0x5b);
    (**(code **)(*(int *)this + 0xc))(this,0x2d0110,2,sVar3 + 1,&local_90);
    if (bVar1) goto LAB_001055d8;
    local_90 = *(undefined8 *)(DAT_00105858 + 0x105604);
    local_88 = 0;
  }
  else {
    iVar2 = property_get(DAT_00105840 + 0x105524,&local_90,0);
    if (iVar2 == 0) {
      bVar1 = true;
      goto LAB_0010554a;
    }
    sVar3 = strnlen((char *)&local_90,0x5b);
    (**(code **)(*(int *)this + 0xc))(this,0x2d0110,2,sVar3 + 1,&local_90);
LAB_001055d8:
    iVar2 = property_get(DAT_0010585c + 0x1055e4,&local_90,DAT_00105860 + 0x1055e6);
    if (iVar2 < 1) {
      __android_log_print(6,0,DAT_00105864 + 0x1055f8,DAT_00105868 + 0x1055fa);
      goto LAB_0010562e;
    }
  }
  sVar3 = strnlen((char *)&local_90,0x5b);
  (**(code **)(*(int *)this + 0xc))(this,0x440131,2,sVar3 + 1,&local_90);
LAB_0010562e:
  local_f9 = 1;
  (**(code **)(*(int *)this + 0xc))(this,0xb6a301,7,1,&local_f9);
  local_f0 = 0x1ffffffff;
  (**(code **)(*(int *)this + 0xc))(this,0x999203,10,1,&local_f0);
  local_fc = 2;
  local_fe = (ushort)param_2;
  if (param_2 != false) {
    local_fc = 1;
    local_100 = 2;
  }
  (**(code **)(*(int *)this + 0xc))(this,0x8e8822,3,1,&local_fc);
  (**(code **)(*(int *)this + 0xc))(this,0xb8a401,3,1,&local_fe);
  (**(code **)(*(int *)this + 0xc))(this,0xb9a402,3,1,&local_100);
  local_104 = 1;
  local_108 = 0;
  (**(code **)(*(int *)this + 0xc))(this,0x9a9204,10,1,&local_108);
  fVar6 = (float)FPRoundInt(*(float *)(*(int *)(*(int *)(DAT_0010586c + 0x1056fa) + param_1 * 4) +
                                      0x85c) * 10.0,0x20,2,0);
  fVar6 = fVar6 / 10.0;
  if (fVar6 == 0.0) {
    __android_log_print(6,0,DAT_00105870 + 0x1057b0,DAT_00105874 + 0x1057b2);
  }
  else {
    local_f8 = ROUND(fVar6 * 10.0);
    local_f4 = 10;
    __x = (float)(**(code **)(*(int *)this + 0xc))(this,0x8d829d,5,1,&local_f8);
    logf(__x);
    local_110 = ROUND((float)((double)(fVar6 + fVar6) / DAT_00105820) * DAT_00105828);
    local_10c = 100000;
    (**(code **)(*(int *)this + 0xc))(this,0x989202,5,1,&local_110);
    (**(code **)(*(int *)this + 0xc))(this,0x9b9205,5,1,&local_110);
  }
  local_110 = 7.202674e-43;
  (**(code **)(*(int *)this + 0xc))(this,0,1,4,&local_110);
  local_f4 = local_f4 & 0xff000000 | 0x3438;
  local_f8 = 1.20098e-11;
  sVar3 = strlen((char *)&local_f8);
  (**(code **)(*(int *)this + 0xc))(this,0x120012,2,sVar3 + 1,&local_f8);
  if (*piVar5 != local_34) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

