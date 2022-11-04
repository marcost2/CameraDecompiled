
/* qcamera::MotExifHal1::~MotExifHal1() */

void __thiscall qcamera::MotExifHal1::_MotExifHal1(MotExifHal1 *this)

{
  void *pvVar1;
  
  pvVar1 = (void *)MotExif::_MotExif((MotExif *)this);
  operator_delete(pvVar1);
  return;
}

