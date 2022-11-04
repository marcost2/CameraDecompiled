
/* qcamera::QCamera2HardwareInterface::msgTypeEnabled(int) */

uint __thiscall
qcamera::QCamera2HardwareInterface::msgTypeEnabled(QCamera2HardwareInterface *this,int param_1)

{
  return *(uint *)(this + 0x4b4) & param_1;
}

