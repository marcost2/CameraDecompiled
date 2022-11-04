
/* qcamera::QCameraStream::bufDone(unsigned int) */

undefined4 __thiscall qcamera::QCameraStream::bufDone(QCameraStream *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < (byte)this[0x8c]) && (*(int *)(this + 0x118) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000d0d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(this + 0x6c) + 0x6c))
                      (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                       param_1 * 0x218 + *(int *)(this + 0x118));
    return uVar1;
  }
  return 0xffffffb5;
}

