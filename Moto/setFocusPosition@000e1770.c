
/* qcamera::QCameraParameters::setFocusPosition(char const*, char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setFocusPosition(QCameraParameters *this,char *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  pthread_t pVar4;
  undefined4 extraout_r1;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar5 = *(int *)(DAT_000e18d8 + 0xe1786);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e18e0 + 0xe17a2,0x1d92,DAT_000e18dc + 0xe1796,param_1,param_2);
  }
  uVar1 = atoi(param_1);
  pcVar2 = param_2;
  dVar7 = atof(param_2);
  uVar6 = SUB84(dVar7,0);
  fVar8 = (float)(double)CONCAT44(extraout_r1,pcVar2);
  if (uVar1 < 4) {
    iVar3 = *(int *)(this + 0x1d4) + uVar1 * 4;
    fVar9 = *(float *)(iVar3 + 0x59c);
    fVar10 = *(float *)(iVar3 + 0x58c);
    if (*(int *)(iVar5 + 0x28) != 0) {
      uVar6 = mm_camera_debug_log(uVar6,1,3,DAT_000e18e8 + 0xe17fe,0x1d9b,DAT_000e18e4 + 0xe17f6);
    }
    if ((fVar10 <= fVar8) && (fVar8 <= fVar9)) {
      updateParamEntry(this,*(char **)(DAT_000e18ec + 0xe181c),param_1);
      updateParamEntry(this,*(char **)(DAT_000e18f0 + 0xe182a),param_2);
      fVar9 = ROUND(fVar8);
      if (uVar1 == 3) {
        fVar9 = fVar8;
      }
      iVar5 = *(int *)(this + 0x1e0);
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        if ((*(int *)(this + 0xd30) == 1) &&
           (pVar4 = pthread_self(), pVar4 == *(pthread_t *)(this + 0xd34))) {
          *(float *)(iVar5 + 0xc664) = fVar9;
          *(uint *)(iVar5 + 0xc660) = uVar1;
          *(undefined *)(*(int *)(this + 0x1e0) + 0xda) = 1;
          return 0;
        }
        MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
        uVar6 = *(undefined4 *)(this + 0x1e0);
      }
      __android_log_print(6,DAT_000e18f4 + 0xe18c2,DAT_000e18f8 + 0xe18c4,DAT_000e18fc + 0xe18c6,
                          0x1dae,uVar6,0xda);
      return 0xffffffea;
    }
  }
  if (*(int *)(iVar5 + 0x20) != 0) {
    mm_camera_debug_log(uVar6,1,1,DAT_000e1904 + 0xe1896,0x1db5,DAT_000e1900 + 0xe188c,uVar1,
                        (double)fVar8);
  }
  return 0xffffffea;
}

