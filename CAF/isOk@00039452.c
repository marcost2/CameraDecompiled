
/* android::hardware::details::return_status::isOk() const */

void __thiscall android::hardware::details::return_status::isOk(return_status *this)

{
  this[0x14] = (return_status)0x1;
  Status::isOk((Status *)this);
  return;
}

