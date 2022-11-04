
/* qcamera::QCameraParameters::setWBManualCCT(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setWBManualCCT(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 != (char *)0x0) {
    iVar1 = atoi(param_1);
    if ((*(int *)(*(int *)(this + 0x1d4) + 0x554) <= iVar1) &&
       (iVar1 <= *(int *)(*(int *)(this + 0x1d4) + 0x558))) {
      if (*(int *)(*(int *)(DAT_000e29e4 + 0xe2944) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000e29ec + 0xe295e,0x24f6,DAT_000e29e8 + 0xe2954,iVar1);
      }
      updateParamEntry(this,*(char **)(DAT_000e29f0 + 0xe2968),param_1);
      iVar5 = *(int *)(this + 0x1e0);
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        if ((*(int *)(this + 0xd30) == 1) &&
           (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
          *(int *)("No memory for camera_cmd_t" + iVar5 + 0xd) = iVar1;
          *(undefined4 *)("No memory for camera_cmd_t" + iVar5 + 9) = 0;
          *(undefined *)(*(int *)(this + 0x1e0) + 0xdb) = 1;
          return 0;
        }
        MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
        uVar4 = *(undefined4 *)(this + 0x1e0);
      }
      __android_log_print(6,DAT_000e29f4 + 0xe29d4,DAT_000e29f8 + 0xe29d6,DAT_000e29fc + 0xe29d8,
                          0x24fb,uVar4,0xdb);
      return 0xffffffea;
    }
  }
  if (*(int *)(*(int *)(DAT_000e2a00 + 0xe2914) + 0x20) != 0) {
    pcVar2 = (char *)(DAT_000e2a04 + 0xe2926);
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    mm_camera_debug_log(1,1,DAT_000e2a0c + 0xe293a,0x2503,DAT_000e2a08 + 0xe292e,pcVar2);
  }
  return 0xffffffea;
}

