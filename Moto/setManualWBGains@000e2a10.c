
/* qcamera::QCameraParameters::setManualWBGains(char const*) */

void __thiscall qcamera::QCameraParameters::setManualWBGains(QCameraParameters *this,char *param_1)

{
  int iVar1;
  pthread_t pVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  double local_48;
  double local_40;
  double local_38;
  int local_2c;
  
  piVar5 = *(int **)(DAT_000e2bb4 + 0xe2a24);
  local_2c = *piVar5;
  if (param_1 == (char *)0x0) goto LAB_000e2b3e;
  iVar1 = parseGains((QCameraParameters *)&local_48,param_1,&local_38,&local_40,&local_48);
  if (iVar1 != 0) goto LAB_000e2b6e;
  dVar6 = (double)*(float *)(*(int *)(this + 0x1d4) + 0x55c);
  if (local_38 < dVar6) {
LAB_000e2b3e:
    if (*(int *)(*(int *)(DAT_000e2bd4 + 0xe2b44) + 0x28) != 0) {
      pcVar3 = (char *)(DAT_000e2bd8 + 0xe2b54);
      if (param_1 != (char *)0x0) {
        pcVar3 = param_1;
      }
      mm_camera_debug_log(1,3,DAT_000e2be0 + 0xe2b68,0x2591,DAT_000e2bdc + 0xe2b5c,pcVar3);
    }
  }
  else {
    dVar7 = (double)*(float *)(*(int *)(this + 0x1d4) + 0x560);
    if ((((dVar7 < local_38) || (local_40 < dVar6)) || (dVar7 < local_40)) ||
       ((local_48 < dVar6 || (dVar7 < local_48)))) goto LAB_000e2b3e;
    if (*(int *)(*(int *)(DAT_000e2bb8 + 0xe2aaa) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e2bc0 + 0xe2ac8,0x2582,DAT_000e2bbc + 0xe2ac0);
    }
    updateParamEntry(this,*(char **)(DAT_000e2bc4 + 0xe2ad2),param_1);
    iVar1 = *(int *)(this + 0x1e0);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar2 = pthread_self(), pVar2 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("No memory for camera_cmd_t" + iVar1 + 9) = 1;
        *(float *)("No memory for camera_cmd_t" + iVar1 + 0x15) = (float)local_48;
        *(float *)("No memory for camera_cmd_t" + iVar1 + 0x11) = (float)local_40;
        *(float *)("No memory for camera_cmd_t" + iVar1 + 0xd) = (float)local_38;
        *(undefined *)(*(int *)(this + 0x1e0) + 0xdb) = 1;
        iVar1 = 0;
        goto LAB_000e2b6e;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e2bc8 + 0xe2ba6,DAT_000e2bcc + 0xe2ba8,DAT_000e2bd0 + 0xe2baa,
                        0x2589,uVar4,0xdb);
  }
  iVar1 = -0x16;
LAB_000e2b6e:
  if (*piVar5 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

