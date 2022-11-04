
/* qcamera::QCamera2HardwareInterface::captureDone() */

void __thiscall qcamera::QCamera2HardwareInterface::captureDone(QCamera2HardwareInterface *this)

{
  undefined4 *__ptr;
  int iVar1;
  
  __ptr = (undefined4 *)malloc(0x1118);
  if (__ptr == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_000b80d0 + 0xb80a4) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b80d8 + 0xb80bc,0x1928,DAT_000b80d4 + 0xb80b4);
    }
  }
  else {
    __aeabi_memclr8(__ptr + 1,0x1114);
    *__ptr = 0xd;
    iVar1 = QCameraStateMachine::procEvt((QCameraStateMachine *)(this + 0x4dc),0x21,__ptr);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(DAT_000b80c4 + 0xb8078) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000b80cc + 0xb8090,0x1923,DAT_000b80c8 + 0xb8088);
      }
      free(__ptr);
      return;
    }
  }
  return;
}

