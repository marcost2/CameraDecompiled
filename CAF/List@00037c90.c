
/* android::List<power_hint_t>::List() */

List_power_hint_t_ * __thiscall android::List<power_hint_t>::List(List_power_hint_t_ *this)

{
  *(int *)this = *(int *)(DAT_00037ca8 + 0x37c9a) + 8;
  List<unsigned_int>::prep((List_unsigned_int_ *)this);
  return this;
}

