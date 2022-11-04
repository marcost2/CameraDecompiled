
/* qcamera::QCamera3Stream::handleBatchBuffer(mm_camera_super_buf_t*) */

void __thiscall
qcamera::QCamera3Stream::handleBatchBuffer(QCamera3Stream *this,mm_camera_super_buf_t *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  void *__src;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auStack1112 [536];
  undefined auStack576 [12];
  undefined4 local_234;
  byte local_21f;
  int local_21c [125];
  int local_28;
  
  piVar5 = *(int **)(DAT_0009c924 + 0x9c73e);
  local_28 = *piVar5;
  if (*(int *)(this + 0x280) == 0) {
    if (*(int *)(*(int *)(DAT_0009c928 + 0x9c750) + 0x3c) != 0) {
      if (*(int *)(this + 0x14) == 0) {
        uVar1 = 0xc;
      }
      else {
        uVar1 = *(undefined4 *)(*(int *)(this + 0x14) + 4);
      }
      mm_camera_debug_log(2,1,DAT_0009c930 + 0x9c776,0x61d,DAT_0009c92c + 0x9c76a,uVar1);
    }
    uVar1 = 0xffffffda;
    goto LAB_0009c77c;
  }
  if (*(int *)(this + 0x38) == 0) {
    if (*(int *)(*(int *)(DAT_0009c934 + 0x9c7ee) + 0x3c) == 0) {
LAB_0009c82c:
      uVar1 = 0xffffffea;
      goto LAB_0009c77c;
    }
    uVar1 = 0x621;
    iVar2 = DAT_0009c938 + 0x9c7fe;
    iVar4 = DAT_0009c93c + 0x9c806;
  }
  else {
    __src = *(void **)(param_1 + 0x10);
    if (__src != (void *)0x0) {
      __aeabi_memcpy8(auStack576,__src,0x218);
      iVar2 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x298),__src);
      if (iVar2 == 0) {
        if (*(int *)(*(int *)(DAT_0009c94c + 0x9c838) + 0x3c) != 0) {
          mm_camera_debug_log(2,1,DAT_0009c954 + 0x9c854,0x62e,DAT_0009c950 + 0x9c848,local_234);
        }
        free(param_1);
        uVar1 = 0xfffffff4;
      }
      else {
        iVar2 = *(int *)(DAT_0009c958 + 0x9c7be);
        if (*(int *)(iVar2 + 0x48) != 0) {
          mm_camera_debug_log(2,4,DAT_0009c960 + 0x9c7e4,0x633,DAT_0009c95c + 0x9c7d6,local_234,
                              local_21f);
        }
        __aeabi_memclr8(auStack1112,0x218);
        if (local_21f != 0) {
          uVar6 = 0;
          do {
            __aeabi_memcpy8(auStack1112,(void *)(local_21c[uVar6] * 0x218 + *(int *)(this + 0xd0)),
                            0x218);
            puVar3 = (undefined8 *)malloc(0x30);
            if (puVar3 == (undefined8 *)0x0) {
              if (*(int *)(iVar2 + 0x3c) != 0) {
                mm_camera_debug_log(2,1,DAT_0009c968 + 0x9c8f4,0x63f,DAT_0009c964 + 0x9c8ec);
              }
              break;
            }
            uVar9 = *(undefined8 *)(param_1 + 0x18);
            uVar7 = *(undefined8 *)param_1;
            uVar8 = *(undefined8 *)(param_1 + 8);
            uVar10 = *(undefined8 *)(param_1 + 0x20);
            uVar11 = *(undefined8 *)(param_1 + 0x28);
            puVar3[2] = *(undefined8 *)(param_1 + 0x10);
            puVar3[3] = uVar9;
            *(undefined **)(puVar3 + 2) = auStack1112;
            *puVar3 = uVar7;
            puVar3[1] = uVar8;
            puVar3[4] = uVar10;
            puVar3[5] = uVar11;
            (**(code **)(this + 0x38))(puVar3,this,*(undefined4 *)(this + 0x3c));
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_21f);
        }
        if (*(int *)(iVar2 + 0x48) != 0) {
          mm_camera_debug_log(2,4,DAT_0009c970 + 0x9c914,0x649,DAT_0009c96c + 0x9c908,local_234);
        }
        free(param_1);
        uVar1 = 0;
      }
      goto LAB_0009c77c;
    }
    if (*(int *)(*(int *)(DAT_0009c940 + 0x9c80c) + 0x3c) == 0) goto LAB_0009c82c;
    uVar1 = 0x625;
    iVar2 = DAT_0009c944 + 0x9c81c;
    iVar4 = DAT_0009c948 + 0x9c824;
  }
  mm_camera_debug_log(2,1,iVar4,uVar1,iVar2);
  uVar1 = 0xffffffea;
LAB_0009c77c:
  if (*piVar5 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

