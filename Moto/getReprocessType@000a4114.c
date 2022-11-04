
/* qcamera::QCamera3PicChannel::getReprocessType() */

QCamera3PicChannel __thiscall
qcamera::QCamera3PicChannel::getReprocessType(QCamera3PicChannel *this)

{
  QCamera3PicChannel QVar1;
  
  if ((*(uint *)(this + 0x68) | *(uint *)(this + 0x6c)) == 0) {
    QVar1 = (QCamera3PicChannel)0x1;
  }
  else {
    QVar1 = this[0x318c];
  }
  if (*(int *)(*(int *)(DAT_000a4154 + 0xa4130) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000a415c + 0xa414a,0x10e5,DAT_000a4158 + 0xa4140,QVar1);
  }
  return QVar1;
}

