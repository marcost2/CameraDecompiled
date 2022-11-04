
/* qcamera::QCamera3GrallocMemory::unregisterBuffers() */

void __thiscall qcamera::QCamera3GrallocMemory::unregisterBuffers(QCamera3GrallocMemory *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  iVar3 = *(int *)(DAT_0009a958 + 0x9a8ec);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0009a95c + 0x9a8fe,0x3b7,DAT_0009a960 + 0x9a900,
                        DAT_0009a95c + 0x9a8fe);
  }
  uVar2 = *(uint *)(this + 0x80c);
  if (uVar2 < 0x40) {
    piVar1 = (int *)(this + uVar2 * 0x10);
    do {
      piVar1 = piVar1 + 4;
      if (*piVar1 != 0) {
        unregisterBufferLocked(this,uVar2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x40);
  }
  *(undefined4 *)(this + 4) = 0;
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0009a964 + 0x9a942,0x3c4,DAT_0009a968 + 0x9a944,
                        DAT_0009a964 + 0x9a942);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return;
}

