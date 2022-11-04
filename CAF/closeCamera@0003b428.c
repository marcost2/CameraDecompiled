
/* qcamera::QCamera3HardwareInterface::closeCamera() */

undefined4 qcamera::QCamera3HardwareInterface::closeCamera(void)

{
  int in_r0;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  QCameraFlash *this;
  char cVar5;
  char *in_r1;
  char *pcVar6;
  char *extraout_r1;
  code *pcVar7;
  int iVar8;
  pthread_mutex_t *__mutex;
  int *piVar9;
  bool bVar10;
  undefined4 in_stack_ffffff6c;
  ScopedTraceKpi aSStack136 [12];
  char acStack124 [92];
  int local_20;
  
  piVar9 = *(int **)(DAT_0003b5a8 + 0x3b436);
  local_20 = *piVar9;
  iVar1 = DAT_0003b5ac + 0x3b444;
  ScopedTraceKpi::ScopedTraceKpi(aSStack136,CONCAT44(in_stack_ffffff6c,iVar1),in_r1);
  iVar8 = *(int *)(DAT_0003b5b0 + 0x3b456);
  if (*(int *)(iVar8 + 0x34) != 0) {
    in_stack_ffffff6c = *(undefined4 *)(in_r0 + 0x4c);
    iVar1 = DAT_0003b5b4 + 0x3b462;
    mm_camera_debug_log();
  }
  pcVar7 = *(code **)((*(undefined4 **)(in_r0 + 0x50))[1] + 0x14);
  (*pcVar7)(**(undefined4 **)(in_r0 + 0x50),2);
  if (*(allocator **)(in_r0 + 0x117918) != (allocator *)0x0) {
    QCamera3HeapMemory::deallocate
              (*(allocator **)(in_r0 + 0x117918),(__tree_node *)0x117918,(uint)pcVar7);
    piVar2 = *(int **)(in_r0 + 0x117918);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x20))();
    }
    *(int **)(in_r0 + 0x117918) = (int *)0x0;
    *(undefined4 *)(in_r0 + 0x11791c) = 0;
  }
  uVar3 = (**(code **)((*(undefined4 **)(in_r0 + 0x50))[1] + 8))(**(undefined4 **)(in_r0 + 0x50));
  *(undefined4 *)(in_r0 + 0x50) = 0;
  __mutex = *(pthread_mutex_t **)(DAT_0003b5bc + 0x3b4c0);
  pthread_mutex_lock(__mutex);
  *(undefined4 *)(*(int *)(DAT_0003b5c0 + 0x3b4cc) + *(int *)(in_r0 + 0x4c) * 4) = 0xdeadbeef;
  pthread_mutex_unlock(__mutex);
  property_get();
  iVar4 = atoi(acStack124);
  if (iVar4 == 1) {
    pthread_mutex_lock(__mutex);
    cVar5 = **(char **)(DAT_0003b5cc + 0x3b506) + -1;
    **(char **)(DAT_0003b5cc + 0x3b506) = cVar5;
    if (cVar5 == '\0') {
      setCameraLaunchStatus(0);
    }
    pthread_mutex_unlock(__mutex);
  }
  if (*(void **)(in_r0 + 0x13c) != (void *)0x0) {
    free(*(void **)(in_r0 + 0x13c));
    *(undefined4 *)(in_r0 + 0x13c) = 0;
  }
  this = (QCameraFlash *)QCameraFlash::getInstance();
  iVar4 = QCameraFlash::releaseFlashFromCamera(this,*(int *)(in_r0 + 0x4c));
  bVar10 = iVar4 != 0;
  if (bVar10) {
    iVar4 = *(int *)(iVar8 + 0x24);
  }
  if (bVar10 && iVar4 != 0) {
    in_stack_ffffff6c = *(undefined4 *)(in_r0 + 0x4c);
    iVar1 = DAT_0003b5d0 + 0x3b54a;
    mm_camera_debug_log();
  }
  pcVar6 = (char *)0x0;
  *(undefined4 *)(in_r0 + 0x117910) = 0;
  if (*(int *)(iVar8 + 0x34) != 0) {
    in_stack_ffffff6c = *(undefined4 *)(in_r0 + 0x4c);
    iVar1 = DAT_0003b5d8 + 0x3b574;
    mm_camera_debug_log();
    pcVar6 = extraout_r1;
  }
  ScopedTraceKpi::_ScopedTraceKpi(aSStack136,CONCAT44(in_stack_ffffff6c,iVar1),pcVar6);
  if (*piVar9 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

