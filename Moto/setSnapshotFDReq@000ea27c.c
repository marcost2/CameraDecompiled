
/* qcamera::QCameraParameters::setSnapshotFDReq(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setSnapshotFDReq(QCameraParameters *this,QCameraParameters *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  int *piVar3;
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
  int local_18;
  
  piVar3 = *(int **)(DAT_000ea304 + 0xea288);
  local_18 = *piVar3;
  pcVar2 = *(char **)(DAT_000ea308 + 0xea292);
  puVar1 = (undefined8 *)android::CameraParameters::get((char *)param_1);
  if (puVar1 == (undefined8 *)0x0) {
    local_78 = 0;
    uStack112 = 0;
    uStack40 = 0;
    uStack36 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_2c = 0;
    local_48 = 0;
    uStack64 = 0;
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    property_get(DAT_000ea310 + 0xea2e4,&local_78,*(undefined4 *)(DAT_000ea30c + 0xea2de));
    puVar1 = &local_78;
  }
  android::CameraParameters::set((CameraParameters *)this,pcVar2,(char *)puVar1);
  if (*piVar3 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

