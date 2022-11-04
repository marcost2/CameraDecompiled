
/* qcamera::QCamera3YUVChannel::streamCbRoutine(mm_camera_super_buf_t*, qcamera::QCamera3Stream*) */

void __thiscall
qcamera::QCamera3YUVChannel::streamCbRoutine
          (QCamera3YUVChannel *this,mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  QCamera3ProcessingChannel *this_00;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  mm_camera_super_buf_t *pmVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  pthread_mutex_t *__mutex;
  QCamera3ProcessingChannel **ppQVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  ppQVar14 = *(QCamera3ProcessingChannel ***)(DAT_000a25a8 + 0xa22e6);
  this_00 = *ppQVar14;
  if ((QCamera3ProcessingChannel *)0x1 < this_00) {
    if ((**(byte **)(DAT_000a25ac + 0xa22f6) & 1) == 0) {
      atrace_setup();
    }
    this_00 = (QCamera3ProcessingChannel *)
              ((uint)*(byte *)(*(int *)(DAT_000a25b0 + 0xa2306) + 1) << 0x1d);
    if ((int)this_00 < 0) {
      this_00 = (QCamera3ProcessingChannel *)atrace_begin_body(DAT_000a25b4 + 0xa2592);
    }
  }
  iVar1 = QCamera3ProcessingChannel::checkStreamCbErrors(this_00,param_1,param_2);
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(DAT_000a25b8 + 0xa231e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a25c0 + 0xa2338,0xcc4,DAT_000a25bc + 0xa2330);
    }
    goto LAB_000a23b8;
  }
  uVar13 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc);
  if (uVar13 < *(uint *)(this + 0x14e4)) {
    if (this[0x3171] != (QCamera3YUVChannel)0x0) {
      __mutex = (pthread_mutex_t *)(this + 0x3198);
      pthread_mutex_lock(__mutex);
      uVar2 = QCamera3StreamMem::getFrameNumber((QCamera3StreamMem *)(this + 0x6b0),uVar13);
      puVar3 = *(uint **)(this + 0x31a0);
      puVar11 = puVar3;
      do {
        puVar11 = (uint *)puVar11[5];
        puVar12 = puVar3;
        if (puVar11 == puVar3) break;
        puVar12 = puVar11;
      } while (*puVar11 != uVar2);
      iVar1 = *(int *)(DAT_000a25d0 + 0xa23ec);
      if (*(int *)(iVar1 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a25d8 + 0xa240a,0xcda,DAT_000a25d4 + 0xa23fe,uVar13,uVar2);
        puVar3 = *(uint **)(this + 0x31a0);
      }
      if (puVar12 == puVar3) {
        if (*(int *)(iVar1 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000a25e0 + 0xa24be,0xcdd,DAT_000a25dc + 0xa24b6);
        }
        (**(code **)(*(int *)param_2 + 0xc))(param_2,uVar13);
        pthread_mutex_unlock(__mutex);
        goto LAB_000a23b8;
      }
      pthread_mutex_unlock(__mutex);
      if ((int)((uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x214) << 0x19) < 0) {
        if (*(int *)(iVar1 + 0x20) != 0) {
          uVar4 = QCamera3Stream::getMyType(param_2);
          mm_camera_debug_log(1,1,DAT_000a25e8 + 0xa244a,0xce5,DAT_000a25e4 + 0xa243c,uVar4,uVar2);
        }
        (**(code **)(this + 100))(this,uVar2,1,*(undefined4 *)(this + 4));
      }
      if (*(char *)(puVar12 + 1) != '\0') {
        puVar5 = (undefined8 *)malloc(0x30);
        if (puVar5 != (undefined8 *)0x0) {
          uVar16 = *(undefined8 *)param_1;
          uVar17 = *(undefined8 *)(param_1 + 8);
          uVar18 = *(undefined8 *)(param_1 + 0x18);
          uVar19 = *(undefined8 *)(param_1 + 0x20);
          uVar20 = *(undefined8 *)(param_1 + 0x28);
          puVar5[2] = *(undefined8 *)(param_1 + 0x10);
          puVar5[3] = uVar18;
          *puVar5 = uVar16;
          puVar5[1] = uVar17;
          puVar5[4] = uVar19;
          puVar5[5] = uVar20;
          QCamera3PostProcessor::processData
                    ((QCamera3PostProcessor *)(this + 0x94),(mm_camera_super_buf_t *)puVar5,
                     (native_handle **)puVar12[2],uVar2);
          free(param_1);
          goto LAB_000a23b8;
        }
        if (*(int *)(iVar1 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000a25f0 + 0xa2524,0xcee,DAT_000a25ec + 0xa251c);
        }
        if (param_2 == (QCamera3Stream *)0x0) goto LAB_000a23b8;
        goto LAB_000a23ae;
      }
      if (puVar12 != (uint *)(*(uint **)(this + 0x31a0))[5]) {
        uVar13 = puVar12[3];
        bVar15 = uVar13 != 0;
        if (bVar15) {
          uVar13 = *(uint *)(iVar1 + 0x20);
        }
        if (bVar15 && uVar13 != 0) {
          mm_camera_debug_log(1,1,DAT_000a25f8 + 0xa2502,0xcfd,DAT_000a25f4 + 0xa24fa);
        }
        puVar12[3] = (uint)param_1;
        goto LAB_000a23b8;
      }
      uVar13 = puVar12[4];
      uVar2 = puVar12[5];
      *(uint *)(uVar13 + 0x14) = uVar2;
      *(uint *)(uVar2 + 0x10) = uVar13;
      operator_delete(puVar12);
    }
    QCamera3ProcessingChannel::streamCbRoutine((QCamera3ProcessingChannel *)this,param_1,param_2);
    pvVar8 = *(void **)(this + 0x31a0);
    pvVar6 = *(void **)((int)pvVar8 + 0x14);
    if (pvVar6 != pvVar8) {
      pvVar7 = pvVar6;
      do {
        do {
          pvVar6 = *(void **)((int)pvVar6 + 0x14);
        } while (pvVar8 != pvVar6);
        pmVar10 = *(mm_camera_super_buf_t **)((int)pvVar7 + 0xc);
        if (pmVar10 == (mm_camera_super_buf_t *)0x0) break;
        iVar1 = *(int *)((int)pvVar7 + 0x10);
        iVar9 = *(int *)((int)pvVar7 + 0x14);
        *(int *)(iVar1 + 0x14) = iVar9;
        *(int *)(iVar9 + 0x10) = iVar1;
        operator_delete(pvVar7);
        QCamera3ProcessingChannel::streamCbRoutine
                  ((QCamera3ProcessingChannel *)this,pmVar10,param_2);
        pvVar8 = *(void **)(this + 0x31a0);
        pvVar6 = *(void **)((int)pvVar8 + 0x14);
        pvVar7 = pvVar6;
      } while (pvVar6 != pvVar8);
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000a25c4 + 0xa2394) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a25cc + 0xa23ac,0xcca,DAT_000a25c8 + 0xa23a4);
    }
LAB_000a23ae:
    (**(code **)(*(int *)param_2 + 0xc))(param_2,uVar13);
  }
LAB_000a23b8:
  if ((QCamera3ProcessingChannel *)0x1 < *ppQVar14) {
    if ((**(byte **)(DAT_000a25fc + 0xa23c6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a2600 + 0xa23d6) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

