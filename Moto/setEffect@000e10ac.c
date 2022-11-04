
/* qcamera::QCameraParameters::setEffect(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setEffect(QCameraParameters *this,QCameraParameters *param_1)

{
  QCameraParameters QVar1;
  undefined8 *__s1;
  char *__s2;
  int iVar2;
  undefined4 uVar3;
  void *__s2_00;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined8 uStack44;
  int local_20;
  
  puVar5 = &local_80;
  piVar4 = *(int **)(DAT_000e1180 + 0xe10ba);
  local_20 = *piVar4;
  __s1 = (undefined8 *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  local_40 = 0;
  uStack56 = 0;
  local_50 = 0;
  uStack72 = 0;
  local_60 = 0;
  uStack88 = 0;
  local_70 = 0;
  uStack104 = 0;
  local_80 = 0;
  uStack120 = 0;
  local_34 = 0;
  uStack48 = 0;
  uStack44 = 0;
  __s2_00 = (void *)(DAT_000e118c + 0xe1118);
  property_get(DAT_000e1188 + 0xe111a,&local_80,__s2_00);
  iVar2 = memcmp(&local_80,__s2_00,5);
  if (iVar2 == 0) {
    if (__s1 == (undefined8 *)0x0) {
LAB_000e116a:
      uVar3 = 0;
      goto LAB_000e116c;
    }
    if ((__s2 != (char *)0x0) && (iVar2 = strcmp((char *)__s1,__s2), iVar2 == 0)) {
      QVar1 = this[0x264];
      puVar5 = __s1;
      goto joined_r0x000e1158;
    }
  }
  else {
    __s1 = &local_80;
    if ((__s2 != (char *)0x0) &&
       (iVar2 = strcmp((char *)&local_80,__s2), __s1 = &local_80, iVar2 == 0)) {
      QVar1 = this[0x264];
joined_r0x000e1158:
      __s1 = puVar5;
      if (QVar1 == (QCameraParameters)0x0) goto LAB_000e116a;
    }
  }
  this[0x264] = (QCameraParameters)0x0;
  uVar3 = setEffect(this,(char *)__s1);
LAB_000e116c:
  if (*piVar4 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

