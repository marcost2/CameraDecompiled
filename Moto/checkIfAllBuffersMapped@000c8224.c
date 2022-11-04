
/* qcamera::QCameraGrallocMemory::checkIfAllBuffersMapped() const */

uint __thiscall qcamera::QCameraGrallocMemory::checkIfAllBuffersMapped(QCameraGrallocMemory *this)

{
  uint uVar1;
  
  if (*(int *)(*(int *)(DAT_000c8268 + 0xc8230) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c8270 + 0xc8252,0x9d9,DAT_000c826c + 0xc8244,this[5],this[0xa88])
    ;
  }
  uVar1 = count_leading_zeroes((uint)(byte)this[5] - (uint)(byte)this[0xa88]);
  return uVar1 >> 5;
}

