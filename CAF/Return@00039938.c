
/* android::hardware::Return<void>::Return() */

void __thiscall android::hardware::Return<void>::Return(Return_void_ *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  Status::Status((Status *)this);
  this[0x14] = (Return_void_)0x0;
  return;
}

