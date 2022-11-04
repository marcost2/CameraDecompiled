
/* qcamera::QCameraParameters::setContinuousISO(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setContinuousISO(QCameraParameters *this,QCameraParameters *param_1)

{
  char *pcVar1;
  int iVar2;
  char *__s2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  iVar4 = *(int *)(DAT_000eb434 + 0xeb3ac);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000eb43c + 0xeb3c6,0x1f9b,DAT_000eb438 + 0xeb3bc,pcVar1);
  }
  if ((pcVar1 == (char *)0x0) ||
     (iVar2 = strcmp(pcVar1,*(char **)(DAT_000eb440 + 0xeb3d0)), iVar2 == 0)) {
    pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if ((pcVar1 != (char *)0x0) &&
       ((__s2 == (char *)0x0 || (iVar4 = strcmp(pcVar1,__s2), iVar4 != 0)))) {
      uVar3 = (*(code *)PTR_setContinuousISO_0011a5c8)(this,pcVar1);
      return uVar3;
    }
  }
  else if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000eb448 + 0xeb3f0,0x1f9f,DAT_000eb444 + 0xeb3e8);
  }
  return 0;
}

