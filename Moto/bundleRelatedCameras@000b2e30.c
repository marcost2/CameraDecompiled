
/* qcamera::QCamera2HardwareInterface::bundleRelatedCameras(bool, unsigned int) */

int __thiscall
qcamera::QCamera2HardwareInterface::bundleRelatedCameras
          (QCamera2HardwareInterface *this,bool param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000b2e98 + 0xb2e40);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000b2ea0 + 0xb2e5c,0xa15,DAT_000b2e9c + 0xb2e50,param_1,param_2);
  }
  iVar1 = QCameraParametersIntf::bundleRelatedCameras
                    ((QCameraParametersIntf *)(this + 0x4ac),param_1,param_2);
  iVar2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar3 + 0x20);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    mm_camera_debug_log(1,1,DAT_000b2ea8 + 0xb2e8e,0xa19,DAT_000b2ea4 + 0xb2e84,iVar1);
  }
  return iVar1;
}

