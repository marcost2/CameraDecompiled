
/* qcamera::QCameraParameters::setGpsLocation(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setGpsLocation(QCameraParameters *this,QCameraParameters *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(DAT_000e8120 + 0xe7fdc);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    android::CameraParameters::remove((CameraParameters *)this,pcVar2);
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,pcVar1);
  }
  pcVar2 = *(char **)(DAT_000e8124 + 0xe8000);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    android::CameraParameters::remove((CameraParameters *)this,pcVar2);
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,pcVar1);
  }
  pcVar2 = *(char **)(DAT_000e8128 + 0xe8024);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    android::CameraParameters::remove((CameraParameters *)this,pcVar2);
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,pcVar1);
  }
  pcVar2 = *(char **)(DAT_000e812c + 0xe8048);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    android::CameraParameters::remove((CameraParameters *)this,pcVar2);
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,pcVar1);
  }
  pcVar2 = *(char **)(DAT_000e8130 + 0xe806c);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    android::CameraParameters::remove((CameraParameters *)this,pcVar2);
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,pcVar1);
  }
  pcVar2 = *(char **)(DAT_000e8134 + 0xe8090);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    android::CameraParameters::remove((CameraParameters *)this,pcVar2);
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,pcVar1);
  }
  pcVar2 = *(char **)(DAT_000e8138 + 0xe80b4);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    android::CameraParameters::remove((CameraParameters *)this,pcVar2);
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,pcVar1);
  }
  pcVar2 = *(char **)(DAT_000e813c + 0xe80d8);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    android::CameraParameters::remove((CameraParameters *)this,pcVar2);
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,pcVar1);
  }
  pcVar2 = *(char **)(DAT_000e8140 + 0xe80fc);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 != (char *)0x0) {
    android::CameraParameters::set((CameraParameters *)this,pcVar2,pcVar1);
    return 0;
  }
  android::CameraParameters::remove((CameraParameters *)this,pcVar2);
  return 0;
}

