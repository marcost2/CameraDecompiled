
/* qcamera::FrameNumberRegistry::allocStoreInternalFrameNumber(unsigned int, unsigned int&) */

undefined4 __thiscall
qcamera::FrameNumberRegistry::allocStoreInternalFrameNumber
          (FrameNumberRegistry *this,uint param_1,uint *param_2)

{
  uint uVar1;
  Mutex *extraout_r1;
  int *piVar2;
  pair_unsigned_int_unsigned_int_ apStack48 [8];
  Autolock aAStack40 [4];
  uint local_24;
  pair apStack32 [8];
  int local_18;
  
  piVar2 = *(int **)(DAT_000475e8 + 0x47578);
  local_18 = *piVar2;
  local_24 = param_1;
  android::Mutex::Autolock::Autolock(aAStack40,(Mutex *)(this + 0x10));
  uVar1 = *(uint *)(this + 0xc);
  *(uint *)(this + 0xc) = uVar1 + 1;
  *param_2 = uVar1;
  if (*(int *)(*(int *)(DAT_000475ec + 0x47594) + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  std::__1::pair<unsigned_int,unsigned_int>::pair_unsigned_int__unsigned_int_false_
            (apStack48,param_2,&local_24);
  std::__1::
  map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
  ::insert_std____1__pair_unsigned_int_unsigned_int__void_(apStack32);
  purgeOldEntriesLocked(this);
  android::Mutex::Autolock::_Autolock(aAStack40,extraout_r1);
  if (*piVar2 == local_18) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

