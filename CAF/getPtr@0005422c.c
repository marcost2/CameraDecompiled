
/* qcamera::QCamera3GrallocMemory::getPtr(unsigned int) */

undefined4 qcamera::QCamera3GrallocMemory::getPtr(uint param_1)

{
  int *piVar1;
  undefined8 uVar2;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar1 = *(int **)(DAT_00054270 + 0x5423a);
  local_18 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(param_1 + 0x608));
  uVar2 = (**(code **)(*(int *)param_1 + 0x24))(param_1);
  android::Mutex::Autolock::_Autolock(aAStack28,(Mutex *)((ulonglong)uVar2 >> 0x20));
  if (*piVar1 == local_18) {
    return (int)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

