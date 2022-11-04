
/* qcamera::QCamera2HardwareInterface::allocateMiscBuf(cam_stream_info_t*) */

int * __thiscall
qcamera::QCamera2HardwareInterface::allocateMiscBuf
          (QCamera2HardwareInterface *this,cam_stream_info_t *param_1)

{
  int iVar1;
  int *this_00;
  int *piVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 4) == 9) {
    if (*(int *)(param_1 + 1000) << 0xc < 0) {
      iVar1 = QCameraParametersIntf::getTPMaxMetaSize((QCameraParametersIntf *)(this + 0x4ac));
    }
    else {
      if (-1 < *(int *)(param_1 + 1000) << 0xf) {
        return (int *)0x0;
      }
      iVar1 = QCameraParametersIntf::getRefocusMaxMetaSize((QCameraParametersIntf *)(this + 0x4ac));
    }
    if (iVar1 != 0) {
      this_00 = (int *)operator_new(0x718);
      piVar2 = (int *)QCameraHeapMemory::QCameraHeapMemory((QCameraHeapMemory *)this_00,true);
      uVar3 = (**(code **)(*piVar2 + 8))(this_00,1,iVar1,0);
      if (uVar3 < 0x80000000) {
        return this_00;
      }
      if (*(int *)(*(int *)(DAT_000b3bf4 + 0xb3bc8) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000b3bfc + 0xb3be0,0xe79,DAT_000b3bf8 + 0xb3bd8);
      }
      (**(code **)(*this_00 + 0x2c))(this_00);
    }
  }
  return (int *)0x0;
}

