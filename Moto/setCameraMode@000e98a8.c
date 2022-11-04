
/* qcamera::QCameraParameters::setCameraMode(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setCameraMode(QCameraParameters *this,QCameraParameters *param_1)

{
  char *pcVar1;
  char *__filename;
  
  __filename = *(char **)(DAT_000e98d8 + 0xe98b2);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 != (char *)0x0) {
    android::CameraParameters::set((CameraParameters *)this,__filename,pcVar1);
    return 0;
  }
  android::CameraParameters::remove((CameraParameters *)this,__filename);
  return 0;
}

