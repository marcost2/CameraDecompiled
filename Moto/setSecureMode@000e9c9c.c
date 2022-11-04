
/* qcamera::QCameraParameters::setSecureMode(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setSecureMode(QCameraParameters *this,QCameraParameters *param_1)

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
  
  piVar2 = *(int **)(DAT_000e9d90 + 0xe9caa);
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
  property_get(DAT_000e9d9c + 0xe9d0c,&local_78,*(undefined4 *)(DAT_000e9d98 + 0xe9d06));
  if (__s1 == (undefined8 *)0x0) {
    if (__s2 != (char *)0x0) goto LAB_000e9d46;
LAB_000e9d50:
    if (*(int *)(*(int *)(DAT_000e9dac + 0xe9d56) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e9db4 + 0xe9d70,0x1479,DAT_000e9db0 + 0xe9d66,&local_78);
    }
    __s1 = &local_78;
  }
  else {
    if ((__s2 != (char *)0x0) && (iVar1 = strcmp((char *)__s1,__s2), iVar1 == 0)) {
LAB_000e9d46:
      iVar1 = strcmp(__s2,(char *)&local_78);
      if (iVar1 == 0) goto LAB_000e9d7a;
      goto LAB_000e9d50;
    }
    if (*(int *)(*(int *)(DAT_000e9da0 + 0xe9d22) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e9da8 + 0xe9d3c,0x1476,DAT_000e9da4 + 0xe9d32,__s1);
    }
  }
  setSecureMode(this,(char *)__s1);
LAB_000e9d7a:
  if (*piVar2 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

