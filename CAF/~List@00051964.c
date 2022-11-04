
/* android::List<qcamera::PendingBufferInfo>::~List() */

List_qcamera__PendingBufferInfo_ * __thiscall
android::List<qcamera::PendingBufferInfo>::_List(List_qcamera__PendingBufferInfo_ *this)

{
  *(int *)this = *(int *)(DAT_00051984 + 0x5196e) + 8;
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::clear
            ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

