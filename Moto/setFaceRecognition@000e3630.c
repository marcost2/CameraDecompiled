
/* qcamera::QCameraParameters::setFaceRecognition(char const*, unsigned int) */

undefined4 __thiscall
qcamera::QCameraParameters::setFaceRecognition(QCameraParameters *this,char *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  pthread_t pVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (param_1 == (char *)0x0) {
LAB_000e365a:
    if (*(int *)(*(int *)(DAT_000e37cc + 0xe3660) + 0x20) != 0) {
      pcVar3 = (char *)(DAT_000e37d0 + 0xe3674);
      if (param_1 != (char *)0x0) {
        pcVar3 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e37d8 + 0xe3688,8000,DAT_000e37d4 + 0xe367c,pcVar3);
    }
  }
  else {
    iVar2 = strcmp(*(char **)(DAT_000e3798 + 0xe3646),param_1);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e379c + 0xe3654),param_1);
      if (iVar2 != 0) goto LAB_000e365a;
      bVar1 = true;
    }
    iVar2 = *(int *)(DAT_000e37a0 + 0xe3698);
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e37a8 + 0xe36b2,0x1f23,DAT_000e37a4 + 0xe36a8,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e37ac + 0xe36bc),param_1);
    uVar7 = *(uint *)(this + 0x218);
    uVar4 = uVar7 & 0xfffffffd;
    if (bVar1) {
      uVar4 = uVar7 | 2;
    }
    if (uVar7 == uVar4) {
      if (*(int *)(iVar2 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000e37b4 + 0xe36ee,0x1f2e,DAT_000e37b0 + 0xe36e6);
      }
      return 0;
    }
    *(uint *)(this + 0x218) = uVar4;
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e37bc + 0xe3710,0x1f32,DAT_000e37b8 + 0xe3704,uVar4);
      uVar4 = *(uint *)(this + 0x218);
    }
    iVar2 = *(int *)(this + 0x1e0);
    if (iVar2 == 0) {
      uVar6 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar5 = pthread_self(), pVar5 == *(pthread_t *)(this + 0xd34))) {
        *(uint *)(
                 "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
                 + iVar2 + 0x34) = param_2;
        *(uint *)(
                 "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
                 + iVar2 + 0x30) = uVar4;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x23) = 1;
        return 0;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar6 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e37c0 + 0xe3786,DAT_000e37c4 + 0xe3788,DAT_000e37c8 + 0xe378a,
                        0x1f3a,uVar6,0x23);
  }
  return 0xffffffea;
}

