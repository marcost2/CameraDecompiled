
/* qcamera::QCameraStream::putBufs(mm_camera_map_unmap_ops_tbl_t*) */

uint __thiscall
qcamera::QCameraStream::putBufs(QCameraStream *this,mm_camera_map_unmap_ops_tbl_t *param_1)

{
  MotMemThrottle *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
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
    iVar4 = *(int *)(DAT_000cf448 + 0xcf356);
    if (*(int *)(iVar4 + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000cf450 + 0xcf36e,0x8f8,DAT_000cf44c + 0xcf366);
    }
    pthread_join(*(pthread_t *)(this + 0x2e4),(void **)0x0);
    *(undefined4 *)(this + 0x2e4) = 0;
    if (*(int *)(iVar4 + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000cf458 + 0xcf398,0x8fb,DAT_000cf454 + 0xcf390);
    }
  }
  if (*(undefined4 **)(this + 0x10c) == (undefined4 *)0x0) {
    __android_log_print(6,DAT_000cf45c + 0xcf3fe,DAT_000cf460 + 0xcf400,DAT_000cf464 + 0xcf402);
    uVar3 = 0xffffffda;
  }
  else {
    iVar4 = (**(code **)**(undefined4 **)(this + 0x10c))();
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      iVar5 = 0;
      iVar6 = *(int *)(DAT_000cf468 + 0xcf3b2);
      iVar1 = DAT_000cf46c + 0xcf3b8;
      iVar2 = DAT_000cf470 + 0xcf3be;
      do {
        uVar3 = (**(code **)(param_1 + 8))(iVar5,0xffffffff,3,*(undefined4 *)(param_1 + 0xc));
        if ((0x7fffffff < uVar3) && (*(int *)(iVar6 + 0x20) != 0)) {
          mm_camera_debug_log(1,1,iVar2,0x908,iVar1,uVar3);
        }
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
    *(undefined4 *)(this + 0x118) = 0;
    __aeabi_memclr8(this + 0x120,0x188);
    if (this[0x2e0] == (QCameraStream)0x0) {
      (**(code **)(**(int **)(this + 0x10c) + 0xc))();
      if (*(int **)(this + 0x10c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
      }
      *(undefined4 *)(this + 0x10c) = 0;
    }
  }
  return uVar3;
}

