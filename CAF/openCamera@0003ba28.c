
/* qcamera::QCamera3HardwareInterface::openCamera() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::openCamera
          (QCamera3HardwareInterface *this,hw_device_t **param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  QCameraFlash *this_00;
  void *pvVar4;
  int iVar5;
  int iVar6;
  QCamera3HeapMemory *this_01;
  int *piVar7;
  undefined4 uVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 *puVar9;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  uint extraout_r1_08;
  pthread_mutex_t *ppVar10;
  int **ppiVar11;
  int *piVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int in_stack_ffffff6c;
  ScopedTraceKpi aSStack136 [8];
  char acStack128 [92];
  int local_24;
  
  piVar12 = *(int **)(DAT_0003bd98 + 0x3ba36);
  local_24 = *piVar12;
  iVar3 = DAT_0003bd9c + 0x3ba40;
  ScopedTraceKpi::ScopedTraceKpi(aSStack136,CONCAT44(in_stack_ffffff6c,iVar3),(char *)param_1);
  piVar1 = (int *)(this + 0x50);
  if (*piVar1 != 0) {
    if (*(int *)(*(int *)(DAT_0003bda0 + 0x3ba5a) + 0x20) == 0) {
      uVar16 = CONCAT44(extraout_r1,0xffffffef);
    }
    else {
      iVar3 = DAT_0003bda4 + 0x3ba64;
      mm_camera_debug_log();
      uVar16 = CONCAT44(extraout_r1_00,0xffffffef);
    }
    goto LAB_0003baee;
  }
  this_00 = (QCameraFlash *)QCameraFlash::getInstance();
  uVar15 = QCameraFlash::reserveFlashForCamera(this_00,*(int *)(this + 0x4c));
  uVar8 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if ((int)uVar15 < 0) {
    if (*(int *)(*(int *)(DAT_0003bdac + 0x3bacc) + 0x20) != 0) {
      in_stack_ffffff6c = *(int *)(this + 0x4c);
      iVar3 = DAT_0003bdb0 + 0x3bad8;
LAB_0003bae6:
      mm_camera_debug_log();
      uVar8 = extraout_r1_02;
    }
LAB_0003baea:
    uVar16 = CONCAT44(uVar8,0x80000000);
    goto LAB_0003baee;
  }
  uVar16 = camera_open();
  iVar5 = (int)uVar16;
  if (iVar5 != 0) {
    if (*(int *)(*(int *)(DAT_0003bdb8 + 0x3ba9e) + 0x20) != 0) {
      iVar3 = DAT_0003bdbc + 0x3baaa;
      mm_camera_debug_log();
      uVar16 = uVar16 & 0xffffffff | (ulonglong)extraout_r1_01 << 0x20;
      in_stack_ffffff6c = iVar5;
    }
    goto LAB_0003baee;
  }
  puVar9 = (undefined4 *)*piVar1;
  if (puVar9 == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_0003bdc4 + 0x3bc68) + 0x20) == 0) {
      uVar16 = 0xffffffed;
    }
    else {
      iVar3 = DAT_0003bdc8 + 0x3bc74;
      in_stack_ffffff6c = 0;
      mm_camera_debug_log();
      uVar16 = CONCAT44(extraout_r1_05,0xffffffed);
    }
    goto LAB_0003baee;
  }
  uVar15 = (**(code **)(puVar9[1] + 4))(*puVar9,*(undefined4 *)(DAT_0003bdd0 + 0x3bb1a),this);
  if ((int)uVar15 < 0) {
    uVar16 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),0x80000002);
    if (*(int *)(*(int *)(DAT_0003bdd4 + 0x3bc92) + 0x20) != 0) {
      iVar3 = DAT_0003bdd8 + 0x3bca6;
      mm_camera_debug_log();
      uVar16 = CONCAT44(extraout_r1_06,0x80000002);
    }
    goto LAB_0003baee;
  }
  pvVar4 = malloc(0x607a0);
  *(void **)(this + 0x13c) = pvVar4;
  if (pvVar4 == (void *)0x0) {
    uVar8 = extraout_r1_03;
    if (*(int *)(*(int *)(DAT_0003be0c + 0x3bcbe) + 0x20) == 0) goto LAB_0003bd8c;
    iVar3 = DAT_0003be10 + 0x3bcca;
  }
  else {
    __aeabi_memclr4(pvVar4,0x607a0);
    this[0x140] = (QCamera3HardwareInterface)0x1;
    property_get();
    iVar5 = atoi(acStack128);
    if (iVar5 == 1) {
      ppVar10 = *(pthread_mutex_t **)(DAT_0003bde8 + 0x3bb7a);
      pthread_mutex_lock(ppVar10);
      cVar2 = **(char **)(DAT_0003bdec + 0x3bb86);
      **(char **)(DAT_0003bdec + 0x3bb86) = cVar2 + '\x01';
      if (cVar2 == '\0') {
        setCameraLaunchStatus(1);
      }
      pthread_mutex_unlock(ppVar10);
    }
    property_get();
    *(undefined4 *)(this + 0x117938) = 0;
    *(undefined4 *)(this + 0x11793c) = 0;
    iVar5 = atoi(acStack128);
    if (iVar5 == 1) {
      uVar15 = QCameraCommon::getBootToMonoTimeOffset();
      *(int *)(this + 0x117938) = (int)uVar15;
      *(int *)(this + 0x11793c) = (int)((ulonglong)uVar15 >> 0x20);
    }
    iVar5 = *(int *)(DAT_0003bdf8 + 0x3bbc8);
    if (*(int *)(iVar5 + 0x28) != 0) {
      iVar3 = DAT_0003bdfc + 0x3bbde;
      mm_camera_debug_log();
    }
    ppVar10 = *(pthread_mutex_t **)(DAT_0003be04 + 0x3bbf4);
    pthread_mutex_lock(ppVar10);
    iVar6 = (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x8c))
                      (**(undefined4 **)(this + 0x50),
                       *(int *)(DAT_0003be08 + 0x3bc00) + *(int *)(this + 0x4c) * 4);
    pthread_mutex_unlock(ppVar10);
    if (iVar6 < 0) {
      uVar8 = extraout_r1_04;
      if (*(int *)(iVar5 + 0x20) != 0) {
        iVar3 = DAT_0003be18 + 0x3bcf6;
        goto LAB_0003bae6;
      }
      goto LAB_0003baea;
    }
    ppiVar11 = (int **)(this + 0x117918);
    this_01 = (QCamera3HeapMemory *)operator_new(0x610);
    piVar7 = (int *)QCamera3HeapMemory::QCamera3HeapMemory(this_01,1);
    *ppiVar11 = piVar7;
    uVar15 = QCamera3HeapMemory::allocate((allocator *)piVar7,0x14);
    uVar8 = (undefined4)((ulonglong)uVar15 >> 0x20);
    if ((int)uVar15 == 0) {
      uVar13 = *(undefined4 *)*piVar1;
      pcVar14 = *(code **)(((undefined4 *)*piVar1)[1] + 0xc);
      uVar8 = QCamera3Memory::getFd((QCamera3Memory *)*ppiVar11,0);
      iVar3 = (**(code **)(**ppiVar11 + 8))(*ppiVar11,0);
      uVar15 = (*pcVar14)(uVar13,2,uVar8,0x14);
      uVar8 = (undefined4)((ulonglong)uVar15 >> 0x20);
      if (-1 < (int)uVar15) {
        uVar8 = (**(code **)(**ppiVar11 + 8))(*ppiVar11,0);
        uVar16 = 0x11791c00000000;
        *(undefined4 *)(this + 0x11791c) = uVar8;
        if (*(int *)(iVar5 + 0x28) != 0) {
          in_stack_ffffff6c = *(int *)(this + 0x4c);
          iVar3 = DAT_0003be30 + 0x3bd5c;
          mm_camera_debug_log();
          uVar16 = (ulonglong)extraout_r1_08 << 0x20;
        }
        goto LAB_0003baee;
      }
      if (*(int *)(iVar5 + 0x20) == 0) goto LAB_0003bd8c;
      iVar3 = DAT_0003be28 + 0x3bd7e;
    }
    else {
      if (*(int *)(iVar5 + 0x20) == 0) {
LAB_0003bd8c:
        uVar16 = CONCAT44(uVar8,0xfffffff4);
        goto LAB_0003baee;
      }
      iVar3 = DAT_0003be20 + 0x3bc54;
    }
  }
  mm_camera_debug_log();
  uVar16 = CONCAT44(extraout_r1_07,0xfffffff4);
LAB_0003baee:
  ScopedTraceKpi::_ScopedTraceKpi
            (aSStack136,CONCAT44(in_stack_ffffff6c,iVar3),(char *)(uVar16 >> 0x20));
  if (*piVar12 == local_24) {
    return (int)uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

