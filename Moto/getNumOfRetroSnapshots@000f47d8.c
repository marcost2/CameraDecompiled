
/* qcamera::QCameraParameters::getNumOfRetroSnapshots() */

uint __thiscall qcamera::QCameraParameters::getNumOfRetroSnapshots(QCameraParameters *this)

{
  uint uVar1;
  
  uVar1 = android::CameraParameters::getInt((char *)this);
  uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
  if (*(int *)(*(int *)(DAT_000f4818 + 0xf47f0) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f4820 + 0xf480a,0x2e28,DAT_000f481c + 0xf4800,uVar1);
  }
  return uVar1 & 0xff;
}

