
/* qcamera::QCameraDisplay::init() */

void __thiscall qcamera::QCameraDisplay::init(QCameraDisplay *this)

{
  int iVar1;
  int *piVar2;
  sp *extraout_r1;
  sp *extraout_r1_00;
  sp_android__frameworks__displayservice__V1_0__IDisplayService_ *this_00;
  int *piVar3;
  basic_string_char_std____1__char_traits_char__std____1__allocator_char__ abStack60 [28];
  basic_string abStack32 [4];
  int local_1c;
  
  piVar3 = *(int **)(DAT_00039394 + 0x392ae);
  local_1c = *piVar3;
  std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::
  basic_string_decltype_nullptr__(abStack60,(char *)(DAT_00039398 + 0x392be));
  android::frameworks::displayservice::V1_0::IDisplayService::getService
            (abStack32,SUB41(abStack60,0));
  this_00 = (sp_android__frameworks__displayservice__V1_0__IDisplayService_ *)(this + 0x98);
  android::sp<android::frameworks::displayservice::V1_0::IDisplayService>::operator_
            (this_00,(sp *)abStack32);
  android::sp<android::frameworks::displayservice::V1_0::IDisplayService>::_sp
            ((sp_android__frameworks__displayservice__V1_0__IDisplayService_ *)abStack32,extraout_r1
            );
  std::__1::basic_string<char,std::__1::char_traits<char>,std::__1::allocator<char>>::_basic_string
            (abStack60);
  iVar1 = android::sp<qService::IQService>::operator__
                    ((sp_qService__IQService_ *)this_00,(IQService *)0x0);
  if (iVar1 == 0) {
    piVar2 = (int *)android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)this_00);
    (**(code **)(*piVar2 + 0x34))((return_status *)abStack60,piVar2);
    android::hardware::Return::operator_cast_to_sp
              ((Return *)abStack32,(sp *)(return_status *)abStack60);
    android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::operator_
              ((sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ *)(this + 0x94)
               ,(sp *)(Return *)abStack32);
    android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::_sp
              ((sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ *)
               (Return *)abStack32,extraout_r1_00);
    iVar1 = android::hardware::details::return_status::isOk((return_status *)abStack60);
    if ((iVar1 == 0) ||
       (iVar1 = android::sp<qService::IQService>::operator__
                          ((sp_qService__IQService_ *)
                           (sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ *)
                           (this + 0x94),(IQService *)0x0), iVar1 != 0)) {
      if (*(int *)(*(int *)(DAT_000393a8 + 0x39358) + 0x3c) != 0) {
        mm_camera_debug_log();
      }
    }
    else {
      this[0x90] = (QCameraDisplay)0x1;
    }
    android::hardware::
    Return<android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>>::_Return
              ((Return_android__sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver__
                *)abStack60);
  }
  else if (*(int *)(*(int *)(DAT_0003939c + 0x392f6) + 0x3c) != 0) {
    mm_camera_debug_log();
  }
  if (*piVar3 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

