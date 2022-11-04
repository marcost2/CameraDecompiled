
/* qcamera::QCameraGrallocMemory::setWindowInfo(preview_stream_ops*, int, int, int, int, int, int,
   int) */

void __thiscall
qcamera::QCameraGrallocMemory::setWindowInfo
          (QCameraGrallocMemory *this,preview_stream_ops *param_1,int param_2,int param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  
  iVar1 = (param_7 + 500) / 1000;
  if (iVar1 < 0x1f) {
    iVar1 = 0x1e;
  }
  *(int *)(this + 0x960) = param_3;
  *(int *)(this + 0x95c) = param_2;
  *(preview_stream_ops **)(this + 0x958) = param_1;
  *(int *)(this + 0x96c) = param_5;
  *(int *)(this + 0x968) = param_4;
  *(int *)(this + 0x970) = param_8;
  *(int *)(this + 0x964) = param_6;
  *(float *)(this + 0x974) = (float)(longlong)iVar1;
  if (*(int *)(*(int *)(DAT_000c70f0 + 0xc70d0) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c70f8 + 0xc70ea,0x75f,DAT_000c70f4 + 0xc70e0,iVar1);
  }
  return;
}

