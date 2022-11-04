
/* qcamera::QCamera2HardwareInterface::declareSnapshotStreams() */

int __thiscall
qcamera::QCamera2HardwareInterface::declareSnapshotStreams(QCamera2HardwareInterface *this)

{
  int iVar1;
  
  iVar1 = QCameraParametersIntf::setStreamConfigure
                    ((bool)((char)this + -0x54),true,(bool)this[0xa9e],(uint *)0x0);
  if (*(int *)(*(int *)(DAT_000b7ae4 + 0xb7ab8) + 0x20) != 0 && iVar1 != 0) {
    mm_camera_debug_log(1,1,DAT_000b7aec + 0xb7ad8,0x185e,DAT_000b7ae8 + 0xb7ace,iVar1);
  }
  return iVar1;
}

