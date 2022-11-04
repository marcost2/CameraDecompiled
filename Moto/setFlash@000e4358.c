
/* qcamera::QCameraParameters::setFlash(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setFlash(QCameraParameters *this,char *param_1)

{
  int iVar1;
  pthread_t pVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e439a:
    if (*(int *)(*(int *)(DAT_000e44d4 + 0xe43a0) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar5 = 0x203e;
    pcVar3 = (char *)(DAT_000e44d8 + 0xe43b0);
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
    }
    iVar1 = DAT_000e44dc + 0xe43b8;
    iVar4 = DAT_000e44e0 + 0xe43c4;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e44a4 + 0xe436a),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e44a8 + 0xe4378),param_1);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000e44e4 + 0xe4386),param_1);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000e44e8 + 0xe4394),param_1);
          if (iVar1 != 0) goto LAB_000e439a;
          iVar1 = 3;
        }
      }
    }
    uVar5 = *(undefined4 *)(*(int *)(DAT_000e44ac + 0xe43e2) + iVar1 * 8 + 4);
    iVar1 = *(int *)(DAT_000e44b0 + 0xe43ee);
    if (*(int *)(iVar1 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e44b8 + 0xe4408,0x202d,DAT_000e44b4 + 0xe43fe,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e44bc + 0xe4412),param_1);
    *(undefined4 *)(this + 0x2f4) = uVar5;
    if ((this[0x288] != (QCameraParameters)0x0) || (this[0x299] != (QCameraParameters)0x0)) {
      return 0;
    }
    iVar4 = *(int *)(this + 0x1e0);
    if (iVar4 == 0) {
      pcVar3 = (char *)0x0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("Failed to queue CREATE_JPEG_SESSION" + iVar4 + 0x11) = uVar5;
        *(undefined *)(*(int *)(this + 0x1e0) + 0xf) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      pcVar3 = *(char **)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e44c0 + 0xe4484,DAT_000e44c4 + 0xe4486,DAT_000e44c8 + 0xe4488,
                        0x2036,pcVar3,0xf);
    if (*(int *)(iVar1 + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar5 = 0x2037;
    iVar1 = DAT_000e44cc + 0xe449c;
    iVar4 = (int)&DAT_000e44a4 + DAT_000e44d0;
  }
  mm_camera_debug_log(1,1,iVar4,uVar5,iVar1,pcVar3);
  return 0xffffffea;
}

