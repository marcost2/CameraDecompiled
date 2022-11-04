
/* qcamera::QCameraParameters::getExifLatitude(rat_t*, char*) */

undefined4 __thiscall
qcamera::QCameraParameters::getExifLatitude(QCameraParameters *this,rat_t *param_1,char *param_2)

{
  char *pcVar1;
  float fVar2;
  char cVar3;
  
  pcVar1 = (char *)android::CameraParameters::get((char *)this);
  if (pcVar1 != (char *)0x0) {
    parseGPSCoordinate(this,pcVar1,param_1);
    fVar2 = (float)android::CameraParameters::getFloat((char *)this);
    cVar3 = 'N';
    param_2[1] = '\0';
    if ((int)((uint)(fVar2 < 0.0) << 0x1f) < 0) {
      cVar3 = 'S';
    }
    *param_2 = cVar3;
    return 0;
  }
  return 0xffffffea;
}

