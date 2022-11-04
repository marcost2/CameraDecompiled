
/* qcamera::QCameraCbNotifier::setJpegCallBacks(void (*)(int, camera_memory const*, unsigned int,
   camera_frame_metadata*, void*, unsigned int, void (*)(void*, void*, int), void*, void*), void*)
    */

void __thiscall
qcamera::QCameraCbNotifier::setJpegCallBacks
          (QCameraCbNotifier *this,FuncDef113 *param_1,void *param_2)

{
  if (*(int *)(*(int *)(DAT_000ddb9c + 0xddb78) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000ddba4 + 0xddb90,0xf68,DAT_000ddba0 + 0xddb88);
  }
  *(FuncDef113 **)(this + 0x14) = param_1;
  *(void **)(this + 0x18) = param_2;
  return;
}

