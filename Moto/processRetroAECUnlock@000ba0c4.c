
/* qcamera::QCamera2HardwareInterface::processRetroAECUnlock() */

int __thiscall
qcamera::QCamera2HardwareInterface::processRetroAECUnlock(QCamera2HardwareInterface *this)

{
  int iVar1;
  QCameraParametersIntf *this_00;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000ba170 + 0xba0d0);
  if (*(int *)(iVar2 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000ba178 + 0xba0e8,0x1ee8,DAT_000ba174 + 0xba0e0);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::forceInitBatchUpdate(this_00);
  if (iVar1 == 0) {
    iVar1 = QCameraParametersIntf::setAecLock(this_00,(char *)(DAT_000ba188 + 0xba114));
    if (iVar1 == 0) {
      iVar1 = QCameraParametersIntf::commitParameters();
      if (iVar1 == 0) {
        iVar1 = 0;
        this[0x9db] = (QCamera2HardwareInterface)0x0;
      }
      else if (*(int *)(iVar2 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000ba198 + 0xba164,0x1efb,DAT_000ba194 + 0xba15c);
      }
    }
    else {
      if (*(int *)(iVar2 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000ba190 + 0xba132,0x1ef2,DAT_000ba18c + 0xba12a);
      }
      QCameraParametersIntf::cancelParameterChanges(this_00);
    }
  }
  else {
    __android_log_print(6,DAT_000ba17c + 0xba104,DAT_000ba180 + 0xba106,DAT_000ba184 + 0xba108);
  }
  return iVar1;
}

