
/* qcamera::QCameraParameters::setSensorSnapshotHDR(char const*) */

void __thiscall
qcamera::QCameraParameters::setSensorSnapshotHDR(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  pthread_t pVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
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
  
  piVar8 = *(int **)(DAT_000e5da4 + 0xe5c1a);
  local_24 = *piVar8;
  if (param_1 == (char *)0x0) {
LAB_000e5c40:
    if (*(int *)(*(int *)(DAT_000e5de0 + 0xe5c46) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e5de4 + 0xe5c5a);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e5dec + 0xe5c6e,0x1eae,DAT_000e5de8 + 0xe5c62,pcVar2);
    }
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e5da8 + 0xe5c2c),param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e5dac + 0xe5c3a),param_1);
      if (iVar1 != 0) goto LAB_000e5c40;
      iVar1 = 1;
    }
    iVar3 = *(int *)(DAT_000e5db0 + 0xe5c7e);
    iVar7 = *(int *)(DAT_000e5db4 + 0xe5c88);
    if (*(int *)(iVar7 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e5dbc + 0xe5ca6,0x1e9a,DAT_000e5db8 + 0xe5c9c,param_1);
    }
    uVar6 = *(undefined4 *)(iVar3 + iVar1 * 8 + 4);
    updateParamEntry(this,*(char **)(DAT_000e5dc0 + 0xe5cb4),param_1);
    local_40 = 0;
    uStack56 = 0;
    local_50 = 0;
    uStack72 = 0;
    local_60 = 0;
    uStack88 = 0;
    local_70 = 0;
    uStack104 = 0;
    local_80 = 0;
    uStack120 = 0;
    local_34 = 0;
    uStack48 = 0;
    uStack44 = 0;
    property_get(DAT_000e5dc8 + 0xe5cfa,&local_80,*(undefined4 *)(DAT_000e5dc4 + 0xe5cf4));
    uVar4 = atoi((char *)&local_80);
    if ((iVar1 != 0) && ((uVar4 & 0xff) != 0)) {
      if (*(int *)(iVar7 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000e5dcc + 0xe5d1c,0x1ea4,DAT_000e5dd0 + 0xe5d1e,
                            DAT_000e5dcc + 0xe5d1c);
      }
      uVar6 = 2;
    }
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar5 = pthread_self(), pVar5 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("beginInitBatch" + iVar1 + 0xd) = uVar6;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x37) = 1;
        uVar6 = 0;
        goto LAB_000e5d90;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar6 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e5dd4 + 0xe5d86,DAT_000e5dd8 + 0xe5d88,DAT_000e5ddc + 0xe5d8a,
                        0x1ea7,uVar6,0x37);
  }
  uVar6 = 0xffffffea;
LAB_000e5d90:
  if (*piVar8 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

