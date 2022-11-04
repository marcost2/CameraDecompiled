
/* qcamera::QCameraPicChannel::startAdvancedCapture(mm_camera_advanced_capture_t,
   cam_capture_frame_config_t*) */

void __thiscall
qcamera::QCameraPicChannel::startAdvancedCapture
          (QCameraPicChannel *this,mm_camera_advanced_capture_t param_1,
          cam_capture_frame_config_t *param_2)

{
  (**(code **)(*(int *)(this + 8) + 0x88))
            (*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10),param_1,1,param_2);
  return;
}

