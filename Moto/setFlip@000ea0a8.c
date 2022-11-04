
/* qcamera::QCameraParameters::setFlip(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setFlip(QCameraParameters *this,QCameraParameters *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  if ((int)((uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3000) << 0x1b) < 0) {
    pcVar4 = *(char **)(DAT_000ea240 + 0xea0ea);
    pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
    pcVar2 = (char *)android::CameraParameters::get((char *)this);
    if (((pcVar1 != (char *)0x0) &&
        ((pcVar2 == (char *)0x0 || (iVar3 = strcmp(pcVar1,pcVar2), iVar3 != 0)))) &&
       ((iVar3 = strcmp(*(char **)(DAT_000ea244 + 0xea112),pcVar1), iVar3 == 0 ||
        (((iVar3 = strcmp(*(char **)(DAT_000ea248 + 0xea120),pcVar1), iVar3 == 0 ||
          (iVar3 = strcmp(*(char **)(DAT_000ea274 + 0xea12e),pcVar1), iVar3 == 0)) ||
         (iVar3 = strcmp(*(char **)(DAT_000ea278 + 0xea13c),pcVar1), iVar3 == 0)))))) {
      android::CameraParameters::set((CameraParameters *)this,pcVar4,pcVar1);
      this[0x266] = (QCameraParameters)0x1;
    }
    pcVar4 = *(char **)(DAT_000ea24c + 0xea158);
    pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
    pcVar2 = (char *)android::CameraParameters::get((char *)this);
    if (((pcVar1 != (char *)0x0) &&
        ((pcVar2 == (char *)0x0 || (iVar3 = strcmp(pcVar1,pcVar2), iVar3 != 0)))) &&
       ((iVar3 = strcmp(*(char **)(DAT_000ea250 + 0xea180),pcVar1), iVar3 == 0 ||
        (((iVar3 = strcmp(*(char **)(DAT_000ea254 + 0xea18e),pcVar1), iVar3 == 0 ||
          (iVar3 = strcmp(*(char **)(DAT_000ea26c + 0xea19c),pcVar1), iVar3 == 0)) ||
         (iVar3 = strcmp(*(char **)(DAT_000ea270 + 0xea1aa),pcVar1), iVar3 == 0)))))) {
      android::CameraParameters::set((CameraParameters *)this,pcVar4,pcVar1);
      this[0x267] = (QCameraParameters)0x1;
    }
    pcVar4 = *(char **)(DAT_000ea258 + 0xea1c6);
    pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
    pcVar2 = (char *)android::CameraParameters::get((char *)this);
    if (((pcVar1 != (char *)0x0) &&
        ((pcVar2 == (char *)0x0 || (iVar3 = strcmp(pcVar1,pcVar2), iVar3 != 0)))) &&
       ((iVar3 = strcmp(*(char **)(DAT_000ea25c + 0xea1ee),pcVar1), iVar3 == 0 ||
        (((iVar3 = strcmp(*(char **)(DAT_000ea260 + 0xea1fc),pcVar1), iVar3 == 0 ||
          (iVar3 = strcmp(*(char **)(DAT_000ea264 + 0xea20a),pcVar1), iVar3 == 0)) ||
         (iVar3 = strcmp(*(char **)(DAT_000ea268 + 0xea218),pcVar1), iVar3 == 0)))))) {
      android::CameraParameters::set((CameraParameters *)this,pcVar4,pcVar1);
      this[0x268] = (QCameraParameters)0x1;
    }
  }
  else if (*(int *)(*(int *)(DAT_000ea234 + 0xea0c4) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000ea23c + 0xea0e0,0x14c8,DAT_000ea238 + 0xea0d8);
  }
  return 0;
}

