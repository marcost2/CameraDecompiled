
/* qcamera::MotSmoothZoom::appCb(int, bool) */

void qcamera::MotSmoothZoom::appCb(int param_1,bool param_2)

{
  int in_r2;
  
  if (-1 < (int)((uint)(byte)(*(QCamera2HardwareInterface **)(param_1 + 0x24))[0x4b4] << 0x1c)) {
    return;
  }
  QCamera2HardwareInterface::sendEvtNotify
            (*(QCamera2HardwareInterface **)(param_1 + 0x24),8,(uint)param_2,in_r2);
  return;
}

