
/* qcamera::QCameraParameters::setContinuousISO(char const*) */

void __thiscall qcamera::QCameraParameters::setContinuousISO(QCameraParameters *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char acStack116 [92];
  int local_18;
  char *__nptr;
  
  piVar6 = *(int **)(DAT_000e3e18 + 0xe3d02);
  local_18 = *piVar6;
  property_get(DAT_000e3e1c + 0xe3d12,acStack116,DAT_000e3e20 + 0xe3d14);
  pcVar1 = (char *)__strlen_chk(acStack116,0x5c);
  __nptr = pcVar1;
  if (pcVar1 == (char *)0x0) {
    __nptr = param_1;
  }
  if (pcVar1 != (char *)0x0) {
    __nptr = acStack116;
  }
  iVar2 = atoi(__nptr);
  if ((iVar2 < 0) || (*(int *)(*(int *)(this + 0x1d4) + 0x36a8) < iVar2)) {
    if (*(int *)(*(int *)(DAT_000e3e40 + 0xe3d46) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000e3e48 + 0xe3d62,0xd9a,DAT_000e3e44 + 0xe3d58,iVar2);
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000e3e24 + 0xe3d6c) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e3e2c + 0xe3d86,0xd8e,DAT_000e3e28 + 0xe3d7c,iVar2);
    }
    updateParamEntry(this,*(char **)(DAT_000e3e30 + 0xe3d90),param_1);
    uVar4 = 0;
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 != 0) {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined8 *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar5 + 0x18) = 0
        ;
        *(longlong *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar5 + 0x20) =
             (longlong)iVar2;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x1a) = 1;
        uVar4 = 0;
        goto LAB_000e3e08;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e3e34 + 0xe3dfe,DAT_000e3e38 + 0xe3e00,DAT_000e3e3c + 0xe3e02,0xd95
                        ,uVar4,0x1a);
  }
  uVar4 = 0xffffffea;
LAB_000e3e08:
  if (*piVar6 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

