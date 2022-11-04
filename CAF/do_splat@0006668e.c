
/* android::SortedVector<android::String8>::do_splat(void*, void const*, unsigned int) const */

SortedVector_android__String8_ * __thiscall
android::SortedVector<android::String8>::do_splat
          (SortedVector_android__String8_ *this,void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    do {
      iVar1 = android::String8::String8((String8 *)param_1,(char *)param_2);
      this = (SortedVector_android__String8_ *)(iVar1 + 4);
      param_3 = param_3 - 1;
      param_1 = this;
    } while (param_3 != 0);
  }
  return this;
}

