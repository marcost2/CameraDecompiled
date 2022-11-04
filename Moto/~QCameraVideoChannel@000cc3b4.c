
/* qcamera::QCameraVideoChannel::~QCameraVideoChannel() */

QCameraVideoChannel * __thiscall
qcamera::QCameraVideoChannel::_QCameraVideoChannel(QCameraVideoChannel *this)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  *(int *)this = *(int *)(DAT_000cc42c + 0xcc3be) + 8;
  if (this[0xc] != (QCameraVideoChannel)0x0) {
    QCameraChannel::stop((QCameraChannel *)this);
  }
  uVar2 = *(uint *)(this + 0x1c);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(this + 0x18) + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        if (*(int *)(this + 0x10) == piVar1[0x19]) {
          (**(code **)(*piVar1 + 4))();
          uVar2 = *(uint *)(this + 0x1c);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  android::VectorImpl::clear();
  (**(code **)(*(int *)(this + 8) + 0x38))(*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10));
  *(undefined4 *)(this + 0x10) = 0;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x30));
  *(int *)(this + 0x14) = *(int *)(DAT_000cc430 + 0xcc416) + 8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(this + 0x14));
  return this;
}

