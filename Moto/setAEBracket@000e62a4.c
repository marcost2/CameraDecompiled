
/* qcamera::QCameraParameters::setAEBracket(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setAEBracket(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  int *piVar3;
  undefined4 local_50;
  undefined4 uStack76;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined4 local_30;
  int local_28;
  
  piVar3 = *(int **)(DAT_000e641c + 0xe62b4);
  local_28 = *piVar3;
  if (param_1 == (char *)0x0) {
    if (*(int *)(*(int *)(DAT_000e6420 + 0xe6356) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e6428 + 0xe636e,0x2719,DAT_000e6424 + 0xe6366);
    }
    goto LAB_000e6370;
  }
  uStack76 = 0;
  uStack72 = 0;
  local_40 = 0;
  uStack56 = 0;
  local_30 = 0;
  iVar1 = strcmp(*(char **)(DAT_000e642c + 0xe62e2),param_1);
  if ((iVar1 == 0) || (iVar1 = strcmp(*(char **)(DAT_000e6430 + 0xe62f0),param_1), iVar1 != 0)) {
    this[0x2f0] = (QCameraParameters)0x0;
    if (*(int *)(*(int *)(DAT_000e6454 + 0xe6302) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e645c + 0xe631a,0x2739,DAT_000e6458 + 0xe6312);
    }
LAB_000e631e:
    local_50 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_000e6434 + 0xe6388);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e643c + 0xe63a4,0x2725,DAT_000e6438 + 0xe639c);
    }
    __s = (char *)android::CameraParameters::get((char *)this);
    if ((__s == (char *)0x0) || (sVar2 = strlen(__s), sVar2 == 0)) {
      if (*(int *)(iVar1 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000e6450 + 0xe640e,0x2730,DAT_000e644c + 0xe6406);
      }
      this[0x2f0] = (QCameraParameters)0x0;
      goto LAB_000e631e;
    }
    local_50 = 1;
    this[0x2f0] = (QCameraParameters)0x1;
    __strlcpy_chk(&uStack76,__s,0x20,0x20);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e6448 + 0xe63f0,0x272c,DAT_000e6444 + 0xe63e6,&uStack76);
    }
  }
  *(ulonglong *)(this + 0x240) = CONCAT44(uStack76,local_50);
  *(undefined8 *)(this + 0x248) = uStack72;
  *(undefined8 *)(this + 0x250) = local_40;
  *(undefined8 *)(this + 600) = uStack56;
  *(undefined4 *)(this + 0x260) = local_30;
  updateParamEntry(this,*(char **)(DAT_000e6460 + 0xe6348),param_1);
LAB_000e6370:
  if (*piVar3 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

