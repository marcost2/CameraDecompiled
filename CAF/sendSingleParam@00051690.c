
/* sendSingleParam(unsigned int, unsigned int) */

undefined4 sendSingleParam(uint param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  sp *extraout_r1;
  int *piVar4;
  Parcel aPStack152 [60];
  Parcel aPStack92 [60];
  sp_qService__IQService_ asStack32 [4];
  int local_1c;
  
  piVar4 = *(int **)(DAT_00051714 + 0x516a0);
  local_1c = *piVar4;
  getBinder();
  android::Parcel::Parcel(aPStack92);
  android::Parcel::Parcel(aPStack152);
  android::Parcel::writeInt32((int)aPStack92);
  iVar1 = android::sp<qService::IQService>::operator__(asStack32,(IQService *)0x0);
  if (iVar1 == 0) {
    uVar3 = 0x80000002;
  }
  else {
    piVar2 = (int *)android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)asStack32);
    uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,param_1,aPStack92,aPStack152);
  }
  android::Parcel::_Parcel(aPStack152);
  android::Parcel::_Parcel(aPStack92);
  android::sp<qService::IQService>::_sp(asStack32,extraout_r1);
  if (*piVar4 == local_1c) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

