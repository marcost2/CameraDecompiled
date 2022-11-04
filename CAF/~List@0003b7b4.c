
/* android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::~List() */

List_qcamera__QCamera3HardwareInterface__PendingRequestInfo_ * __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_List
          (List_qcamera__QCamera3HardwareInterface__PendingRequestInfo_ *this)

{
  *(int *)this = *(int *)(DAT_0003b7d4 + 0x3b7be) + 8;
  clear(this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

