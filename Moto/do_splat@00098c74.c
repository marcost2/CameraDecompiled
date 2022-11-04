
/* android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int>>::do_splat(void*,
   void const*, unsigned int) const */

SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ * __thiscall
android::SortedVector<android::key_value_pair_t<unsigned_int,unsigned_int>>::do_splat
          (SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *this,void *param_1,
          void *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    this = (SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *)param_1;
    if ((3 < param_3) &&
       (((void *)((int)param_2 + 5U) <= param_1 ||
        ((void *)((int)param_1 + param_3 * 8) <= (void *)((int)param_2 + 4U))))) {
      uVar4 = param_3 & 0xfffffffc;
      this = (SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *)
             ((int)param_1 + uVar4 * 8);
      uVar3 = uVar4;
      do {
        uVar3 = uVar3 - 4;
        puVar1 = (undefined4 *)0x380;
        puVar2 = (undefined4 *)0x390;
        lVar7 = 2;
        puVar6 = (undefined4 *)param_1;
        while( true ) {
          *puVar6 = *puVar1;
          puVar6[1] = *puVar2;
          puVar6 = puVar6 + 2;
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x388;
        puVar2 = (undefined4 *)0x398;
        lVar7 = 2;
        while( true ) {
          *puVar6 = *puVar1;
          puVar6[1] = *puVar2;
          puVar6 = puVar6 + 2;
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        param_1 = (void *)((int)param_1 + 0x20);
      } while (uVar3 != 0);
      bVar5 = uVar4 == param_3;
      param_3 = param_3 - uVar4;
      if (bVar5) {
        return (SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *)
               (undefined4 *)this;
      }
    }
    do {
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)this = *param_2;
      *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_2 + 4);
      this = (SortedVector_android__key_value_pair_t_unsigned_int_unsigned_int__ *)((int)this + 8);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return this;
}

