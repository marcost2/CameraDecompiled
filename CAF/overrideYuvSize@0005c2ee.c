
/* qcamera::QCamera3PicChannel::overrideYuvSize(unsigned int, unsigned int) */

void __thiscall
qcamera::QCamera3PicChannel::overrideYuvSize(QCamera3PicChannel *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x2ee8) = param_2;
  *(uint *)(this + 0x2ee4) = param_1;
  return;
}

