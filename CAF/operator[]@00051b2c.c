
/* android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int>>::operator[](unsigned
   int) const */

int __thiscall
android::SortedVector<android::key_value_pair_t<unsigned_int,unsigned_int>>::operator__
          (SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *this,uint param_1)

{
  int iVar1;
  
  iVar1 = Vector<unsigned_int>::array((Vector_unsigned_int_ *)this);
  return iVar1 + param_1 * 8;
}

