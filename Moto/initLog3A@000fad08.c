
/* qcamera::QCameraParameters::initLog3A() */

void __thiscall qcamera::QCameraParameters::initLog3A(QCameraParameters *this)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  char acStack116 [92];
  int local_18;
  
  piVar4 = *(int **)(DAT_000fad90 + 0xfad14);
  local_18 = *piVar4;
  property_get(DAT_000fad98 + 0xfad28,acStack116,*(undefined4 *)(DAT_000fad94 + 0xfad1e));
  uVar1 = atoi(acStack116);
  *(uint *)(this + 0xd20) = uVar1;
  pcVar5 = *(char **)(DAT_000fad9c + 0xfad3e);
  pcVar3 = *(char **)(DAT_000fada0 + 0xfad44);
  pcVar2 = pcVar3;
  if ((uVar1 & 1) == 0) {
    pcVar2 = pcVar5;
  }
  android::CameraParameters::set((CameraParameters *)this,(char *)(DAT_000fada4 + 0xfad50),pcVar2);
  pcVar2 = pcVar3;
  if (-1 < *(int *)(this + 0xd20) << 0x1e) {
    pcVar2 = pcVar5;
  }
  android::CameraParameters::set((CameraParameters *)this,(char *)(DAT_000fada8 + 0xfad66),pcVar2);
  if (-1 < *(int *)(this + 0xd20) << 0x1d) {
    pcVar3 = pcVar5;
  }
  android::CameraParameters::set((CameraParameters *)this,(char *)(DAT_000fadac + 0xfad7c),pcVar3);
  if (*piVar4 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

