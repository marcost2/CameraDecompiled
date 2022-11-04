
/* qcamera::QCameraChannel::setStreamSyncCB(cam_stream_type_t, void (*)(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*)) */

undefined4 __thiscall
qcamera::QCameraChannel::setStreamSyncCB
          (QCameraChannel *this,cam_stream_type_t param_1,FuncDef103 *param_2)

{
  QCameraStream *this_00;
  cam_stream_type_t cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(this + 0x1c);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      this_00 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar4 * 4);
      if (this_00 != (QCameraStream *)0x0) {
        cVar1 = QCameraStream::getMyType(this_00);
        if (cVar1 == param_1) {
          uVar2 = (*(code *)PTR_setSyncDataCB_0011a100)
                            (*(undefined4 *)(*(int *)(this + 0x18) + uVar4 * 4),param_2);
          return uVar2;
        }
        uVar3 = *(uint *)(this + 0x1c);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 0x80000000;
}

