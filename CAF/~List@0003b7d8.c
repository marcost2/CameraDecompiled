
/* android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::~List() */

List_qcamera__QCamera3HardwareInterface__PendingReprocessResult_ * __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::_List
          (List_qcamera__QCamera3HardwareInterface__PendingReprocessResult_ *this)

{
  *(int *)this = *(int *)(DAT_0003b7f8 + 0x3b7e2) + 8;
  clear(this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

