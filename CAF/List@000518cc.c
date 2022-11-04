
/* android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::List() */

List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_ * __thiscall
android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::List
          (List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_ *this)

{
  *(int *)this = *(int *)(DAT_000518e4 + 0x518d6) + 8;
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::prep
            ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)this);
  return this;
}

