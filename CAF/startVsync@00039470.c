
/* qcamera::QCameraDisplay::startVsync(bool) */

undefined4 __thiscall qcamera::QCameraDisplay::startVsync(QCameraDisplay *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  sp *extraout_r1;
  int *piVar4;
  sp_qService__IQService_ *this_00;
  sp_android__frameworks__displayservice__V1_0__IEventCallback_ asStack92 [28];
  return_status arStack64 [28];
  int local_24;
  
  piVar4 = *(int **)(DAT_00039610 + 0x3947e);
  local_24 = *piVar4;
  if (this[0x90] == (QCameraDisplay)0x0) {
LAB_00039498:
    if (*(int *)(*(int *)(DAT_00039614 + 0x3949e) + 0x3c) != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    this_00 = (sp_qService__IQService_ *)(this + 0x94);
    iVar1 = android::sp<qService::IQService>::operator__(this_00,(IQService *)0x0);
    if (iVar1 != 0) goto LAB_00039498;
    if (param_1 == false) {
      piVar2 = (int *)android::List<qcamera::ReprocessBuffer>::
                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                      ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)this_00);
      (**(code **)(*piVar2 + 0x38))(arStack64,piVar2,0);
      iVar1 = android::hardware::details::return_status::isOk(arStack64);
      if ((iVar1 != 0) &&
         (iVar1 = android::hardware::Return::operator_cast_to_Status((Return *)arStack64),
         iVar1 == 0)) {
LAB_000395ca:
        android::hardware::details::return_status::_return_status(arStack64);
        if (*(int *)(*(int *)(DAT_00039644 + 0x395d6) + 0x50) != 0) {
          mm_camera_debug_log();
        }
        this[0x91] = (QCameraDisplay)param_1;
        uVar3 = 1;
        goto LAB_00039568;
      }
      iVar1 = *(int *)(*(int *)(DAT_00039638 + 0x39546) + 0x3c);
    }
    else {
      piVar2 = (int *)android::List<qcamera::ReprocessBuffer>::
                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                      ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)this_00);
      android::sp<android::frameworks::displayservice::V1_0::IEventCallback>::
      sp_qcamera__QCameraDisplay_(asStack92,this);
      (**(code **)(*piVar2 + 0x34))(arStack64,piVar2,asStack92);
      android::sp<android::frameworks::displayservice::V1_0::IEventCallback>::_sp
                (asStack92,extraout_r1);
      iVar1 = android::hardware::details::return_status::isOk(arStack64);
      if ((iVar1 == 0) ||
         (iVar1 = android::hardware::Return::operator_cast_to_Status((Return *)arStack64),
         iVar1 != 0)) {
        iVar1 = *(int *)(*(int *)(DAT_00039620 + 0x39502) + 0x3c);
      }
      else {
        piVar2 = (int *)android::List<qcamera::ReprocessBuffer>::
                        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                        ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)this_00);
        (**(code **)(*piVar2 + 0x38))((return_status *)asStack92,piVar2,1);
        android::hardware::Return<android::frameworks::displayservice::V1_0::Status>::operator_
                  ((Return_android__frameworks__displayservice__V1_0__Status_ *)arStack64,
                   (Return *)(return_status *)asStack92);
        android::hardware::details::return_status::_return_status((return_status *)asStack92);
        iVar1 = android::hardware::details::return_status::isOk
                          ((return_status *)
                           (Return_android__frameworks__displayservice__V1_0__Status_ *)arStack64);
        if ((iVar1 != 0) &&
           (iVar1 = android::hardware::Return::operator_cast_to_Status((Return *)arStack64),
           iVar1 == 0)) goto LAB_000395ca;
        iVar1 = *(int *)(*(int *)(DAT_0003962c + 0x395b0) + 0x3c);
      }
    }
    if (iVar1 != 0) {
      mm_camera_debug_log();
    }
    android::hardware::details::return_status::_return_status(arStack64);
  }
  uVar3 = 0;
LAB_00039568:
  if (*piVar4 == local_24) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

