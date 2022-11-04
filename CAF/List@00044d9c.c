
/* android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::List() */

List_qcamera__QCamera3HardwareInterface__InternalRequest_ * __thiscall
android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::List
          (List_qcamera__QCamera3HardwareInterface__InternalRequest_ *this)

{
  *(int *)this = *(int *)(DAT_00044db4 + 0x44da6) + 8;
  List<qcamera::ReprocessBuffer>::prep((List_qcamera__ReprocessBuffer_ *)this);
  return this;
}

