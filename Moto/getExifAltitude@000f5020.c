
/* qcamera::QCameraParameters::getExifAltitude(rat_t*, char*) */

undefined4 __thiscall
qcamera::QCameraParameters::getExifAltitude(QCameraParameters *this,rat_t *param_1,char *param_2)

{
  char *__nptr;
  int iVar1;
  undefined4 extraout_r1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  
  __nptr = (char *)android::CameraParameters::get((char *)this);
  if (__nptr != (char *)0x0) {
    atof(__nptr);
    dVar4 = (double)CONCAT44(extraout_r1,__nptr);
    *param_2 = '\0';
    if ((int)((uint)(dVar4 < 0.0) << 0x1f) < 0) {
      dVar4 = 0.0 - dVar4;
      *param_2 = '\x01';
    }
    iVar1 = SUB84(ROUND(dVar4 * DAT_000f50c0),0);
    if (iVar1 < 0) {
      if (*(int *)(*(int *)(DAT_000f50cc + 0xf5080) + 0x20) == 0) {
        return 0xffffffea;
      }
      uVar3 = 0x2f4f;
      iVar1 = DAT_000f50d0 + 0xf5090;
      iVar2 = DAT_000f50d4 + 0xf5098;
    }
    else {
      if (param_1 != (rat_t *)0x0) {
        *(int *)param_1 = iVar1;
        *(undefined4 *)(param_1 + 4) = 1000;
        return 0;
      }
      if (*(int *)(*(int *)(DAT_000f50d8 + 0xf509e) + 0x20) == 0) {
        return 0xffffffea;
      }
      uVar3 = 0x2f53;
      iVar1 = DAT_000f50dc + 0xf50ae;
      iVar2 = DAT_000f50e0 + 0xf50b6;
    }
    mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
  }
  return 0xffffffea;
}

