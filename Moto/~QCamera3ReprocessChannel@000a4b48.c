
/* qcamera::QCamera3ReprocessChannel::~QCamera3ReprocessChannel() */

QCamera3ReprocessChannel * __thiscall
qcamera::QCamera3ReprocessChannel::_QCamera3ReprocessChannel(QCamera3ReprocessChannel *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  
  *(int *)this = *(int *)(DAT_000a4d74 + 0xa4b54) + 8;
  if (this[0x50] != (QCamera3ReprocessChannel)0x0) {
    puVar4 = *(uint **)(DAT_000a4d78 + 0xa4b64);
    if (1 < *puVar4) {
      if ((**(byte **)(DAT_000a4d7c + 0xa4b70) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000a4d80 + 0xa4b80) + 1) << 0x1d) < 0) {
        atrace_begin_body(DAT_000a4d84 + 0xa4d62);
      }
    }
    QCamera3Channel::stop((QCamera3Channel *)this);
    (**(code **)(*(int *)(this + 0x4c) + 0x68))
              (*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x54));
    unmapOfflineBuffers(this,true);
    if (1 < *puVar4) {
      if ((**(byte **)(DAT_000a4d88 + 0xa4bac) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000a4d8c + 0xa4bbc) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
  }
  uVar2 = *(uint *)(this + 0x44);
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (*(int **)(this + uVar7 * 4 + 0x24) != (int *)0x0) {
        (**(code **)(**(int **)(this + uVar7 * 4 + 0x24) + 4))();
        *(undefined4 *)(this + uVar7 * 4 + 0x24) = 0;
        uVar2 = *(uint *)(this + 0x44);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  *(undefined4 *)(this + 0x44) = 0;
  if (*(int *)(this + 0x54) != 0) {
    (**(code **)(*(int *)(this + 0x4c) + 0x38))(*(undefined4 *)(this + 0x48));
    if (*(int *)(*(int *)(DAT_000a4d90 + 0xa4bfe) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a4d98 + 0xa4c1a,0x1292,DAT_000a4d94 + 0xa4c0e,
                          *(undefined4 *)(this + 0x54));
    }
    *(undefined4 *)(this + 0x54) = 0;
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xf4c));
  *(int *)(this + 0xf38) = *(int *)(DAT_000a4d9c + 0xa4c32) + 8;
  android::VectorImpl::finish_vector();
  android::VectorImpl::_VectorImpl((VectorImpl *)(this + 0xf38));
  QCamera3StreamMem::_QCamera3StreamMem((QCamera3StreamMem *)(this + 0x108));
  iVar5 = *(int *)(DAT_000a4da0 + 0xa4c52) + 8;
  *(int *)(this + 0xcc) = iVar5;
  pvVar3 = *(void **)(this + 0xd0);
  pvVar1 = *(void **)((int)pvVar3 + 8);
  pvVar6 = pvVar3;
  if (*(void **)((int)pvVar3 + 8) != pvVar3) {
    do {
      pvVar6 = *(void **)((int)pvVar1 + 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar3 = *(void **)(this + 0xd0);
      }
      pvVar1 = pvVar6;
    } while (pvVar6 != pvVar3);
  }
  *(void **)((int)pvVar6 + 4) = pvVar6;
  *(int *)(*(int *)(this + 0xd0) + 8) = *(int *)(this + 0xd0);
  if (*(void **)(this + 0xd0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd0));
  }
  *(int *)(this + 0xc4) = iVar5;
  pvVar3 = *(void **)(this + 200);
  pvVar1 = *(void **)((int)pvVar3 + 8);
  pvVar6 = pvVar3;
  if (*(void **)((int)pvVar3 + 8) != pvVar3) {
    do {
      pvVar6 = *(void **)((int)pvVar1 + 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar3 = *(void **)(this + 200);
      }
      pvVar1 = pvVar6;
    } while (pvVar6 != pvVar3);
  }
  *(void **)((int)pvVar6 + 4) = pvVar6;
  *(int *)(*(int *)(this + 200) + 8) = *(int *)(this + 200);
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete__(*(void **)(this + 200));
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xc0));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xac));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0xa8));
  iVar5 = *(int *)(DAT_000a4da4 + 0xa4ce0) + 8;
  *(int *)(this + 0xa0) = iVar5;
  pvVar3 = *(void **)(this + 0xa4);
  pvVar1 = *(void **)((int)pvVar3 + 0x10);
  pvVar6 = pvVar3;
  if (*(void **)((int)pvVar3 + 0x10) != pvVar3) {
    do {
      pvVar6 = *(void **)((int)pvVar1 + 0x10);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar3 = *(void **)(this + 0xa4);
      }
      pvVar1 = pvVar6;
    } while (pvVar6 != pvVar3);
  }
  *(void **)((int)pvVar6 + 0xc) = pvVar6;
  *(int *)(*(int *)(this + 0xa4) + 0x10) = *(int *)(this + 0xa4);
  if (*(void **)(this + 0xa4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xa4));
  }
  *(int *)(this + 0x98) = iVar5;
  pvVar3 = *(void **)(this + 0x9c);
  pvVar1 = *(void **)((int)pvVar3 + 0x10);
  pvVar6 = pvVar3;
  if (*(void **)((int)pvVar3 + 0x10) != pvVar3) {
    do {
      pvVar6 = *(void **)((int)pvVar1 + 0x10);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar3 = *(void **)(this + 0x9c);
      }
      pvVar1 = pvVar6;
    } while (pvVar6 != pvVar3);
  }
  *(void **)((int)pvVar6 + 0xc) = pvVar6;
  *(int *)(*(int *)(this + 0x9c) + 0x10) = *(int *)(this + 0x9c);
  if (*(void **)(this + 0x9c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x9c));
  }
  return this;
}

