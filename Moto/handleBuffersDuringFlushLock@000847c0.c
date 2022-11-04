
/* qcamera::QCamera3HardwareInterface::handleBuffersDuringFlushLock(camera3_stream_buffer*) */

void __thiscall
qcamera::QCamera3HardwareInterface::handleBuffersDuringFlushLock
          (QCamera3HardwareInterface *this,camera3_stream_buffer *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(this + 0x270))[7];
  do {
    if (puVar1 == *(undefined4 **)(this + 0x270)) {
LAB_0008481e:
      if (*(int *)(this + 0x268) != 0) {
        return;
      }
      if (*(int *)(*(int *)(DAT_00084864 + 0x8482e) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008486c + 0x84846,0xc5c,DAT_00084868 + 0x8483e);
      }
      pthread_cond_signal((pthread_cond_t *)(this + 0x3f4));
      return;
    }
    iVar2 = puVar1[5];
    while (iVar2 = *(int *)(iVar2 + 0x10), iVar2 != puVar1[5]) {
      if (*(int *)(iVar2 + 4) == *(int *)(param_1 + 4)) {
        iVar2 = *(int *)(this + 0x268);
        *(int *)(this + 0x268) = iVar2 + -1;
        if (*(int *)(*(int *)(DAT_00084858 + 0x847fa) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_00084860 + 0x8481c,0xc51,DAT_0008485c + 0x84808,
                              *(undefined4 *)(param_1 + 4),*puVar1,iVar2 + -1);
        }
        goto LAB_0008481e;
      }
    }
    puVar1 = (undefined4 *)puVar1[7];
  } while( true );
}

