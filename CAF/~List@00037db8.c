
/* android::List<power_hint_t>::~List() */

List_power_hint_t_ * __thiscall android::List<power_hint_t>::_List(List_power_hint_t_ *this)

{
  *(int *)this = *(int *)(DAT_00037dd8 + 0x37dc2) + 8;
  List<unsigned_int>::clear((List_unsigned_int_ *)this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

