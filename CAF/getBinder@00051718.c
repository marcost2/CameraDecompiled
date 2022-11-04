
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* getBinder() */

void getBinder(void)

{
  sp *in_r0;
  int *piVar1;
  sp *extraout_r1;
  char *extraout_r1_00;
  sp *extraout_r1_01;
  sp *psVar2;
  int *piVar3;
  undefined8 uVar4;
  String16 aSStack40 [4];
  sp_android__IBinder_ asStack36 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  a_Stack32 [4];
  int local_1c;
  
  piVar3 = *(int **)(DAT_000517a4 + 0x51726);
  local_1c = *piVar3;
  android::defaultServiceManager();
  piVar1 = (int *)android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                  ::getNode(a_Stack32);
  android::String16::String16(aSStack40,(char *)(DAT_000517a8 + 0x51746));
  (**(code **)(*piVar1 + 0x10))(asStack36,piVar1,aSStack40);
  android::interface_cast_qService__IQService_(in_r0);
  android::sp<android::IBinder>::_sp(asStack36,extraout_r1);
  android::String16::_String16(aSStack40,extraout_r1_00);
  uVar4 = android::sp<qService::IQService>::operator__
                    ((sp_qService__IQService_ *)in_r0,(IQService *)0x0);
  psVar2 = (sp *)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 != 0) {
    __android_log_print();
    psVar2 = extraout_r1_01;
  }
  android::sp<android::IServiceManager>::_sp((sp_android__IServiceManager_ *)a_Stack32,psVar2);
  if (*piVar3 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

