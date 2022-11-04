
/* qcamera::QCamera3RegularChannel::getStreamTypeMask() */

int __thiscall qcamera::QCamera3RegularChannel::getStreamTypeMask(QCamera3RegularChannel *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x24) != 0) {
    iVar1 = QCamera3Channel::__ThumbV7PILongThunk__ZN7qcamera15QCamera3Channel17getStreamTypeMaskEv
                      ((QCamera3Channel *)this);
    return iVar1;
  }
  return 1 << (*(uint *)(this + 0x1240) & 0xff);
}

