
/* qcamera::QCamera3ProcessingChannel::initialize(cam_is_type_t) */

int qcamera::QCamera3ProcessingChannel::initialize
              (camera3_device *param_1,camera3_callback_ops *param_2)

{
  int iVar1;
  Mutex *extraout_r1;
  Mutex *pMVar2;
  int *piVar3;
  Mutex *local_24;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar3 = *(int **)(DAT_00058284 + 0x581da);
  local_1c = *piVar3;
  iVar1 = QCamera3StreamMem::allocateAll((QCamera3StreamMem *)(param_1 + 0x2084),0x1174b8);
  if (iVar1 == 0) {
    android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(param_1 + 0x2ebc));
    android::List<unsigned_int>::clear((List_unsigned_int_ *)(param_1 + 0x2eb4));
    local_24 = (Mutex *)0x0;
    pMVar2 = extraout_r1;
    if (*(int *)(param_1 + 0x78) != -1) {
      do {
        android::List<unsigned_int>::push_back((uint *)(param_1 + 0x2eb4));
        local_24 = local_24 + 1;
        pMVar2 = (Mutex *)(*(int *)(param_1 + 0x78) + 1);
      } while (local_24 < pMVar2);
    }
    android::Mutex::Autolock::_Autolock(aAStack32,pMVar2);
  }
  else if (*(int *)(*(int *)(DAT_00058288 + 0x581fe) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  android::List<unsigned_int>::clear((List_unsigned_int_ *)(param_1 + 0x2ec4));
  android::List<unsigned_int>::clear((List_unsigned_int_ *)(param_1 + 0x2ecc));
  if (*piVar3 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

