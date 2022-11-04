
/* qcamera::QCamera3HardwareInterface::dynamicUpdateMetaStreamInfo() */

undefined4 qcamera::QCamera3HardwareInterface::dynamicUpdateMetaStreamInfo(void)

{
  QCamera3HardwareInterface *in_r0;
  int iVar1;
  int iVar2;
  char *in_r1;
  undefined4 extraout_r1;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 in_stack_ffffffb4;
  ScopedTraceDbg aSStack48 [8];
  int local_28;
  
  piVar3 = *(int **)(DAT_0004846c + 0x482c2);
  local_28 = *piVar3;
  iVar1 = DAT_00048470 + 0x482cc;
  ScopedTraceDbg::ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffffb4,iVar1),in_r1);
  iVar5 = *(int *)(DAT_00048474 + 0x482de);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    iVar1 = DAT_00048478 + 0x482ec;
    mm_camera_debug_log();
  }
  stopAllChannels(in_r0);
  uVar6 = notifyErrorForPendingRequests(in_r0);
  iVar2 = (int)uVar6;
  if (iVar2 < 0) {
    if (*(int *)(iVar5 + 0x20) == 0) goto LAB_00048450;
    iVar1 = DAT_00048488 + 0x483a6;
  }
  else {
    if (*(int *)(in_r0 + 0x260) != 0) {
      uVar4 = 0;
      iVar2 = DAT_00048480 + 0x48320;
      do {
        if (*(int *)(iVar5 + 0x34) != 0) {
          in_stack_ffffffb4 = *(undefined4 *)(in_r0 + uVar4 * 4 + 0x264);
          iVar1 = iVar2;
          mm_camera_debug_log();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_r0 + 0x260));
    }
    if (*(int *)(in_r0 + 0x14c) == 0) {
      if (*(int *)(iVar5 + 0x20) != 0) {
        iVar1 = DAT_00048490 + 0x483c4;
        in_stack_ffffffb4 = 0;
        mm_camera_debug_log();
      }
    }
    else {
      __aeabi_memcpy8((void *)(*(int *)(in_r0 + 0x14c) + 0x734b8),in_r0 + 0x220,0x168);
      *(undefined *)(*(int *)(in_r0 + 0x14c) + 0x70) = 1;
    }
    uVar4 = (**(code **)((*(undefined4 **)(in_r0 + 0x50))[1] + 0x18))
                      (**(undefined4 **)(in_r0 + 0x50),*(undefined4 *)(in_r0 + 0x14c));
    if ((0x7fffffff < uVar4) && (*(int *)(iVar5 + 0x20) != 0)) {
      iVar1 = DAT_00048498 + 0x483fc;
      mm_camera_debug_log();
    }
    uVar6 = startAllChannels(in_r0);
    iVar2 = (int)uVar6;
    if (iVar2 < 0) {
      if (*(int *)(iVar5 + 0x20) == 0) goto LAB_00048450;
      iVar1 = DAT_000484a0 + 0x48440;
    }
    else {
      if (*(int *)(iVar5 + 0x2c) == 0) goto LAB_00048450;
      iVar1 = DAT_000484a8 + 0x48426;
    }
  }
  mm_camera_debug_log();
  uVar6 = CONCAT44(extraout_r1,iVar2);
LAB_00048450:
  ScopedTraceDbg::_ScopedTraceDbg
            (aSStack48,CONCAT44(in_stack_ffffffb4,iVar1),(char *)((ulonglong)uVar6 >> 0x20));
  if (*piVar3 == local_28) {
    return (int)uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

