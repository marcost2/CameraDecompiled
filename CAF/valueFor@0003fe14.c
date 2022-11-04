
/* android::KeyedVector<unsigned int, unsigned int>::valueFor(unsigned int const&) const */

int __thiscall
android::KeyedVector<unsigned_int,unsigned_int>::valueFor
          (KeyedVector_unsigned_int_unsigned_int_ *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = indexOfKey(this,param_1);
  if (-1 < (int)uVar1) {
    iVar2 = SortedVector<android::key_value_pair_t<unsigned_int,unsigned_int>>::itemAt
                      ((SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *)this,
                       uVar1);
    return iVar2 + 4;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert();
}

