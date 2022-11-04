
/* qcamera::QCamera2HardwareInterface::sendEvtNotify(int, int, int) */

void __thiscall
qcamera::QCamera2HardwareInterface::sendEvtNotify
          (QCamera2HardwareInterface *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined8 uStack40;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  
  piVar1 = *(int **)(DAT_000b4a58 + 0xb4a14);
  local_14 = *piVar1;
  local_30 = 0;
  uStack40 = 0;
  local_40 = 0;
  uStack56 = 0;
  local_1c = 0;
  local_20 = 0;
  local_50 = (ulonglong)(uint)param_1 << 0x20;
  uStack72 = CONCAT44(param_3,param_2);
  QCameraCbNotifier::notifyCallback
            ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_50);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

