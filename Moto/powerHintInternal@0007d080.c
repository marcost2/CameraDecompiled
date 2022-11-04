
/* qcamera::QCameraPerfLock::powerHintInternal(power_hint_t, bool) */

void __thiscall
qcamera::QCameraPerfLock::powerHintInternal(QCameraPerfLock *this,power_hint_t param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1c);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 != false) {
                    /* WARNING: Could not recover jumptable at 0x0007d08e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x88))(iVar1,param_1,DAT_0007d09c + 0x7d090);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0007d096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x88))(iVar1,param_1,(int)&DAT_0007d098 + DAT_0007d098);
  return;
}

