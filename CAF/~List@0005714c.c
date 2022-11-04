
/* android::List<unsigned int>::~List() */

List_unsigned_int_ * __thiscall android::List<unsigned_int>::_List(List_unsigned_int_ *this)

{
  *(int *)this = *(int *)(DAT_0005716c + 0x57156) + 8;
  clear(this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

