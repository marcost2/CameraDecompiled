
/* qcamera::QCameraParameters::setSceneMode(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setSceneMode(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1 != (char *)0x0) {
    uVar4 = 0;
    iVar6 = *(int *)(DAT_000e5f78 + 0xe5e4c);
    do {
      iVar1 = strcmp(*(char **)(iVar6 + uVar4 * 8),param_1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(DAT_000e5f8c + 0xe5e9a);
        if (*(int *)(iVar1 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000e5f94 + 0xe5eb8,0x26be,DAT_000e5f90 + 0xe5eae,param_1);
        }
        updateParamEntry(this,*(char **)(DAT_000e5f98 + 0xe5ec2),param_1);
        if ((this[0x2ed] == (QCameraParameters)0x0) && (this[0xd25] == (QCameraParameters)0x0)) {
          uVar5 = *(undefined4 *)(iVar6 + uVar4 * 8 + 4);
          if (this[0x2cc] != (QCameraParameters)0x0) {
            pthread_mutex_lock((pthread_mutex_t *)(this + 0x2d0));
            *(undefined4 *)(this + 0x2d4) = uVar5;
            pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2d0));
          }
          iVar6 = *(int *)(this + 0x1e0);
          if (iVar6 == 0) {
            uVar5 = 0;
          }
          else {
            if ((*(int *)(this + 0xd30) == 1) &&
               (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
              *(undefined4 *)("Failed to queue CREATE_JPEG_SESSION" + iVar6 + 9) = uVar5;
              *(undefined *)(*(int *)(this + 0x1e0) + 0xd) = 1;
              return 0;
            }
            MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
            uVar5 = *(undefined4 *)(this + 0x1e0);
          }
          __android_log_print(6,DAT_000e5fa4 + 0xe5f6e,DAT_000e5fa8 + 0xe5f70,DAT_000e5fac + 0xe5f72
                              ,0x26cd,uVar5,0xd);
          return 0xffffffea;
        }
        if (*(int *)(iVar1 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000e5fa0 + 0xe5eee,0x26c6,DAT_000e5f9c + 0xe5ee6);
        }
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x14);
  }
  if (*(int *)(*(int *)(DAT_000e5f7c + 0xe5e64) + 0x20) != 0) {
    pcVar2 = (char *)(DAT_000e5f80 + 0xe5e74);
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    mm_camera_debug_log(1,1,DAT_000e5f88 + 0xe5e88,0x26d4,DAT_000e5f84 + 0xe5e7c,pcVar2);
  }
  return 0xffffffea;
}

