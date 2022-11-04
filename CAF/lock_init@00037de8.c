
/* qcamera::QCameraPerfLock::lock_init() */

void __thiscall qcamera::QCameraPerfLock::lock_init(QCameraPerfLock *this)

{
  int iVar1;
  undefined4 uVar2;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *pMVar3;
  Mutex *extraout_r1_01;
  Mutex *extraout_r1_02;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  Autolock aAStack120 [4];
  char acStack116 [92];
  int local_18;
  
  piVar4 = *(int **)(DAT_00037f54 + 0x37df4);
  local_18 = *piVar4;
  iVar5 = *(int *)(DAT_00037f58 + 0x37dfe);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  android::Mutex::Autolock::Autolock(aAStack120,(Mutex *)(this + 0x10));
  android::List<unsigned_int>::clear((List_unsigned_int_ *)(this + 0x38));
  this[0x24] = (QCameraPerfLock)0x0;
  *(undefined4 *)(this + 0x20) = 0;
  property_get();
  iVar1 = atoi(acStack116);
  *(int *)(this + 0xc) = iVar1;
  uVar7 = hw_get_module();
  pMVar3 = (Mutex *)((ulonglong)uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  bVar6 = iVar1 != 0;
  if (bVar6) {
    iVar1 = *(int *)(iVar5 + 0x20);
  }
  if (bVar6 && iVar1 != 0) {
    mm_camera_debug_log();
    pMVar3 = extraout_r1;
  }
  if (*(int *)(this + 0xc) != 0) {
    *(undefined4 *)(this + 0x14) = 0xffffffff;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    uVar7 = property_get();
    pMVar3 = (Mutex *)((ulonglong)uVar7 >> 0x20);
    if (0 < (int)uVar7) {
      uVar7 = dlopen();
      pMVar3 = (Mutex *)((ulonglong)uVar7 >> 0x20);
      *(int *)(this + 8) = (int)uVar7;
      if ((int)uVar7 != 0) {
        dlerror();
        uVar2 = dlsym();
        *(undefined4 *)this = uVar2;
        uVar7 = dlerror();
        pMVar3 = (Mutex *)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 == 0) {
          uVar2 = dlsym();
          *(undefined4 *)(this + 4) = uVar2;
          uVar7 = dlerror();
          pMVar3 = (Mutex *)((ulonglong)uVar7 >> 0x20);
          if ((int)uVar7 == 0) {
            iVar5 = *(int *)(iVar5 + 0x2c);
            goto joined_r0x00037f10;
          }
          iVar1 = *(int *)(iVar5 + 0x20);
        }
        else {
          iVar1 = *(int *)(iVar5 + 0x20);
        }
        if (iVar1 != 0) {
          mm_camera_debug_log();
          pMVar3 = extraout_r1_00;
        }
      }
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    if (*(int *)(this + 8) != 0) {
      dlclose();
      *(undefined4 *)(this + 8) = 0;
      pMVar3 = extraout_r1_01;
    }
  }
  iVar5 = *(int *)(iVar5 + 0x2c);
joined_r0x00037f10:
  if (iVar5 != 0) {
    mm_camera_debug_log();
    pMVar3 = extraout_r1_02;
  }
  android::Mutex::Autolock::_Autolock(aAStack120,pMVar3);
  if (*piVar4 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

