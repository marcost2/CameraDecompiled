
/* qcamera::QCameraMuxer::getLogicalCamera(camera_device*) */

undefined4 __thiscall
qcamera::QCameraMuxer::getLogicalCamera(QCameraMuxer *this,camera_device *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (camera_device *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
  }
  return uVar1;
}

