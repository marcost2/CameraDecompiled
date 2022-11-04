
/* qcamera::QCameraChannel::deleteChannel() */

void __thiscall qcamera::QCameraChannel::deleteChannel(QCameraChannel *this)

{
  QCameraStream *this_00;
  uint uVar1;
  uint uVar2;
  
  if (this[0xc] != (QCameraChannel)0x0) {
    (**(code **)(*(int *)this + 0x18))(this);
  }
  uVar1 = *(uint *)(this + 0x1c);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      this_00 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar2 * 4);
      if ((this_00 != (QCameraStream *)0x0) && (*(int *)(this + 0x10) == *(int *)(this_00 + 100))) {
        QCameraStream::deleteStream(this_00);
        uVar1 = *(uint *)(this + 0x1c);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000cc4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(this + 8) + 0x38))(*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10));
  return;
}

