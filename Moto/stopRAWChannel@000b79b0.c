
/* qcamera::QCamera2HardwareInterface::stopRAWChannel() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::stopRAWChannel(QCamera2HardwareInterface *this)

{
  undefined4 uVar1;
  
  if (*(int **)(this + 0x9c8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000b79ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(this + 0x9c8) + 0x18))();
    return uVar1;
  }
  return 0x80000000;
}

