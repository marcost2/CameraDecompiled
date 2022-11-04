
/* qcamera::QCameraParameters::initMotDebugParams() */

void __thiscall qcamera::QCameraParameters::initMotDebugParams(QCameraParameters *this)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  char acStack116 [92];
  int local_18;
  
  piVar4 = *(int **)(DAT_000f0404 + 0xf0360);
  local_18 = *piVar4;
  property_get(DAT_000f040c + 0xf0374,acStack116,*(undefined4 *)(DAT_000f0408 + 0xf036a));
  uVar1 = atoi(acStack116);
  *(uint *)(this + 0xd20) = uVar1;
  pcVar5 = *(char **)(DAT_000f0410 + 0xf038a);
  pcVar2 = *(char **)(DAT_000f0414 + 0xf0390);
  pcVar3 = pcVar2;
  if ((uVar1 & 1) == 0) {
    pcVar3 = pcVar5;
  }
  android::CameraParameters::set((CameraParameters *)this,(char *)(DAT_000f0418 + 0xf039c),pcVar3);
  pcVar3 = pcVar2;
  if (-1 < *(int *)(this + 0xd20) << 0x1e) {
    pcVar3 = pcVar5;
  }
  android::CameraParameters::set((CameraParameters *)this,(char *)(DAT_000f041c + 0xf03b2),pcVar3);
  if (-1 < *(int *)(this + 0xd20) << 0x1d) {
    pcVar2 = pcVar5;
  }
  android::CameraParameters::set((CameraParameters *)this,(char *)(DAT_000f0420 + 0xf03c8),pcVar2);
  pcVar3 = (char *)(DAT_000f0428 + 0xf03d4);
  android::CameraParameters::set((CameraParameters *)this,(char *)(DAT_000f0424 + 0xf03d6),pcVar3);
  android::CameraParameters::set((CameraParameters *)this,(char *)(DAT_000f042c + 0xf03e4),pcVar3);
  android::CameraParameters::set((CameraParameters *)this,(char *)(DAT_000f0430 + 0xf03f0),pcVar3);
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

