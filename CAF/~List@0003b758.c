
/* android::List<qcamera::stream_info_t*>::~List() */

List_qcamera__stream_info_t__ * __thiscall
android::List<qcamera::stream_info_t*>::_List(List_qcamera__stream_info_t__ *this)

{
  *(int *)this = *(int *)(DAT_0003b778 + 0x3b762) + 8;
  List<unsigned_int>::clear((List_unsigned_int_ *)this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

