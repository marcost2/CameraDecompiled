
/* qcamera::QCamera2HardwareInterface::kpi_capture_channel_cb_routine() */

void __thiscall
qcamera::QCamera2HardwareInterface::kpi_capture_channel_cb_routine(QCamera2HardwareInterface *this)

{
  int iVar1;
  
  gettimeofday((timeval *)(this + 0x1f10),(__timezone_ptr_t)0x0);
  iVar1 = ((*(int *)(this + 0x1f14) + (*(int *)(this + 0x1f10) - *(int *)(this + 0x1f08)) * 1000000)
          - *(int *)(this + 0x1f0c)) / 1000;
  *(int *)(this + 0x1f38) = iVar1;
  __android_log_print(3,DAT_000b5a40 + 0xb5a36,DAT_000b5a44 + 0xb5a38,DAT_000b5a48 + 0xb5a3a,iVar1);
  return;
}

