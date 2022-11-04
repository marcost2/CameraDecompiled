
/* qcamera::QCamera2HardwareInterface::setCallBacks(void (*)(int, int, int, void*), void (*)(int,
   camera_memory const*, unsigned int, camera_frame_metadata*, void*), void (*)(long long, int,
   camera_memory const*, unsigned int, void*), camera_memory* (*)(int, unsigned int, unsigned int,
   void*), void*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setCallBacks
          (QCamera2HardwareInterface *this,FuncDef84 *param_1,FuncDef85 *param_2,FuncDef86 *param_3,
          FuncDef87 *param_4,void *param_5)

{
  *(FuncDef86 **)(this + 0x4c4) = param_3;
  *(FuncDef85 **)(this + 0x4c0) = param_2;
  *(FuncDef84 **)(this + 0x4bc) = param_1;
  *(void **)(this + 0x4d0) = param_5;
  *(FuncDef87 **)(this + 0x4c8) = param_4;
  QCameraCbNotifier::setCallbacks
            ((QCameraCbNotifier *)(this + 0x854),(FuncDef109 *)param_1,(FuncDef110 *)param_2,
             (FuncDef111 *)param_3,param_5);
  return 0;
}

