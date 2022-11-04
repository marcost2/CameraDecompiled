
/* android::hardware::Return<android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>>::operator
   android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>() const */

void __thiscall android::hardware::Return::operator_cast_to_sp(Return *this,sp *param_1)

{
  android::hardware::details::return_status::assertOk();
  sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::sp
            ((sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ *)this,
             param_1 + 0x18);
  return;
}

