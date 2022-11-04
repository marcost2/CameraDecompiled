
/* qcamera::QCameraParameters::setVideoHDR(char const*) */

void __thiscall qcamera::QCameraParameters::setVideoHDR(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  pthread_t pVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined8 uStack44;
  int local_24;
  
  piVar9 = *(int **)(DAT_000e33f4 + 0xe31aa);
  local_24 = *piVar9;
  if (param_1 == (char *)0x0) {
LAB_000e31d0:
    if (*(int *)(*(int *)(DAT_000e3440 + 0xe31d6) + 0x20) != 0) {
      uVar7 = 0x1ee9;
      pcVar2 = (char *)(DAT_000e3444 + 0xe31ea);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      iVar1 = DAT_000e3448 + 0xe31f2;
      pcVar6 = (char *)(DAT_000e344c + 0xe31fe);
LAB_000e33a8:
      mm_camera_debug_log(1,1,pcVar6,uVar7,iVar1,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e33f8 + 0xe31bc),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e33fc + 0xe31ca),param_1);
      if (iVar1 != 0) goto LAB_000e31d0;
      iVar1 = 1;
    }
    pcVar6 = *(char **)(DAT_000e3400 + 0xe320e);
    pcVar2 = (char *)android::CameraParameters::get((char *)this);
    if ((pcVar2 == (char *)0x0) || (iVar3 = strcmp(pcVar2,param_1), iVar3 != 0)) {
      this[0x230] = (QCameraParameters)0x1;
    }
    local_80 = 0;
    uStack120 = 0;
    uStack48 = 0;
    uStack44 = 0;
    local_40 = 0;
    uStack56 = 0;
    local_34 = 0;
    local_50 = 0;
    uStack72 = 0;
    local_60 = 0;
    uStack88 = 0;
    local_70 = 0;
    uStack104 = 0;
    property_get(DAT_000e3408 + 0xe3268,&local_80,*(undefined4 *)(DAT_000e3404 + 0xe3262));
    uVar4 = atoi((char *)&local_80);
    iVar3 = *(int *)(DAT_000e340c + 0xe3278);
    if ((uVar4 & 0xff) == 0) {
      if (*(int *)(iVar3 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000e342c + 0xe32ce,0x1ede,DAT_000e3430 + 0xe32cc,
                            DAT_000e342c + 0xe32ce,param_1);
      }
      updateParamEntry(this,pcVar6,param_1);
      iVar3 = *(int *)(this + 0x1e0);
      if (iVar3 == 0) {
        uVar7 = 0;
      }
      else {
        if ((*(int *)(this + 0xd30) == 1) &&
           (pVar5 = pthread_self(), pVar5 == *(pthread_t *)(this + 0xd34))) {
          *(undefined4 *)("beginInitBatch" + iVar3 + 9) =
               *(undefined4 *)(*(int *)(DAT_000e3450 + 0xe330a) + iVar1 * 8 + 4);
          *(undefined *)(*(int *)(this + 0x1e0) + 0x36) = 1;
          uVar7 = 0;
          goto LAB_000e33b0;
        }
        MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
        uVar7 = *(undefined4 *)(this + 0x1e0);
      }
      __android_log_print(6,DAT_000e3434 + 0xe33e8,DAT_000e3438 + 0xe33ea,DAT_000e343c + 0xe33ec,
                          0x1ee0,uVar7,0x36);
    }
    else {
      if (*(int *)(iVar3 + 0x28) != 0) {
        iVar8 = DAT_000e3410 + 0xe328e;
        mm_camera_debug_log(1,3,iVar8,0x1ed2,DAT_000e3414 + 0xe3290,iVar8);
        if (*(int *)(iVar3 + 0x28) != 0) {
          mm_camera_debug_log(1,3,iVar8,0x1ed7,DAT_000e3418 + 0xe32b2,iVar8,iVar1 << 1);
        }
      }
      iVar8 = *(int *)(this + 0x1e0);
      if (iVar8 == 0) {
        uVar7 = 0;
      }
      else {
        if ((*(int *)(this + 0xd30) == 1) &&
           (pVar5 = pthread_self(), pVar5 == *(pthread_t *)(this + 0xd34))) {
          *(int *)("beginInitBatch" + iVar8 + 0xd) = iVar1 << 1;
          *(undefined *)(*(int *)(this + 0x1e0) + 0x37) = 1;
          updateParamEntry(this,pcVar6,param_1);
          uVar7 = 0;
          goto LAB_000e33b0;
        }
        MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
        uVar7 = *(undefined4 *)(this + 0x1e0);
      }
      pcVar6 = (char *)(DAT_000e3424 + 0xe338a);
      __android_log_print(6,DAT_000e341c + 0xe338c,DAT_000e3420 + 0xe338e,pcVar6,0x1ed8,uVar7,0x37);
      if (*(int *)(iVar3 + 0x20) != 0) {
        uVar7 = 0x1ed9;
        iVar1 = DAT_000e3428 + 0xe33a4;
        pcVar2 = pcVar6;
        goto LAB_000e33a8;
      }
    }
  }
  uVar7 = 0xffffffea;
LAB_000e33b0:
  if (*piVar9 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

