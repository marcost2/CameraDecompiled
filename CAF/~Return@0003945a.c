
/* android::hardware::Return<android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>>::~Return()
    */

void __thiscall
android::hardware::
Return<android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>>::_Return
          (Return_android__sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver__
           *this)

{
  sp *in_r1;
  
  sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::_sp
            ((sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ *)(this + 0x18),
             in_r1);
  android::hardware::details::return_status::
  __ThumbV7PILongThunk__ZN7android8hardware7details13return_statusD2Ev((return_status *)this);
  return;
}

