
/* qcamera::QCameraParameters::handleMotDebugParams(qcamera::QCameraParameters const&) */

int __thiscall
qcamera::QCameraParameters::handleMotDebugParams(QCameraParameters *this,QCameraParameters *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  pthread_t pVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0xd20);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  pcVar2 = (char *)android::CameraParameters::get((char *)this);
  if ((pcVar1 == (char *)0x0) ||
     ((pcVar2 != (char *)0x0 && (iVar3 = strcmp(pcVar1,pcVar2), iVar3 == 0)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = setLog3A(this,(char *)(DAT_000ec718 + 0xec624),pcVar1);
  }
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  pcVar2 = (char *)android::CameraParameters::get((char *)this);
  iVar5 = iVar3;
  if ((pcVar1 != (char *)0x0) &&
     (((pcVar2 == (char *)0x0 || (iVar4 = strcmp(pcVar1,pcVar2), iVar4 != 0)) &&
      (iVar5 = setLog3A(this,(char *)(DAT_000ec720 + 0xec65c),pcVar1), iVar5 == 0)))) {
    iVar5 = iVar3;
  }
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  pcVar2 = (char *)android::CameraParameters::get((char *)this);
  iVar3 = iVar5;
  if (((pcVar1 != (char *)0x0) &&
      ((pcVar2 == (char *)0x0 || (iVar4 = strcmp(pcVar1,pcVar2), iVar4 != 0)))) &&
     (iVar3 = setLog3A(this,(char *)(DAT_000ec728 + 0xec698),pcVar1), iVar3 == 0)) {
    iVar3 = iVar5;
  }
  if (iVar8 != *(int *)(this + 0xd20)) {
    iVar8 = *(int *)(this + 0x1e0);
    if (iVar8 == 0) {
      uVar7 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar6 = pthread_self(), pVar6 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)(iVar8 + 0x22b8) = 0;
        *(undefined *)(*(int *)(this + 0x1e0) + 0xb4) = 1;
        return iVar3;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar7 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000ec72c + 0xec704,DAT_000ec730 + 0xec706,DAT_000ec734 + 0xec708,0xcfd
                        ,uVar7,0xb4);
  }
  return iVar3;
}

