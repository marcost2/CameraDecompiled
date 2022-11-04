
/* android::List<mm_camera_super_buf_t*>::~List() */

List_mm_camera_super_buf_t__ * __thiscall
android::List<mm_camera_super_buf_t*>::_List(List_mm_camera_super_buf_t__ *this)

{
  *(int *)this = *(int *)(DAT_00057190 + 0x5717a) + 8;
  List<unsigned_int>::clear((List_unsigned_int_ *)this);
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  return this;
}

