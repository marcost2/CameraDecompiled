
/* qcamera::QCameraParameters::setTintlessValue(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setTintlessValue(QCameraParameters *this,char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  pthread_t pVar4;
  undefined4 uVar5;
  
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(*(char **)(DAT_000effcc + 0xefee0),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000effd0 + 0xefeee),param_1);
      if (iVar1 != 0) goto LAB_000eff68;
      iVar1 = 1;
    }
    iVar2 = android::CameraParameters::get((char *)this);
    if (iVar2 != 0) {
      pcVar3 = (char *)android::CameraParameters::get((char *)this);
      pcVar3 = strstr(pcVar3,param_1);
      if (pcVar3 != (char *)0x0) {
        updateParamEntry(this,*(char **)(DAT_000effd8 + 0xeff22),param_1);
        iVar2 = *(int *)(this + 0x1e0);
        if (iVar2 == 0) {
          uVar5 = 0;
        }
        else {
          if ((*(int *)(this + 0xd30) == 1) &&
             (pVar4 = pthread_self(), pVar4 == *(pthread_t *)(this + 0xd34))) {
            *(undefined4 *)("No memory for camera_cmd_t" + iVar2 + 5) =
                 *(undefined4 *)(*(int *)(DAT_000efff8 + 0xeff50) + iVar1 * 8 + 4);
            *(undefined *)(*(int *)(this + 0x1e0) + 0x58) = 1;
            return 0;
          }
          MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
          uVar5 = *(undefined4 *)(this + 0x1e0);
        }
        __android_log_print(6,DAT_000effdc + 0xeffc4,DAT_000effe0 + 0xeffc6,DAT_000effe4 + 0xeffc8,
                            0x22a9,uVar5,0x58);
        return 0xffffffea;
      }
    }
  }
LAB_000eff68:
  if (*(int *)(*(int *)(DAT_000effe8 + 0xeff6e) + 0x20) != 0) {
    pcVar3 = (char *)(DAT_000effec + 0xeff7e);
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
    }
    mm_camera_debug_log(1,1,DAT_000efff4 + 0xeff92,0x22af,DAT_000efff0 + 0xeff86,pcVar3);
  }
  return 0xffffffea;
}

