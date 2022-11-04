
/* qcamera::QCamera2HardwareInterface::kpi_jpeg_stream_cb_routine() */

void __thiscall
qcamera::QCamera2HardwareInterface::kpi_jpeg_stream_cb_routine(QCamera2HardwareInterface *this)

{
  int iVar1;
  
  gettimeofday((timeval *)(this + 0x1f20),(__timezone_ptr_t)0x0);
  iVar1 = QCameraParametersIntf::isHDREnabled((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar1 != 0) {
    *(int *)(this + 8000) =
         ((*(int *)(this + 0x1f14) + (*(int *)(this + 0x1f10) - *(int *)(this + 0x1f08)) * 1000000)
         - *(int *)(this + 0x1f0c)) / 1000;
  }
  __android_log_print(3,DAT_000b59a4 + 0xb5998,DAT_000b59a8 + 0xb599a,DAT_000b59ac + 0xb599c,
                      *(undefined4 *)(this + 0x1f38));
  return;
}

