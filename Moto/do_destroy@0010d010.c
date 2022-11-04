
/* android::SortedVector<android::String8>::do_destroy(void*, unsigned int) const */

SortedVector_android__String8_ * __thiscall
android::SortedVector<android::String8>::do_destroy
          (SortedVector_android__String8_ *this,void *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      iVar1 = android::String8::_String8((String8 *)param_1);
      this = (SortedVector_android__String8_ *)(iVar1 + 4);
      param_2 = param_2 - 1;
      param_1 = this;
    } while (param_2 != 0);
  }
  return this;
}

