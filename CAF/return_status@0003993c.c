
/* android::hardware::details::return_status::return_status() */

void __thiscall android::hardware::details::return_status::return_status(return_status *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  Status::Status((Status *)this);
  this[0x14] = (return_status)0x0;
  return;
}

