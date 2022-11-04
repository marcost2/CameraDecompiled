
/* qcamera::QCamera2HardwareInterface::~QCamera2HardwareInterface() */

void __thiscall
qcamera::QCamera2HardwareInterface::_QCamera2HardwareInterface(QCamera2HardwareInterface *this)

{
  int iVar1;
  int __status;
  
  iVar1 = *(int *)(DAT_000b1d10 + 0xb1b5a);
  *(int *)(this + 0xc) = iVar1 + 0x54;
  *(int *)this = iVar1 + 8;
  *(int *)(this + 4) = iVar1 + 0x40;
  if (*(int *)(*(int *)(DAT_000b1d14 + 0xb1b7c) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b1d1c + 0xb1b98,0x8f1,DAT_000b1d18 + 0xb1b90);
  }
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x1d38),2,'\x01','\x01');
                    /* WARNING: Subroutine does not return */
  QCameraCmdThread::exit((QCameraCmdThread *)(this + 0x1d38),__status);
}

