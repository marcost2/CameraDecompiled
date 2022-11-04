
/* qcamera::QCameraChannel::stop() */

undefined4 __thiscall qcamera::QCameraChannel::stop(QCameraChannel *this)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (this[0xc] != (QCameraChannel)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x30));
    if (*(int *)(this + 0x1c) != 0) {
      uVar3 = 0;
      do {
        piVar1 = *(int **)(*(int *)(this + 0x18) + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          if (*(int *)(this + 0x10) == piVar1[0x19]) {
            (**(code **)(*piVar1 + 0x20))();
            uVar3 = uVar3 + 1;
          }
          else {
            android::VectorImpl::removeItemsAt((uint)(this + 0x14),uVar3);
          }
        }
      } while (uVar3 < *(uint *)(this + 0x1c));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x30));
    uVar2 = (**(code **)(*(int *)(this + 8) + 0x68))
                      (*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10));
    this[0xc] = (QCameraChannel)0x0;
    return uVar2;
  }
  return 0xffffffed;
}

