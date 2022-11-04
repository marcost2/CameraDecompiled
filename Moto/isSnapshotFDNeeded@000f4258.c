
/* qcamera::QCameraParameters::isSnapshotFDNeeded() */

int __thiscall qcamera::QCameraParameters::isSnapshotFDNeeded(QCameraParameters *this)

{
  int iVar1;
  
  iVar1 = android::CameraParameters::getInt((char *)this);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}

