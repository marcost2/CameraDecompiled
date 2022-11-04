
/* qcamera::QCameraMemory::alloc(int, unsigned int, unsigned int, unsigned int) */

int __thiscall
qcamera::QCameraMemory::alloc
          (QCameraMemory *this,int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_48 [8];
  int local_28;
  
  piVar3 = *(int **)(DAT_000c51a8 + 0xc4f36);
  local_28 = *piVar3;
  iVar7 = (uint)(byte)this[5] + param_1;
  puVar5 = *(uint **)(DAT_000c51ac + 0xc4f46);
  if ((1 < *puVar5) && (FUN_000c51f4(local_48,param_1,param_2,DAT_000c51b4 + 0xc4f5e), 1 < *puVar5))
  {
    if ((**(byte **)(DAT_000c51b8 + 0xc4f6c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000c51bc + 0xc4f7a) + 1) << 0x1d) < 0) {
      atrace_begin_body(local_48);
    }
  }
  if (iVar7 < 0x41) {
    uVar4 = (uint)(byte)this[5];
    if ((int)uVar4 < iVar7) {
      iVar8 = 0;
      puVar6 = (undefined8 *)(this + uVar4 * 0x18 + -0x10);
      do {
        if (*(int *)(this + 0x608) == 0) {
LAB_000c5038:
          if (*(MotMemThrottle **)(this + 0x614) != (MotMemThrottle *)0x0) {
            iVar8 = MotMemThrottle::beginThrottledAlloc
                              (*(MotMemThrottle **)(this + 0x614),
                               *(cam_stream_type_t *)(this + 0x60c),param_2);
          }
          if (iVar8 < 0) {
            __android_log_print(6,DAT_000c51d4 + 0xc5098,DAT_000c51d8 + 0xc509a,
                                DAT_000c51dc + 0xc509c);
          }
          else {
            iVar8 = allocOneBuffer((QCameraMemInfo *)(puVar6 + 3),param_3,param_2,(bool)this[4],
                                   param_4);
            if (*(MotMemThrottle **)(this + 0x614) != (MotMemThrottle *)0x0) {
              MotMemThrottle::endThrottledAlloc
                        (*(MotMemThrottle **)(this + 0x614),*(cam_stream_type_t *)(this + 0x60c),
                         param_2);
            }
            if (-1 < iVar8) goto LAB_000c507a;
          }
          __android_log_print(6,DAT_000c51e0 + 0xc50aa,DAT_000c51e4 + 0xc50ac,DAT_000c51e8 + 0xc50ae
                             );
          if (uVar4 != 0) {
            do {
              iVar7 = *(int *)(this + 0x608);
              uVar4 = uVar4 - 1;
              if (iVar7 == 0) {
                if (-1 < *(int *)puVar6) {
                  close(*(int *)puVar6);
                  *(int *)puVar6 = -1;
                }
                if (-1 < *(int *)((int)puVar6 + 4)) {
                  local_48[0] = *(int *)(puVar6 + 1);
                  ioctl(*(int *)((int)puVar6 + 4),0xc0044901,local_48);
                  close(*(int *)((int)puVar6 + 4));
                  *(int *)((int)puVar6 + 4) = -1;
                }
                *(int *)(puVar6 + 1) = 0;
                *(int *)((int)puVar6 + 0xc) = 0;
              }
              else {
                iVar1 = *(int *)(this + 0x60c);
                pthread_mutex_lock((pthread_mutex_t *)(iVar7 + 100));
                iVar1 = *(int *)(iVar7 + iVar1 * 8 + 8);
                puVar2 = (undefined8 *)operator_new(0x20);
                uVar9 = *puVar6;
                uVar10 = puVar6[1];
                uVar11 = puVar6[2];
                *(int *)((int)puVar2 + 0x1c) = iVar1;
                *puVar2 = uVar9;
                puVar2[1] = uVar10;
                puVar2[2] = uVar11;
                *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(iVar1 + 0x18);
                *(undefined8 **)(*(int *)(iVar1 + 0x18) + 0x1c) = puVar2;
                *(undefined8 **)(iVar1 + 0x18) = puVar2;
                pthread_mutex_unlock((pthread_mutex_t *)(iVar7 + 100));
              }
              puVar6 = puVar6 + -3;
            } while (0 < (int)uVar4);
          }
          break;
        }
        pthread_mutex_lock((pthread_mutex_t *)(*(int *)(this + 0x608) + 100));
        iVar1 = QCameraMemoryPool::findBufferLocked
                          (*(QCameraMemoryPool **)(this + 0x608),(QCameraMemInfo *)(puVar6 + 3),
                           param_3,param_2,(bool)this[4],*(cam_stream_type_t *)(this + 0x60c));
        pthread_mutex_unlock((pthread_mutex_t *)(*(int *)(this + 0x608) + 100));
        if (iVar1 == -2) goto LAB_000c5038;
LAB_000c507a:
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 3;
      } while ((int)uVar4 < iVar7);
    }
    else {
      iVar8 = 0;
    }
    if (1 < *puVar5) {
      if ((**(byte **)(DAT_000c51ec + 0xc515e) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c51f0 + 0xc516e) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000c51c0 + 0xc4f8c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c51c8 + 0xc4faa,0x186,DAT_000c51c4 + 0xc4f9c,iVar7,0x40);
    }
    if (1 < *puVar5) {
      if ((**(byte **)(DAT_000c51cc + 0xc4fb8) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c51d0 + 0xc4fc8) + 1) << 0x1d) < 0) {
        atrace_end_body();
        iVar8 = -0x4b;
        goto LAB_000c517c;
      }
    }
    iVar8 = -0x4b;
  }
LAB_000c517c:
  if (*piVar3 == local_28) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

