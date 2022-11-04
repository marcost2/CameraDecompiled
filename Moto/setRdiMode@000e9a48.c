
/* qcamera::QCameraParameters::setRdiMode(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setRdiMode(QCameraParameters *this,QCameraParameters *param_1)

{
  undefined8 *__s1;
  char *__s2;
  int iVar1;
  int *piVar2;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined4 uStack48;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined8 uStack36;
  int local_1c;
  
  piVar2 = *(int **)(DAT_000e9b3c + 0xe9a56);
  local_1c = *piVar2;
  __s1 = (undefined8 *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  local_38 = 0;
  uStack48 = 0;
  local_48 = 0;
  uStack64 = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  local_2c = 0;
  uStack40 = 0;
  uStack36 = 0;
  property_get(DAT_000e9b48 + 0xe9ab8,&local_78,*(undefined4 *)(DAT_000e9b44 + 0xe9ab2));
  if (__s1 == (undefined8 *)0x0) {
    if (__s2 != (char *)0x0) goto LAB_000e9af2;
LAB_000e9afc:
    if (*(int *)(*(int *)(DAT_000e9b58 + 0xe9b02) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e9b60 + 0xe9b1c,0x145a,DAT_000e9b5c + 0xe9b12,&local_78);
    }
    __s1 = &local_78;
  }
  else {
    if ((__s2 != (char *)0x0) && (iVar1 = strcmp((char *)__s1,__s2), iVar1 == 0)) {
LAB_000e9af2:
      iVar1 = strcmp(__s2,(char *)&local_78);
      if (iVar1 == 0) goto LAB_000e9b26;
      goto LAB_000e9afc;
    }
    if (*(int *)(*(int *)(DAT_000e9b4c + 0xe9ace) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e9b54 + 0xe9ae8,0x1457,DAT_000e9b50 + 0xe9ade,__s1);
    }
  }
  setRdiMode(this,(char *)__s1);
LAB_000e9b26:
  if (*piVar2 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

