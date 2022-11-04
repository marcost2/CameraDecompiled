
/* android::List<qcamera::PendingBufferInfo>::List() */

List_qcamera__PendingBufferInfo_ * __thiscall
android::List<qcamera::PendingBufferInfo>::List(List_qcamera__PendingBufferInfo_ *this)

{
  *(int *)this = *(int *)(DAT_00051960 + 0x51952) + 8;
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::prep
            ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)this);
  return this;
}

