
/* qcamera::QCameraPerfLock::lock_init() */

void __thiscall qcamera::QCameraPerfLock::lock_init(QCameraPerfLock *this)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  char acStack120 [92];
  int local_1c;
  
  piVar8 = *(int **)(DAT_0007d030 + 0x7ceaa);
  local_1c = *piVar8;
  iVar7 = *(int *)(DAT_0007d034 + 0x7ceb8);
  if (*(int *)(iVar7 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007d03c + 0x7cece,0x6d,DAT_0007d038 + 0x7cec6);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  pvVar4 = *(void **)(this + 0x3c);
  pvVar1 = *(void **)((int)pvVar4 + 8);
  pvVar5 = pvVar4;
  if (*(void **)((int)pvVar4 + 8) != pvVar4) {
    do {
      pvVar5 = *(void **)((int)pvVar1 + 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar4 = *(void **)(this + 0x3c);
      }
      pvVar1 = pvVar5;
    } while (pvVar5 != pvVar4);
  }
  *(void **)((int)pvVar5 + 4) = pvVar5;
  *(int *)(*(int *)(this + 0x3c) + 8) = *(int *)(this + 0x3c);
  this[0x24] = (QCameraPerfLock)0x0;
  *(undefined4 *)(this + 0x20) = 0;
  property_get(DAT_0007d040 + 0x7cf10,acStack120,DAT_0007d044 + 0x7cf12);
  iVar2 = atoi(acStack120);
  *(int *)(this + 0xc) = iVar2;
  iVar6 = DAT_0007d048 + 0x7cf26;
  iVar2 = hw_get_module(iVar6,this + 0x1c);
  bVar9 = iVar2 != 0;
  if (bVar9) {
    iVar2 = *(int *)(iVar7 + 0x20);
  }
  if (bVar9 && iVar2 != 0) {
    mm_camera_debug_log(1,1,DAT_0007d050 + 0x7cf4a,0x79,DAT_0007d04c + 0x7cf40,iVar6);
  }
  if (*(int *)(this + 0xc) == 0) {
LAB_0007cfe4:
    if (*(int *)(iVar7 + 0x2c) == 0) goto LAB_0007cffc;
    uVar3 = 0xa4;
    iVar7 = DAT_0007d064 + 0x7cff2;
    iVar2 = DAT_0007d068 + 0x7cffa;
  }
  else {
    *(undefined4 *)(this + 0x14) = 0xffffffff;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    iVar2 = property_get(DAT_0007d054 + 0x7cf68,acStack120,0);
    if (iVar2 < 1) {
LAB_0007cfd2:
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 4) = 0;
      if (*(int *)(this + 8) != 0) {
        dlclose();
        *(undefined4 *)(this + 8) = 0;
      }
      goto LAB_0007cfe4;
    }
    iVar2 = dlopen(acStack120,0);
    *(int *)(this + 8) = iVar2;
    if (iVar2 == 0) goto LAB_0007cfd2;
    dlerror();
    uVar3 = dlsym(*(undefined4 *)(this + 8),DAT_0007d058 + 0x7cf88);
    *(undefined4 *)this = uVar3;
    iVar2 = dlerror();
    if (iVar2 != 0) {
      if (*(int *)(iVar7 + 0x20) != 0) {
        uVar3 = 0x8f;
        iVar2 = DAT_0007d05c + 0x7cfa0;
        iVar6 = DAT_0007d060 + 0x7cfa8;
LAB_0007cfce:
        mm_camera_debug_log(1,1,iVar6,uVar3,iVar2);
      }
      goto LAB_0007cfd2;
    }
    uVar3 = dlsym(*(undefined4 *)(this + 8),DAT_0007d06c + 0x7cfb0);
    *(undefined4 *)(this + 4) = uVar3;
    iVar2 = dlerror();
    if (iVar2 != 0) {
      if (*(int *)(iVar7 + 0x20) != 0) {
        uVar3 = 0x95;
        iVar2 = DAT_0007d070 + 0x7cfc8;
        iVar6 = DAT_0007d074 + 0x7cfd0;
        goto LAB_0007cfce;
      }
      goto LAB_0007cfd2;
    }
    if (*(int *)(iVar7 + 0x2c) == 0) goto LAB_0007cffc;
    uVar3 = 0x98;
    iVar7 = DAT_0007d078 + 0x7d022;
    iVar2 = DAT_0007d07c + 0x7d02a;
  }
  mm_camera_debug_log(1,4,iVar2,uVar3,iVar7);
LAB_0007cffc:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  if (*piVar8 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

