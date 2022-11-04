
/* qcamera::FrameNumberRegistry::generateStoreInternalFrameNumber(unsigned int&) */

undefined4 __thiscall
qcamera::FrameNumberRegistry::generateStoreInternalFrameNumber
          (FrameNumberRegistry *this,uint *param_1)

{
  uint uVar1;
  Mutex *extraout_r1;
  int *piVar2;
  uint local_30;
  pair_unsigned_int_unsigned_int_ apStack44 [8];
  Autolock aAStack36 [4];
  pair apStack32 [8];
  int local_18;
  
  piVar2 = *(int **)(DAT_00044e38 + 0x44dc6);
  local_18 = *piVar2;
  android::Mutex::Autolock::Autolock(aAStack36,(Mutex *)(this + 0x10));
  uVar1 = *(uint *)(this + 0xc);
  *(uint *)(this + 0xc) = uVar1 + 1;
  *param_1 = uVar1;
  if (*(int *)(*(int *)(DAT_00044e3c + 0x44de2) + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  local_30 = 0xffffffff;
  std::__1::pair<unsigned_int,unsigned_int>::pair_unsigned_int__unsigned_int_false_
            (apStack44,param_1,&local_30);
  std::__1::
  map<unsigned_int,unsigned_int,std::__1::less<unsigned_int>,std::__1::allocator<std::__1::pair<unsigned_int_const,unsigned_int>>>
  ::insert_std____1__pair_unsigned_int_unsigned_int__void_(apStack32);
  purgeOldEntriesLocked(this);
  android::Mutex::Autolock::_Autolock(aAStack36,extraout_r1);
  if (*piVar2 == local_18) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

