
/* virtual thunk to qcamera::MotSmoothZoom::~MotSmoothZoom() */

void __thiscall qcamera::MotSmoothZoom::_MotSmoothZoom(MotSmoothZoom *this)

{
  MotSmoothZoom *this_00;
  
  this_00 = this + *(int *)(*(int *)this + -0xc);
  _MotSmoothZoom(this_00);
  android::RefBase::_RefBase((RefBase *)(this_00 + 0x40));
  operator_delete(this_00);
  return;
}

