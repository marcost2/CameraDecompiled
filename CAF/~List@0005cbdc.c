
/* android::List<int>::~List() */

List_int_ * __thiscall android::List<int>::_List(List_int_ *this)

{
  *(int *)this = *(int *)(DAT_0005cbfc + 0x5cbe6) + 8;
  List<unsigned_int>::clear((List_unsigned_int_ *)this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

