
/* qcamera::QCameraCbNotifier::setCallbacks(void (*)(int, int, int, void*), void (*)(int,
   camera_memory const*, unsigned int, camera_frame_metadata*, void*), void (*)(long long, int,
   camera_memory const*, unsigned int, void*), void*) */

void __thiscall
qcamera::QCameraCbNotifier::setCallbacks
          (QCameraCbNotifier *this,FuncDef109 *param_1,FuncDef110 *param_2,FuncDef111 *param_3,
          void *param_4)

{
  if ((((*(int *)(this + 4) == 0) && (*(int *)(this + 8) == 0)) && (*(int *)(this + 0xc) == 0)) &&
     (*(int *)(this + 0x10) == 0)) {
    this[0x84] = (QCameraCbNotifier)0x1;
    *(FuncDef109 **)(this + 4) = param_1;
    *(FuncDef110 **)(this + 8) = param_2;
    *(FuncDef111 **)(this + 0xc) = param_3;
    *(void **)(this + 0x10) = param_4;
    QCameraCmdThread::launch
              ((QCameraCmdThread *)(this + 0x44),*(FuncDef57 **)(DAT_000ddb64 + 0xddb4a),this);
    return;
  }
  if (*(int *)(*(int *)(DAT_000ddb58 + 0xddb12) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000ddb60 + 0xddb2a,0xf54,DAT_000ddb5c + 0xddb22);
  }
  return;
}

