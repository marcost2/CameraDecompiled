
/* qcamera::QCameraParameters::setBurstLEDOnPeriod(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setBurstLEDOnPeriod(QCameraParameters *this,QCameraParameters *param_1)

{
  int iVar1;
  pthread_t pVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
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
  
  piVar6 = *(int **)(DAT_000e0030 + 0xdff1c);
  local_18 = *piVar6;
  pcVar4 = *(char **)(DAT_000e0034 + 0xdff26);
  iVar1 = android::CameraParameters::getInt((char *)param_1);
  if (799 < iVar1 - 1U) {
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
    property_get(DAT_000e003c + 0xdff78,&local_78,*(undefined4 *)(DAT_000e0038 + 0xdff72));
    iVar1 = atoi((char *)&local_78);
    if (iVar1 < 1) {
      iVar1 = 300;
    }
  }
  android::CameraParameters::set((CameraParameters *)this,pcVar4,iVar1);
  *(int *)(this + 0x23c) = iVar1;
  if (*(int *)(*(int *)(DAT_000e0040 + 0xdff9e) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e0048 + 0xdffb8,0x934,DAT_000e0044 + 0xdffae,iVar1);
  }
  iVar5 = *(int *)(this + 0x1e0);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("Input settings missing!" + iVar5 + 0x17) = iVar1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x33) = 1;
      uVar3 = 0;
      goto LAB_000e001e;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar3 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e004c + 0xe0014,DAT_000e0050 + 0xe0016,DAT_000e0054 + 0xe0018,0x936,
                      uVar3,0x33);
  uVar3 = 0xffffffea;
LAB_000e001e:
  if (*piVar6 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

