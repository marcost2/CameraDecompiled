
/* qcamera::QCameraStream::releaseBuffs() */

uint __thiscall qcamera::QCameraStream::releaseBuffs(QCameraStream *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  MotMemThrottle *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(this + 0x2e4) != 0) {
    if (this[0x10085] == (QCameraStream)0x0) {
      this[0x10085] = (QCameraStream)0x1;
      if ((*(QCameraMemory **)(this + 0x10c) != (QCameraMemory *)0x0) &&
         (this_00 = (MotMemThrottle *)QCameraMemory::getThrottle(*(QCameraMemory **)(this + 0x10c)),
         this_00 != (MotMemThrottle *)0x0)) {
        MotMemThrottle::cancel(this_00);
      }
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x10064));
    if (this[0x10061] != (QCameraStream)0x0) {
      this[0x10061] = (QCameraStream)0x0;
      this[0x8e] = (QCameraStream)0x0;
      pthread_cond_signal((pthread_cond_t *)(this + 0x10068));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10064));
    iVar4 = *(int *)(DAT_000d1a2c + 0xd1904);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000d1a34 + 0xd191c,0x7a2,DAT_000d1a30 + 0xd1914);
    }
    pthread_join(*(pthread_t *)(this + 0x2e4),(void **)0x0);
    *(undefined4 *)(this + 0x2e4) = 0;
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000d1a3c + 0xd1946,0x7a5,DAT_000d1a38 + 0xd193e);
    }
  }
  if (*(int *)(*(int *)(this + 0x70) + 0x1a0) != 2) {
    if ((*(int *)(this + 0x118) == 0) || (*(undefined4 **)(this + 0x10c) == (undefined4 *)0x0)) {
      uVar3 = 0;
    }
    else {
      iVar4 = (**(code **)**(undefined4 **)(this + 0x10c))();
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        iVar5 = 0;
        iVar6 = *(int *)(DAT_000d1a40 + 0xd1982);
        iVar1 = DAT_000d1a44 + 0xd198a;
        iVar2 = DAT_000d1a48 + 0xd1990;
        do {
          uVar3 = (**(code **)(*(int *)(this + 0x6c) + 0x58))
                            (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                             *(undefined4 *)(this + 0x68),3,iVar5,0xffffffff);
          if ((0x7fffffff < uVar3) && (*(int *)(iVar6 + 0x20) != 0)) {
            mm_camera_debug_log(1,1,iVar2,0x7b1,iVar1,uVar3);
          }
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      *(undefined4 *)(this + 0x118) = 0;
      __aeabi_memclr8(this + 0x120,0x188);
    }
    if ((this[0x2e0] == (QCameraStream)0x0) && (*(int **)(this + 0x10c) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 0x10c) + 0xc))();
      if (*(int **)(this + 0x10c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
      }
      *(undefined4 *)(this + 0x10c) = 0;
    }
    return uVar3;
  }
  uVar3 = (*(code *)PTR_releaseBatchBufs_0011a164)(this,0);
  return uVar3;
}

