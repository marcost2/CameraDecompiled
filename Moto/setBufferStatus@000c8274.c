
/* qcamera::QCameraGrallocMemory::setBufferStatus(unsigned int, qcamera::BufferStatus) */

void __thiscall
qcamera::QCameraGrallocMemory::setBufferStatus
          (QCameraGrallocMemory *this,uint param_1,BufferStatus param_2)

{
  if (param_1 < (byte)this[5]) {
    if (param_2 != 0) {
      param_2 = 1;
    }
    this[param_1 + 0x818] = SUB41(param_2,0);
  }
  else if (*(int *)(*(int *)(DAT_000c82b4 + 0xc828e) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000c82bc + 0xc82aa,0x9eb,DAT_000c82b8 + 0xc82a2);
    return;
  }
  return;
}

