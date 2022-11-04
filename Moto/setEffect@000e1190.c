
/* qcamera::QCameraParameters::setEffect(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setEffect(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 == (char *)0x0) {
LAB_000e1264:
    if (*(int *)(*(int *)(DAT_000e1398 + 0xe126a) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e139c + 0xe127c);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e13a4 + 0xe1290,0x1d2f,DAT_000e13a0 + 0xe1284,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e1370 + 0xe11a4),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e1374 + 0xe11b4),param_1);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000e13a8 + 0xe11c4),param_1);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000e13ac + 0xe11d4),param_1);
          if (iVar1 == 0) {
            iVar1 = 3;
          }
          else {
            iVar1 = strcmp(*(char **)(DAT_000e13b0 + 0xe11e4),param_1);
            if (iVar1 == 0) {
              iVar1 = 4;
            }
            else {
              iVar1 = strcmp(*(char **)(DAT_000e13b4 + 0xe11f4),param_1);
              if (iVar1 == 0) {
                iVar1 = 5;
              }
              else {
                iVar1 = strcmp(*(char **)(DAT_000e13b8 + 0xe1204),param_1);
                if (iVar1 == 0) {
                  iVar1 = 6;
                }
                else {
                  iVar1 = strcmp(*(char **)(DAT_000e13bc + 0xe1214),param_1);
                  if (iVar1 == 0) {
                    iVar1 = 7;
                  }
                  else {
                    iVar1 = strcmp(*(char **)(DAT_000e13c0 + 0xe1224),param_1);
                    if (iVar1 == 0) {
                      iVar1 = 8;
                    }
                    else {
                      iVar1 = strcmp(*(char **)(DAT_000e13c4 + 0xe1234),param_1);
                      if (iVar1 == 0) {
                        iVar1 = 9;
                      }
                      else {
                        iVar1 = strcmp(*(char **)(DAT_000e13c8 + 0xe1242),param_1);
                        if (iVar1 == 0) {
                          iVar1 = 10;
                        }
                        else {
                          iVar1 = strcmp(*(char **)(DAT_000e13cc + 0xe1250),param_1);
                          if (iVar1 == 0) {
                            iVar1 = 0xb;
                          }
                          else {
                            iVar1 = strcmp(*(char **)(DAT_000e13d0 + 0xe125e),param_1);
                            if (iVar1 != 0) goto LAB_000e1264;
                            iVar1 = 0xc;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar5 = (uint)*(byte *)(*(int *)(DAT_000e1378 + 0xe12cc) + iVar1 * 8 + 4);
    if (*(int *)(*(int *)(DAT_000e137c + 0xe12d8) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e1384 + 0xe12f2,0x1d25,DAT_000e1380 + 0xe12e8,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e1388 + 0xe12fc),param_1);
    *(uint *)(this + 0x388) = uVar5;
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(uint *)("Found buffer %p for Frame %d, numPendingBufsAtFlush = %d" + iVar1 + 0x34) = uVar5
        ;
        *(undefined *)(*(int *)(this + 0x1e0) + 0xc) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e138c + 0xe1360,DAT_000e1390 + 0xe1362,DAT_000e1394 + 0xe1364,
                        0x1d29,uVar4,0xc);
  }
  return 0xffffffea;
}

