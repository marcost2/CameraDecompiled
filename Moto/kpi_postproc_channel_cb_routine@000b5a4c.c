
/* qcamera::QCamera2HardwareInterface::kpi_postproc_channel_cb_routine() */

void __thiscall
qcamera::QCamera2HardwareInterface::kpi_postproc_channel_cb_routine(QCamera2HardwareInterface *this)

{
  int iVar1;
  
  gettimeofday((timeval *)(this + 0x1f18),(__timezone_ptr_t)0x0);
  iVar1 = ((*(int *)(this + 0x1f1c) + (*(int *)(this + 0x1f18) - *(int *)(this + 0x1f10)) * 1000000)
          - *(int *)(this + 0x1f14)) / 1000;
  *(int *)(this + 0x1f3c) = iVar1;
  __android_log_print(3,DAT_000b5ab0 + 0xb5aa6,DAT_000b5ab4 + 0xb5aa8,DAT_000b5ab8 + 0xb5aaa,iVar1);
  return;
}

