
/* android::KeyedVector<unsigned int, unsigned int>::add(unsigned int const&, unsigned int const&)
    */

void __thiscall
android::KeyedVector<unsigned_int,unsigned_int>::add
          (KeyedVector_unsigned_int_unsigned_int_ *this,uint *param_1,uint *param_2)

{
  int *piVar1;
  uint auStack28 [2];
  int local_14;
  
  piVar1 = *(int **)(DAT_00049074 + 0x49050);
  local_14 = *piVar1;
  key_value_pair_t<unsigned_int,unsigned_int>::key_value_pair_t
            ((key_value_pair_t_unsigned_int_unsigned_int_ *)auStack28,param_1,param_2);
  SortedVector<android::key_value_pair_t<unsigned_int,unsigned_int>>::add
            ((SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *)this,auStack28,
             param_2);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

