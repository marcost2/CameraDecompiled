
/* qcamera::QCameraParameters::setFocusMode(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setFocusMode(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  if (param_1 == (char *)0x0) {
LAB_000e1492:
    if (*(int *)(*(int *)(DAT_000e1628 + 0xe1498) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar7 = 0x1d7f;
    pcVar2 = (char *)(DAT_000e162c + 0xe14aa);
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    iVar1 = DAT_000e1630 + 0xe14b2;
    iVar5 = DAT_000e1634 + 0xe14be;
    param_1 = pcVar2;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e15e8 + 0xe1426),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e15ec + 0xe1436),param_1);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000e1638 + 0xe1446),param_1);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000e163c + 0xe1454),param_1);
          if (iVar1 == 0) {
            iVar1 = 3;
          }
          else {
            iVar1 = strcmp(*(char **)(DAT_000e1640 + 0xe1462),param_1);
            if (iVar1 == 0) {
              iVar1 = 4;
            }
            else {
              iVar1 = strcmp(*(char **)(DAT_000e1644 + 0xe1470),param_1);
              if (iVar1 == 0) {
                iVar1 = 5;
              }
              else {
                iVar1 = strcmp(*(char **)(DAT_000e1648 + 0xe147e),param_1);
                if (iVar1 == 0) {
                  iVar1 = 6;
                }
                else {
                  iVar1 = strcmp(*(char **)(DAT_000e164c + 0xe148c),param_1);
                  if (iVar1 != 0) goto LAB_000e1492;
                  iVar1 = 7;
                }
              }
            }
          }
        }
      }
    }
    uVar4 = *(uint *)(*(int *)(this + 0x1d4) + 0x564);
    if (uVar4 != 0) {
      uVar8 = *(uint *)(*(int *)(DAT_000e15f0 + 0xe14ec) + iVar1 * 8 + 4);
      uVar6 = 0;
      do {
        if (uVar8 == *(uint *)(*(int *)(this + 0x1d4) + 0x568 + uVar6 * 4)) {
          if (*(int *)(*(int *)(DAT_000e15f4 + 0xe1538) + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000e15fc + 0xe1552,0x1d71,DAT_000e15f8 + 0xe1548,param_1);
          }
          *(uint *)(this + 0x220) = uVar8;
          updateParamEntry(this,*(char **)(DAT_000e1600 + 0xe1560),param_1);
          iVar1 = *(int *)(this + 0x1e0);
          if (iVar1 == 0) {
            uVar7 = 0;
          }
          else {
            if ((*(int *)(this + 0xd30) == 1) &&
               (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
              uVar7 = 0;
              *(uint *)(iVar1 + 0xc65c) = uVar8 & 0xff;
              *(undefined *)(*(int *)(this + 0x1e0) + 5) = 1;
              goto LAB_000e15c6;
            }
            MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
            uVar7 = *(undefined4 *)(this + 0x1e0);
          }
          __android_log_print(6,DAT_000e1610 + 0xe15bc,DAT_000e1614 + 0xe15be,DAT_000e1618 + 0xe15c0
                              ,0x1d76,uVar7,5);
          uVar7 = 0xffffffea;
LAB_000e15c6:
          iVar1 = strcmp(param_1,(char *)(DAT_000e161c + 0xe15ce));
          if (iVar1 == 0) {
            android::CameraParameters::set
                      ((CameraParameters *)this,*(char **)(DAT_000e1620 + 0xe15dc),
                       (char *)(DAT_000e1624 + 0xe15de));
            return uVar7;
          }
          return uVar7;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
    if (*(int *)(*(int *)(DAT_000e1604 + 0xe150c) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar7 = 0x1d6d;
    iVar1 = DAT_000e1608 + 0xe151c;
    iVar5 = DAT_000e160c + 0xe1526;
  }
  mm_camera_debug_log(1,1,iVar5,uVar7,iVar1,param_1);
  return 0xffffffea;
}

