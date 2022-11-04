
/* qcamera::QCamera3GrallocMemory::registerBuffer(native_handle const**, cam_stream_type_t) */

undefined4
qcamera::QCamera3GrallocMemory::registerBuffer(native_handle **param_1,cam_stream_type_t param_2)

{
  int iVar1;
  native_handle *pnVar2;
  int iVar3;
  void *pvVar4;
  native_handle *pnVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_34;
  native_handle *local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar7 = *(int **)(DAT_0009a654 + 0x9a41c);
  local_28 = *piVar7;
  local_34 = 1;
  iVar8 = *(int *)(DAT_0009a658 + 0x9a42e);
  if (*(int *)(iVar8 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0009a660 + 0x9a44a,0x316,DAT_0009a65c + 0x9a442);
  }
  local_30 = (native_handle *)0x0;
  local_2c = 0;
  iVar1 = (**(code **)(*param_1 + 4))(param_1,param_2);
  if (-1 < iVar1) {
    if (*(int *)(iVar8 + 0x30) == 0) {
      uVar6 = 0xffffffef;
    }
    else {
      mm_camera_debug_log(1,5,DAT_0009a668 + 0x9a47a,0x31b,DAT_0009a664 + 0x9a472);
      uVar6 = 0xffffffef;
    }
    goto LAB_0009a526;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x182));
  pnVar5 = param_1[0x203];
  pnVar2 = param_1[1];
  if (pnVar2 < (native_handle *)(0x3f - (int)pnVar5)) {
    if (pnVar2 < (native_handle *)0x3f) {
      if (pnVar5 < (native_handle *)0x40) {
        iVar1 = (int)pnVar5 << 2;
        do {
          if (param_1[iVar1 + 4] == (native_handle *)0x0) {
            *(cam_stream_type_t *)((int)param_1 + iVar1 + 0x60c) = param_2;
            uVar6 = *(undefined4 *)param_2;
            *(undefined4 *)((int)param_1 + iVar1 + 0x70c) = uVar6;
            setMetaData(uVar6,0x200,&local_34);
            pnVar2 = (native_handle *)__open_2(DAT_0009a684 + 0x9a55a,0);
            param_1[iVar1 + 3] = pnVar2;
            if ((int)pnVar2 < 0) {
              if (*(int *)(iVar8 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_0009a68c + 0x9a5fe,0x333,DAT_0009a688 + 0x9a5f6);
              }
LAB_0009a628:
              uVar6 = 0xfffffff4;
            }
            else {
              local_2c = *(undefined4 *)(*(int *)((int)param_1 + iVar1 + 0x70c) + 0xc);
              iVar3 = ioctl((int)pnVar2,0xc0084905,&local_30);
              if (iVar3 < 0) {
                if (*(int *)(iVar8 + 0x20) != 0) {
                  mm_camera_debug_log(1,1,DAT_0009a694 + 0x9a61c,0x33a,DAT_0009a690 + 0x9a614);
                }
                close((int)param_1[iVar1 + 3]);
                goto LAB_0009a628;
              }
              if (*(int *)(iVar8 + 0x2c) != 0) {
                iVar3 = *(int *)((int)param_1 + iVar1 + 0x70c);
                mm_camera_debug_log(1,4,DAT_0009a69c + 0x9a5ac,0x343,DAT_0009a698 + 0x9a596,pnVar5,
                                    *(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x34),
                                    *(undefined4 *)(iVar3 + 0x38));
              }
              pnVar2 = *(native_handle **)(*(int *)((int)param_1 + iVar1 + 0x70c) + 0xc);
              param_1[iVar1 + 2] = pnVar2;
              pnVar5 = *(native_handle **)(*(int *)((int)param_1 + iVar1 + 0x70c) + 0x34);
              param_1[iVar1 + 5] = pnVar5;
              param_1[iVar1 + 4] = local_30;
              pvVar4 = mmap((void *)0x0,(size_t)pnVar5,3,1,(int)pnVar2,0);
              if (pvVar4 == (void *)0xffffffff) {
                param_1[iVar1 + 4] = (native_handle *)0x0;
                goto LAB_0009a628;
              }
              *(void **)((int)param_1 + iVar1 + 0x408) = pvVar4;
              param_1[1] = param_1[1] + 1;
              uVar6 = 0;
            }
            if (*(int *)(iVar8 + 0x2c) != 0) {
              mm_camera_debug_log(1,4,DAT_0009a6a4 + 0x9a64a,0x358,DAT_0009a6a0 + 0x9a642);
            }
            goto LAB_0009a520;
          }
          iVar1 = iVar1 + 4;
          pnVar5 = pnVar5 + 1;
        } while (pnVar5 < (native_handle *)0x40);
      }
    }
    else {
      if (*(int *)(iVar8 + 0x20) == 0) goto LAB_0009a51c;
      mm_camera_debug_log(1,1,DAT_0009a678 + 0x9a4be,0x499,DAT_0009a674 + 0x9a4b0,pnVar2,0x40);
    }
    if (*(int *)(iVar8 + 0x20) != 0) {
      uVar6 = 0x328;
      iVar8 = DAT_0009a67c + 0x9a512;
      iVar1 = DAT_0009a680 + 0x9a51a;
LAB_0009a518:
      mm_camera_debug_log(1,1,iVar1,uVar6,iVar8);
    }
  }
  else if (*(int *)(iVar8 + 0x20) != 0) {
    uVar6 = 0x322;
    iVar8 = DAT_0009a66c + 0x9a4dc;
    iVar1 = DAT_0009a670 + 0x9a4ea;
    goto LAB_0009a518;
  }
LAB_0009a51c:
  uVar6 = 0xffffffb5;
LAB_0009a520:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x182));
LAB_0009a526:
  if (*piVar7 == local_28) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

