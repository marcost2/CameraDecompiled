
/* qcamera::QCameraMuxer::getPhysicalCamera(qcamera::qcamera_logical_descriptor_t*, unsigned int) */

int __thiscall
qcamera::QCameraMuxer::getPhysicalCamera
          (QCameraMuxer *this,qcamera_logical_descriptor_t *param_1,uint param_2)

{
  if (param_1 != (qcamera_logical_descriptor_t *)0x0) {
    return *(int *)(this + 0x2c) + *(int *)(param_1 + param_2 * 4 + 0x5c) * 0x38;
  }
  return 0;
}

