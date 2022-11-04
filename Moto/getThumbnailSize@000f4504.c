
/* qcamera::QCameraParameters::getThumbnailSize(int*, int*) const */

void __thiscall
qcamera::QCameraParameters::getThumbnailSize(QCameraParameters *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = android::CameraParameters::getInt((char *)this);
  *param_1 = iVar1;
  iVar1 = android::CameraParameters::getInt((char *)this);
  *param_2 = iVar1;
  return;
}

