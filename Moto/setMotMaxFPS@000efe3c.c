
/* qcamera::QCameraParameters::setMotMaxFPS() */

undefined4 __thiscall qcamera::QCameraParameters::setMotMaxFPS(QCameraParameters *this)

{
  char **ppcVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined2 local_1c;
  undefined local_1a;
  undefined2 local_18;
  undefined local_16;
  int local_14;
  
  piVar3 = *(int **)(DAT_000efeb4 + 0xefe4c);
  local_14 = *piVar3;
  local_18 = 0x3432;
  local_16 = 0;
  local_1a = 0;
  local_1c = 0x3033;
  if (*(int *)(*(int *)(this + 0x1d4) + 0x5080) != 0x1e) {
    if (*(int *)(*(int *)(this + 0x1d4) + 0x5080) == 0x18) {
      puVar2 = &local_18;
      ppcVar1 = (char **)(DAT_000efeb8 + 0xefe80);
      goto LAB_000efe98;
    }
    __android_log_print(6,DAT_000efebc + 0xefe8c,DAT_000efec0 + 0xefe8e,DAT_000efec4 + 0xefe90);
  }
  puVar2 = &local_1c;
  ppcVar1 = (char **)(DAT_000efec8 + 0xefe9a);
LAB_000efe98:
  android::CameraParameters::set((CameraParameters *)this,*ppcVar1,(char *)puVar2);
  if (*piVar3 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

