
/* qcamera::QCamera2HardwareInterface::getThumbnailSize(cam_dimension_t&) */

void __thiscall
qcamera::QCamera2HardwareInterface::getThumbnailSize
          (QCamera2HardwareInterface *this,cam_dimension_t *param_1)

{
  QCameraParametersIntf::getThumbnailSize
            ((QCameraParametersIntf *)(this + 0x4ac),(int *)param_1,(int *)(param_1 + 4));
  return;
}

