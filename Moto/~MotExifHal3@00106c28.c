
/* qcamera::MotExifHal3::~MotExifHal3() */

void __thiscall qcamera::MotExifHal3::_MotExifHal3(MotExifHal3 *this)

{
  void *pvVar1;
  
  pvVar1 = (void *)MotExif::_MotExif((MotExif *)this);
  operator_delete(pvVar1);
  return;
}

