
/* qcamera::QCameraParameters::setAntibanding(char const*) */

void __thiscall qcamera::QCameraParameters::setAntibanding(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined4 uStack48;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined8 uStack36;
  int local_18;
  
  piVar5 = *(int **)(DAT_000e2db0 + 0xe2c34);
  local_18 = *piVar5;
  if (param_1 == (char *)0x0) {
LAB_000e2c72:
    if (*(int *)(*(int *)(DAT_000e2de4 + 0xe2c78) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e2de8 + 0xe2c8c);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e2df0 + 0xe2ca0,0x25c2,DAT_000e2dec + 0xe2c94,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e2db4 + 0xe2c42),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e2db8 + 0xe2c50),param_1);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000e2df4 + 0xe2c5e),param_1);
        if (iVar1 == 0) {
          iVar1 = 2;
        }
        else {
          iVar1 = strcmp(*(char **)(DAT_000e2df8 + 0xe2c6c),param_1);
          if (iVar1 != 0) goto LAB_000e2c72;
          iVar1 = 3;
        }
      }
    }
    if (*(int *)(*(int *)(DAT_000e2dbc + 0xe2cb8) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e2dc4 + 0xe2cd2,0x25b5,DAT_000e2dc0 + 0xe2cc8,param_1);
    }
    updateParamEntry(this,*(char **)(DAT_000e2dc8 + 0xe2cdc),param_1);
    if (iVar1 == 3) {
      local_78 = 0;
      uStack112 = 0;
      uStack40 = 0;
      uStack36 = 0;
      local_38 = 0;
      uStack48 = 0;
      local_2c = 0;
      local_48 = 0;
      uStack64 = 0;
      local_58 = 0;
      uStack80 = 0;
      local_68 = 0;
      uStack96 = 0;
      property_get(DAT_000e2dd0 + 0xe2d22,&local_78,DAT_000e2dd4 + 0xe2d24);
      iVar1 = atoi((char *)&local_78);
    }
    else {
      iVar1 = *(int *)(*(int *)(DAT_000e2dcc + 0xe2d36) + iVar1 * 8 + 4);
    }
    iVar6 = *(int *)(this + 0x1e0);
    if (iVar6 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(int *)("No Advanced Capture feature enabled!" + iVar6 + 6) = iVar1;
        *(undefined *)(*(int *)(this + 0x1e0) + 6) = 1;
        uVar4 = 0;
        goto LAB_000e2d9e;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e2dd8 + 0xe2d94,DAT_000e2ddc + 0xe2d96,DAT_000e2de0 + 0xe2d98,
                        0x25bb,uVar4,6);
  }
  uVar4 = 0xffffffea;
LAB_000e2d9e:
  if (*piVar5 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

