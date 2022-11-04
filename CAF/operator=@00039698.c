
/* android::hardware::Return<android::frameworks::displayservice::V1_0::Status>::TEMPNAMEPLACEHOLDERVALUE(android::hardware::Return<android::frameworks::displayservice::V1_0::Status>&&)
    */

Return_android__frameworks__displayservice__V1_0__Status_ * __thiscall
android::hardware::Return<android::frameworks::displayservice::V1_0::Status>::operator_
          (Return_android__frameworks__displayservice__V1_0__Status_ *this,Return *param_1)

{
  android::hardware::details::return_status::operator_
            ((return_status *)this,(return_status *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}

