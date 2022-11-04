
/* qcamera::QCameraGrallocMemory::setMaxFPS(int) */

void __thiscall qcamera::QCameraGrallocMemory::setMaxFPS(QCameraGrallocMemory *this,int param_1)

{
  int iVar1;
  
  iVar1 = (param_1 + 500) / 1000;
  if (iVar1 < 0x1f) {
    iVar1 = 0x1e;
  }
  *(float *)(this + 0x974) = (float)(longlong)iVar1;
  if (*(int *)(*(int *)(DAT_000c7154 + 0xc712e) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c715c + 0xc714c,0x75f,DAT_000c7158 + 0xc7140,iVar1);
    return;
  }
  return;
}

