
/* qcamera::QCameraParameters::setPreviewFpsRange(int, int, int, int) */

void __thiscall
qcamera::QCameraParameters::setPreviewFpsRange
          (QCameraParameters *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack188;
  float local_b8;
  float local_b4;
  int local_ac;
  int local_a8;
  char acStack164 [92];
  char acStack72 [32];
  int local_28;
  
  piVar6 = *(int **)(DAT_000e0eac + 0xe0c64);
  local_28 = *piVar6;
  local_ac = param_2;
  local_a8 = param_1;
  property_get(DAT_000e0eb4 + 0xe0c7c,acStack164,*(undefined4 *)(DAT_000e0eb0 + 0xe0c72));
  iVar1 = atoi(acStack164);
  iVar7 = *(int *)(DAT_000e0eb8 + 0xe0c8e);
  if (*(int *)(iVar7 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e0ec0 + 0xe0cb2,0x1cbb,DAT_000e0ebc + 0xe0ca2,param_1,param_2,
                        param_3,param_4);
  }
  if ((iVar1 != 0) &&
     (local_ac = iVar1 * 1000, local_a8 = local_ac, this[0x2ec] == (QCameraParameters)0x0)) {
    param_4 = local_ac;
    param_3 = local_ac;
  }
  iVar5 = local_a8;
  iVar1 = local_ac;
  FUN_000d6e38(acStack72,0x20,0x20,DAT_000e0ec4 + 0xe0cea);
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e0ecc + 0xe0d08,0x1cc4,DAT_000e0ec8 + 0xe0cfe,acStack72);
    iVar1 = local_ac;
    iVar5 = local_a8;
  }
  updateParamEntry(this,*(char **)(DAT_000e0ed0 + 0xe0d16),acStack72);
  local_b4 = (float)(longlong)param_4 / DAT_000e0ea8;
  local_b8 = (float)(longlong)param_3 / DAT_000e0ea8;
  fStack188 = (float)(longlong)iVar1 / DAT_000e0ea8;
  local_c0 = (float)(longlong)iVar5 / DAT_000e0ea8;
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e0ed8 + 0xe0d84,0x1ccf,DAT_000e0ed4 + 0xe0d74,iVar5,iVar1,param_3
                        ,param_4);
  }
  puVar2 = *(undefined4 **)(this + 0x294);
  if (((puVar2 != (undefined4 *)0x0) && (*(int *)(this + 0x26c) == 0)) &&
     (this[0x214] == (QCameraParameters)0x0)) {
    local_c4 = (float)(longlong)local_a8;
    local_c8 = (float)(longlong)local_ac;
    if (this[0x2ec] != (QCameraParameters)0x0) {
      local_c4 = *(float *)(this + 0x2e4);
      local_c8 = *(float *)(this + 0x2e8);
    }
    pfVar8 = &local_c0;
    (**(code **)*puVar2)(puVar2,&local_a8,&local_ac,&local_c4,&local_c8,pfVar8,0);
    if (*(int *)(iVar7 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e0ee0 + 0xe0e26,0x1cdd,DAT_000e0edc + 0xe0dfe,pfVar8,
                          (double)local_c0,(double)fStack188,(double)local_b8,(double)local_b4);
    }
  }
  iVar1 = *(int *)(this + 0x1e0);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
      *(ulonglong *)("No Advanced Capture feature enabled!" + iVar1 + 0x1a) =
           CONCAT44(fStack188,local_c0);
      *(ulonglong *)("No Advanced Capture feature enabled!" + iVar1 + 0x22) =
           CONCAT44(local_b4,local_b8);
      *(undefined *)(*(int *)(this + 0x1e0) + 10) = 1;
      uVar4 = 0;
      goto LAB_000e0e94;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar4 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e0ee4 + 0xe0e8a,DAT_000e0ee8 + 0xe0e8c,DAT_000e0eec + 0xe0e8e,0x1cee,
                      uVar4,10);
  uVar4 = 0xffffffea;
LAB_000e0e94:
  if (*piVar6 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

