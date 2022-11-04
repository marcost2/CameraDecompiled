
/* qcamera::QCamera2HardwareInterface::delChannel(qcamera::qcamera_ch_type_enum_t, bool) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::delChannel
          (QCamera2HardwareInterface *this,qcamera_ch_type_enum_t param_1,bool param_2)

{
  int *this_00;
  
  this_00 = *(int **)(this + param_1 * 4 + 0x9b4);
  if (this_00 != (int *)0x0) {
    if (param_2 != false) {
      (**(code **)(*this_00 + 4))();
      *(undefined4 *)(this + param_1 * 4 + 0x9b4) = 0;
      return 0;
    }
    QCameraChannel::deleteChannel((QCameraChannel *)this_00);
  }
  return 0;
}

