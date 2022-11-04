
void FUN_00098cfc(sp *param_1)

{
  int *piVar1;
  int *piVar2;
  String16 aSStack40 [4];
  int *local_24;
  int *local_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_00098d90 + 0x98d0a);
  local_1c = *piVar2;
  android::defaultServiceManager();
  piVar1 = local_20;
  android::String16::String16(aSStack40,(char *)(DAT_00098d94 + 0x98d24));
  (**(code **)(*piVar1 + 0x10))(&local_24,piVar1,aSStack40);
  qService::IQService::asInterface(param_1);
  if (local_24 != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_24 + *(int *)(*local_24 + -0xc)));
  }
  android::String16::_String16(aSStack40);
  if (*param_1 == 0) {
    __android_log_print(6,DAT_00098d98 + 0x98d64,DAT_00098d9c + 0x98d66,DAT_00098da0 + 0x98d68);
  }
  if (local_20 != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_20 + *(int *)(*local_20 + -0xc)));
  }
  if (*piVar2 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

