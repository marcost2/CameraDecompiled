
/* qcamera::QCameraPerfLock::lock_deinit() */

void __thiscall qcamera::QCameraPerfLock::lock_deinit(QCameraPerfLock *this)

{
  int iVar1;
  undefined4 *puVar2;
  Mutex *extraout_r1;
  Mutex *pMVar3;
  Mutex *extraout_r1_00;
  Mutex *extraout_r1_01;
  Mutex *extraout_r1_02;
  int *piVar4;
  int iVar5;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack36 [4];
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar4 = *(int **)(DAT_00037da0 + 0x37cd6);
  local_1c = *piVar4;
  android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(this + 0x10));
  pMVar3 = extraout_r1;
  if (*(int *)(this + 0xc) != 0) {
    iVar5 = *(int *)(DAT_00037da4 + 0x37cf0);
    if (*(int *)(iVar5 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    iVar1 = android::List<unsigned_int>::empty((List_unsigned_int_ *)(this + 0x38));
    if (iVar1 == 0) {
      android::List<unsigned_int>::begin();
      puVar2 = (undefined4 *)
               android::List<unsigned_int>::
               _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
               operator_(a_Stack36);
      *(undefined4 *)(this + 0x20) = *puVar2;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack36);
      powerHintInternal(this,*(power_hint_t *)(this + 0x20),false);
      android::List<unsigned_int>::clear((List_unsigned_int_ *)(this + 0x38));
    }
    pMVar3 = *(Mutex **)(this + 4);
    if (pMVar3 != (Mutex *)0x0) {
      if (-1 < *(int *)(this + 0x18)) {
        (*(code *)pMVar3)();
      }
      pMVar3 = *(Mutex **)(this + 4);
      if ((pMVar3 != (Mutex *)0x0) && (-1 < *(int *)(this + 0x14))) {
        (*(code *)pMVar3)();
        pMVar3 = extraout_r1_00;
      }
    }
    if (*(int *)(this + 8) != 0) {
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 4) = 0;
      dlclose();
      *(undefined4 *)(this + 8) = 0;
      pMVar3 = extraout_r1_01;
    }
    *(undefined4 *)(this + 0xc) = 0;
    if (*(int *)(iVar5 + 0x2c) != 0) {
      mm_camera_debug_log();
      pMVar3 = extraout_r1_02;
    }
  }
  android::Mutex::Autolock::_Autolock(aAStack32,pMVar3);
  if (*piVar4 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

