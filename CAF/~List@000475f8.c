
/* android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::~List() */

List_qcamera__QCamera3HardwareInterface__InternalRequest_ * __thiscall
android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::_List
          (List_qcamera__QCamera3HardwareInterface__InternalRequest_ *this)

{
  *(int *)this = *(int *)(DAT_00047618 + 0x47602) + 8;
  List<qcamera::ReprocessBuffer>::clear((List_qcamera__ReprocessBuffer_ *)this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

