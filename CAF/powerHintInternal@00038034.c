
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
                    /* WARNING: Could not recover jumptable at 0x00038042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x88))(iVar1,param_1,DAT_00038050 + 0x38044);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0003804a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x88))(iVar1,param_1,(int)&DAT_0003804c + DAT_0003804c);
  return;
}

