
/* qcamera::QCameraParameters::getExifDigitalZoom(rat_t*) */

void __thiscall
qcamera::QCameraParameters::getExifDigitalZoom(QCameraParameters *this,rat_t *param_1)

{
  char *__nptr;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *local_20;
  int local_1c;
  
  piVar6 = *(int **)(DAT_000f9f7c + 0xf9ec0);
  local_1c = *piVar6;
  __nptr = (char *)android::CameraParameters::get((char *)this);
  iVar1 = android::CameraParameters::getInt((char *)this);
  if (__nptr == (char *)0x0) {
    uVar2 = 1;
    uVar3 = 1;
  }
  else {
    uVar2 = strtol(__nptr,&local_20,10);
    uVar3 = uVar2;
    if (0 < iVar1) {
      do {
        uVar3 = strtol(local_20 + 1,&local_20,10);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  if ((int)(uVar3 | uVar2) < 0) {
    if (*(int *)(*(int *)(DAT_000f9f88 + 0xf9f2c) + 0x20) != 0) {
      uVar4 = 0x2f4f;
      iVar1 = DAT_000f9f8c + 0xf9f3c;
      iVar5 = DAT_000f9f90 + 0xf9f44;
LAB_000f9f60:
      mm_camera_debug_log(1,1,iVar5,uVar4,iVar1);
    }
  }
  else {
    if (param_1 != (rat_t *)0x0) {
      *(uint *)param_1 = uVar3;
      *(uint *)(param_1 + 4) = uVar2;
      uVar4 = 0;
      goto LAB_000f9f68;
    }
    if (*(int *)(*(int *)(DAT_000f9f94 + 0xf9f4a) + 0x20) != 0) {
      uVar4 = 0x2f53;
      iVar1 = DAT_000f9f98 + 0xf9f5a;
      iVar5 = DAT_000f9f9c + 0xf9f62;
      goto LAB_000f9f60;
    }
  }
  uVar4 = 0xffffffea;
LAB_000f9f68:
  if (*piVar6 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

