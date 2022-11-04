
/* qcamera::QCamera3YUVChannel::handleOfflinePpCallback(unsigned int,
   android::Vector<mm_camera_super_buf_t*>&) */

undefined4 __thiscall
qcamera::QCamera3YUVChannel::handleOfflinePpCallback
          (QCamera3YUVChannel *this,uint param_1,Vector *param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int local_2c;
  int local_28;
  
  piVar13 = *(int **)(DAT_000a2aec + 0xa296a);
  local_28 = *piVar13;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x3198));
  puVar4 = *(uint **)(this + 0x31a0);
  puVar1 = (uint *)puVar4[5];
  if (puVar4 == puVar1) {
LAB_000a2a68:
    if (*(int *)(*(int *)(DAT_000a2af0 + 0xa2a6e) + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000a2af8 + 0xa2a88,0xde5,DAT_000a2af4 + 0xa2a7e,param_1);
    }
  }
  else {
    uVar8 = *puVar1;
    puVar10 = puVar1;
    while (uVar8 != param_1) {
      puVar10 = (uint *)puVar10[5];
      if (puVar4 == puVar10) goto LAB_000a2a68;
      uVar8 = *puVar10;
    }
    if (puVar4 == puVar10) goto LAB_000a2a68;
    iVar12 = *(int *)(DAT_000a2afc + 0xa29ae);
    if ((puVar10 != puVar1) && (*(int *)(iVar12 + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_000a2b04 + 0xa29d2,0xde9,DAT_000a2b00 + 0xa29c4,param_1,*puVar1);
    }
    if (*(char *)(puVar10 + 1) == '\0') {
      if (*(int *)(iVar12 + 0x20) != 0) {
        uVar11 = 0xe05;
        iVar12 = DAT_000a2b10 + 0xa2ab6;
        iVar7 = DAT_000a2b14 + 0xa2ac0;
LAB_000a2adc:
        mm_camera_debug_log(1,1,iVar7,uVar11,iVar12,param_1);
      }
LAB_000a2ae0:
      uVar11 = 0xffffffea;
      goto LAB_000a2a8c;
    }
    param_1 = QCamera3StreamMem::getHeapBufferIndex((QCamera3StreamMem *)(this + 0x6b0),param_1);
    if ((int)param_1 < 0) {
      if (*(int *)(iVar12 + 0x20) != 0) {
        uVar11 = 0xdf3;
        iVar12 = DAT_000a2b08 + 0xa2ad2;
        iVar7 = DAT_000a2b0c + 0xa2ade;
        goto LAB_000a2adc;
      }
      goto LAB_000a2ae0;
    }
    QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)(this + 0x6b0),param_1,0xffffffff);
    uVar8 = *(uint *)(this + 0x31a8);
    puVar1 = (uint *)operator_new(0xc);
    puVar1[2] = uVar8;
    *puVar1 = param_1;
    puVar1[1] = *(uint *)(uVar8 + 4);
    *(uint **)(*(int *)(uVar8 + 4) + 8) = puVar1;
    *(uint **)(uVar8 + 4) = puVar1;
    uVar8 = puVar10[4];
    uVar5 = puVar10[5];
    *(uint *)(uVar8 + 0x14) = uVar5;
    *(uint *)(uVar5 + 0x10) = uVar8;
    operator_delete(puVar10);
    pvVar6 = *(void **)(this + 0x31a0);
    pvVar2 = *(void **)((int)pvVar6 + 0x14);
    if (pvVar2 != pvVar6) {
      pvVar3 = pvVar2;
      do {
        do {
          pvVar2 = *(void **)((int)pvVar2 + 0x14);
        } while (pvVar6 != pvVar2);
        iVar12 = *(int *)((int)pvVar3 + 0xc);
        if (iVar12 == 0) break;
        iVar7 = *(int *)((int)pvVar3 + 0x10);
        iVar9 = *(int *)((int)pvVar3 + 0x14);
        *(int *)(iVar7 + 0x14) = iVar9;
        *(int *)(iVar9 + 0x10) = iVar7;
        operator_delete(pvVar3);
        local_2c = iVar12;
        android::VectorImpl::insertAt(param_2,(uint)&local_2c,*(uint *)(param_2 + 8));
        pvVar6 = *(void **)(this + 0x31a0);
        pvVar2 = *(void **)((int)pvVar6 + 0x14);
        pvVar3 = pvVar2;
      } while (pvVar2 != pvVar6);
    }
  }
  uVar11 = 0;
LAB_000a2a8c:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3198));
  if (*piVar13 == local_28) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

