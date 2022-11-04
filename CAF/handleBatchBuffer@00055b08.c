
/* qcamera::QCamera3Stream::handleBatchBuffer(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3Stream::handleBatchBuffer(QCamera3Stream *this,mm_camera_super_buf_t *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint in_r3;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int in_stack_fffffb98;
  uint in_stack_fffffb9c;
  int in_stack_fffffba0;
  uint in_stack_fffffba4;
  void *in_stack_fffffba8;
  undefined auStack576 [33];
  byte local_21f;
  int local_21c [125];
  int local_28;
  
  piVar5 = *(int **)(DAT_00055d00 + 0x55b1a);
  local_28 = *piVar5;
  if (*(int *)(this + 0x284) == 0) {
    if (*(int *)(*(int *)(DAT_00055d04 + 0x55b2c) + 0x3c) != 0) {
      getMyType(this);
      mm_camera_debug_log();
    }
    uVar1 = 0xffffffda;
  }
  else {
    if (*(int *)(this + 0x38) == 0) {
      iVar2 = *(int *)(*(int *)(DAT_00055d10 + 0x55c42) + 0x3c);
    }
    else {
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        uVar4 = 0x218;
        __aeabi_memcpy8(auStack576,*(void **)(param_1 + 0x10),0x218);
        iVar2 = QCameraQueue::enqueue
                          ((QCameraQueue *)(this + 0x29c),*(cam_mapping_buf_type *)(param_1 + 0x10),
                           uVar4,in_r3,in_stack_fffffb98,in_stack_fffffb9c,in_stack_fffffba0,
                           in_stack_fffffba4,in_stack_fffffba8);
        if (iVar2 == 0) {
          if (*(int *)(*(int *)(DAT_00055d28 + 0x55c8c) + 0x3c) != 0) {
            mm_camera_debug_log();
          }
          free(param_1);
          uVar1 = 0xfffffff4;
        }
        else {
          iVar2 = *(int *)(DAT_00055d34 + 0x55b98);
          if (*(int *)(iVar2 + 0x48) != 0) {
            mm_camera_debug_log();
          }
          __aeabi_memclr4(&stack0xfffffba8,0x218);
          if (local_21f != 0) {
            uVar4 = 0;
            do {
              __aeabi_memcpy8(&stack0xfffffba8,
                              (void *)(local_21c[uVar4] * 0x218 + *(int *)(this + 0xd0)),0x218);
              puVar3 = (undefined8 *)malloc(0x30);
              if (puVar3 == (undefined8 *)0x0) {
                if (*(int *)(iVar2 + 0x3c) != 0) {
                  mm_camera_debug_log();
                }
                break;
              }
              uVar6 = *(undefined8 *)param_1;
              uVar7 = *(undefined8 *)(param_1 + 8);
              uVar8 = *(undefined8 *)(param_1 + 0x18);
              uVar9 = *(undefined8 *)(param_1 + 0x20);
              uVar10 = *(undefined8 *)(param_1 + 0x28);
              puVar3[2] = *(undefined8 *)(param_1 + 0x10);
              puVar3[3] = uVar8;
              *(undefined **)(puVar3 + 2) = &stack0xfffffba8;
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
              puVar3[4] = uVar9;
              puVar3[5] = uVar10;
              (**(code **)(this + 0x38))(puVar3,this,*(undefined4 *)(this + 0x3c));
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_21f);
          }
          if (*(int *)(iVar2 + 0x48) != 0) {
            mm_camera_debug_log();
          }
          free(param_1);
          uVar1 = 0;
        }
        goto LAB_00055b52;
      }
      iVar2 = *(int *)(*(int *)(DAT_00055d1c + 0x55c60) + 0x3c);
    }
    if (iVar2 == 0) {
      uVar1 = 0xffffffea;
    }
    else {
      mm_camera_debug_log();
      uVar1 = 0xffffffea;
    }
  }
LAB_00055b52:
  if (*piVar5 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

