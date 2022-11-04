
/* android::List<qcamera::PendingBuffersInRequest>::~List() */

List_qcamera__PendingBuffersInRequest_ * __thiscall
android::List<qcamera::PendingBuffersInRequest>::_List(List_qcamera__PendingBuffersInRequest_ *this)

{
  *(int *)this = *(int *)(DAT_00051500 + 0x514ea) + 8;
  clear(this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

