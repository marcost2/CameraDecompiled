
/* android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::~List() */

List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_ * __thiscall
android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::_List
          (List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_ *this)

{
  *(int *)this = *(int *)(DAT_00051928 + 0x51912) + 8;
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::clear
            ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

