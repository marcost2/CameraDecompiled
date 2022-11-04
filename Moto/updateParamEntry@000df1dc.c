
/* qcamera::QCameraParameters::updateParamEntry(char const*, char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::updateParamEntry(QCameraParameters *this,char *param_1,char *param_2)

{
  int *piVar1;
  String8 aSStack52 [4];
  String8 aSStack48 [4];
  String8 aSStack44 [4];
  String8 aSStack40 [4];
  int local_24;
  
  piVar1 = *(int **)(DAT_000df274 + 0xdf1f2);
  local_24 = *piVar1;
  MotParamStateMachine::beginUpdateParamEntry((MotParamStateMachine *)(this + 0xd28));
  android::String8::String8(aSStack48,param_1);
  android::String8::String8(aSStack52,param_2);
  android::String8::String8(aSStack44,aSStack48);
  android::String8::String8(aSStack40,aSStack52);
  android::SortedVectorImpl::remove((char *)(this + 0x2a0));
  android::SortedVectorImpl::add(this + 0x2a0);
  android::String8::_String8(aSStack40);
  android::String8::_String8(aSStack44);
  android::String8::_String8(aSStack52);
  android::String8::_String8(aSStack48);
  MotParamStateMachine::endUpdateParamEntry();
  if (*piVar1 == local_24) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

