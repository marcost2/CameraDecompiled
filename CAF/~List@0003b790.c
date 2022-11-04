
/* android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::~List() */

List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_ * __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::_List
          (List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_ *this)

{
  *(int *)this = *(int *)(DAT_0003b7b0 + 0x3b79a) + 8;
  List<qcamera::ReprocessBuffer>::clear((List_qcamera__ReprocessBuffer_ *)this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

