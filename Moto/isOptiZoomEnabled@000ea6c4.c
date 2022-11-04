
/* qcamera::QCameraParameters::isOptiZoomEnabled() */

undefined4 __thiscall qcamera::QCameraParameters::isOptiZoomEnabled(QCameraParameters *this)

{
  byte bVar1;
  uint uVar2;
  
  if ((this[0x2cb] != (QCameraParameters)0x0) && (uVar2 = *(uint *)(this + 0x37c), -1 < (int)uVar2))
  {
    bVar1 = *(byte *)(*(int *)(this + 0x1d4) + 0x3856);
    if (*(int *)(*(int *)(DAT_000ea714 + 0xea6e6) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000ea71c + 0xea700,0x27c0,DAT_000ea718 + 0xea6f6,uVar2,(uint)bVar1
                         );
    }
    if (bVar1 <= uVar2) {
      return 1;
    }
  }
  return 0;
}

