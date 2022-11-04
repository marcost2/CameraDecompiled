
/* qcamera::QCamera3ProcessingChannel::initialize(cam_is_type_t) */

int qcamera::QCamera3ProcessingChannel::initialize(cam_is_type_t param_1)

{
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  void **ppvVar7;
  
  ppvVar7 = (void **)(param_1 + 0x3160);
  iVar1 = QCamera3StreamMem::allocateAll
                    ((QCamera3StreamMem *)(param_1 + 0x232c),(uint)&PTR_bufDone_00117af8);
  if (iVar1 == 0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3164));
    pvVar3 = *ppvVar7;
    pvVar4 = *(void **)((int)pvVar3 + 8);
    pvVar5 = pvVar3;
    if (*(void **)((int)pvVar3 + 8) != pvVar3) {
      do {
        pvVar5 = *(void **)((int)pvVar4 + 8);
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
          pvVar3 = *ppvVar7;
        }
        pvVar4 = pvVar5;
      } while (pvVar5 != pvVar3);
    }
    *(void **)((int)pvVar5 + 4) = pvVar5;
    *(void **)((int)*ppvVar7 + 8) = *ppvVar7;
    if (*(int *)(param_1 + 0x78) != -1) {
      uVar6 = 0;
      do {
        pvVar4 = *ppvVar7;
        puVar2 = (uint *)operator_new(0xc);
        puVar2[2] = (uint)pvVar4;
        *puVar2 = uVar6;
        uVar6 = uVar6 + 1;
        puVar2[1] = *(uint *)((int)pvVar4 + 4);
        *(uint **)(*(int *)((int)pvVar4 + 4) + 8) = puVar2;
        *(uint **)((int)pvVar4 + 4) = puVar2;
      } while (uVar6 < *(int *)(param_1 + 0x78) + 1U);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3164));
  }
  else if (*(int *)(*(int *)(DAT_0009f568 + 0x9f4c2) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_0009f570 + 0x9f4da,0x4fe,DAT_0009f56c + 0x9f4d2);
  }
  pvVar3 = *(void **)(param_1 + 0x316c);
  pvVar4 = *(void **)((int)pvVar3 + 8);
  pvVar5 = pvVar3;
  if (*(void **)((int)pvVar3 + 8) != pvVar3) {
    do {
      pvVar5 = *(void **)((int)pvVar4 + 8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
        pvVar3 = *(void **)(param_1 + 0x316c);
      }
      pvVar4 = pvVar5;
    } while (pvVar5 != pvVar3);
  }
  *(void **)((int)pvVar5 + 4) = pvVar5;
  *(int *)(*(int *)(param_1 + 0x316c) + 8) = *(int *)(param_1 + 0x316c);
  return iVar1;
}

