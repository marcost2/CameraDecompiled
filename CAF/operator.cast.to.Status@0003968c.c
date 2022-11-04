
/* android::hardware::Return<android::frameworks::displayservice::V1_0::Status>::operator
   android::frameworks::displayservice::V1_0::Status() const */

undefined4 __thiscall android::hardware::Return::operator_cast_to_Status(Return *this)

{
  android::hardware::details::return_status::assertOk();
  return *(undefined4 *)(this + 0x18);
}

