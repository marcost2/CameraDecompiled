
/* android::List<qcamera::ReprocessBuffer>::~List() */

List_qcamera__ReprocessBuffer_ * __thiscall
android::List<qcamera::ReprocessBuffer>::_List(List_qcamera__ReprocessBuffer_ *this)

{
  *(int *)this = *(int *)(DAT_0005eb48 + 0x5eb32) + 8;
  clear(this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

