
/* android::SortedVector<android::key_value_pair_t<android::String8, unsigned int>>::do_compare(void
   const*, void const*) const */

int __thiscall
android::SortedVector<android::key_value_pair_t<android::String8,unsigned_int>>::do_compare
          (SortedVector_android__key_value_pair_t_android__String8_unsigned_int__ *this,
          void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  char *__s2;
  char *__s1;
  
                    /* WARNING: Load size is inaccurate */
  __s2 = *param_1;
                    /* WARNING: Load size is inaccurate */
  __s1 = *param_2;
  iVar1 = strcmp(__s1,__s2);
  iVar2 = strcmp(__s2,__s1);
  return (iVar2 >> 0x1f) - (iVar1 >> 0x1f);
}

