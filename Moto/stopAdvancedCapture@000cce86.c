
/* qcamera::QCameraPicChannel::stopAdvancedCapture(mm_camera_advanced_capture_t) */

void __thiscall
qcamera::QCameraPicChannel::stopAdvancedCapture
          (QCameraPicChannel *this,mm_camera_advanced_capture_t param_1)

{
  (**(code **)(*(int *)(this + 8) + 0x88))
            (*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10),param_1,0,0);
  return;
}

