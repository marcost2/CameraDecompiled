
/* qcamera::QCamera3HardwareInterface::notifyError(unsigned int, camera3_error_msg_code) */

void __thiscall
qcamera::QCamera3HardwareInterface::notifyError
          (QCamera3HardwareInterface *this,uint param_1,camera3_error_msg_code param_2)

{
  int *piVar1;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 uStack40;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  
  piVar1 = *(int **)(DAT_00040ee0 + 0x40e9e);
  local_14 = *piVar1;
  uStack40 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30 = (ulonglong)param_2;
  local_40 = 1;
  local_38 = (ulonglong)param_1;
  orchestrateNotify(this,(camera3_notify_msg *)&local_40);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

