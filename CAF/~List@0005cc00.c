
/* android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::~List() */

List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ * __thiscall
android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_List
          (List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *this)

{
  *(int *)this = *(int *)(DAT_0005cc20 + 0x5cc0a) + 8;
  clear(this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

