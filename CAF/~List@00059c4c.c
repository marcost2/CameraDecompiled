
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::~List() */

List_qcamera__QCamera3YUVChannel__PpInfo_ * __thiscall
android::List<qcamera::QCamera3YUVChannel::PpInfo>::_List
          (List_qcamera__QCamera3YUVChannel__PpInfo_ *this)

{
  *(int *)this = *(int *)(DAT_00059c6c + 0x59c56) + 8;
  clear(this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

