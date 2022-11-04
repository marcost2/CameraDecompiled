
/* qcamera::QCamera2HardwareInterface::kpi_preview_stream_cb_routine() */

void __thiscall
qcamera::QCamera2HardwareInterface::kpi_preview_stream_cb_routine(QCamera2HardwareInterface *this)

{
  int iVar1;
  
  if (this[0x1f44] != (QCamera2HardwareInterface)0x0) {
    gettimeofday((timeval *)(this + 0x1ed8),(__timezone_ptr_t)0x0);
    iVar1 = ((*(int *)(this + 0x1edc) +
             (*(int *)(this + 0x1ed8) - *(int *)(this + 0x1ed0)) * 1000000) -
            *(int *)(this + 0x1ed4)) / 1000;
    *(int *)(this + 0x1f28) = iVar1;
    this[0x1f44] = (QCamera2HardwareInterface)0x0;
    if (*(int *)(*(int *)(DAT_000b5b40 + 0xb5b1c) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b5b44 + 0xb5b2c,0x1356,DAT_000b5b48 + 0xb5b2e,
                          DAT_000b5b44 + 0xb5b2c,iVar1);
    }
  }
  return;
}

