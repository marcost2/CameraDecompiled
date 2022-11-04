
/* qcamera::QCameraParameters::setSceneSelectionMode(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setSceneSelectionMode
          (QCameraParameters *this,QCameraParameters *param_1)

{
  bool bVar1;
  char *__s1;
  char *__s2;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(DAT_000e99e0 + 0xe98ea);
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s1 == (char *)0x0) {
    return 0;
  }
  if ((__s2 != (char *)0x0) && (iVar2 = strcmp(__s1,__s2), iVar2 == 0)) {
    return 0;
  }
  iVar2 = strcmp(*(char **)(DAT_000e99e4 + 0xe9916),__s1);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = strcmp(*(char **)(DAT_000e99e8 + 0xe9924),__s1);
    if (iVar2 != 0) {
      if (*(int *)(*(int *)(DAT_000e9a00 + 0xe9930) + 0x20) == 0) {
        return 0xffffffea;
      }
      uVar4 = 0x1417;
      iVar2 = DAT_000e9a04 + 0xe9940;
      iVar3 = DAT_000e9a08 + 0xe994a;
      goto LAB_000e9948;
    }
    bVar1 = true;
  }
  iVar2 = *(int *)(DAT_000e99ec + 0xe9966);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e99f4 + 0xe9980,0x1408,DAT_000e99f0 + 0xe9976,__s1);
  }
  if (bVar1) {
    updateParamEntry(this,pcVar5,__s1);
    this[0x2cc] = (QCameraParameters)0x0;
    this[0x230] = (QCameraParameters)0x1;
    return 0;
  }
  if (this[0x211] != (QCameraParameters)0x0) {
    updateParamEntry(this,pcVar5,__s1);
    this[0x2cc] = (QCameraParameters)0x1;
    this[0x230] = (QCameraParameters)0x1;
    return 0;
  }
  if (*(int *)(iVar2 + 0x20) == 0) {
    return 0xffffffea;
  }
  uVar4 = 0x1412;
  iVar2 = DAT_000e99f8 + 0xe99d8;
  iVar3 = (int)&DAT_000e99e0 + DAT_000e99fc;
LAB_000e9948:
  mm_camera_debug_log(1,1,iVar3,uVar4,iVar2);
  return 0xffffffea;
}

