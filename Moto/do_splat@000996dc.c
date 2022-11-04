
/* android::Vector<long long>::do_splat(void*, void const*, unsigned int) const */

Vector_long_long_ * __thiscall
android::Vector<long_long>::do_splat
          (Vector_long_long_ *this,void *param_1,void *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    puVar1 = (undefined4 *)param_1;
    if ((param_3 != 1) &&
       (((void *)((int)param_2 + 1U) <= param_1 || ((void *)((int)param_1 + param_3 * 8) <= param_2)
        ))) {
                    /* WARNING: Load size is inaccurate */
      uVar6 = *param_2;
      uVar4 = param_3 & 0xfffffffe;
      puVar1 = (undefined4 *)((int)param_1 + uVar4 * 8);
      uVar3 = uVar4;
      do {
        *(undefined8 *)param_1 = uVar6;
        *(undefined8 *)((int)param_1 + 8) = uVar6;
        param_1 = (void *)((int)param_1 + 0x10);
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
      bVar5 = uVar4 == param_3;
      param_3 = param_3 - uVar4;
      if (bVar5) {
        return (Vector_long_long_ *)puVar1;
      }
    }
    do {
                    /* WARNING: Load size is inaccurate */
      uVar2 = *(undefined4 *)((int)param_2 + 4);
      param_3 = param_3 - 1;
      this = (Vector_long_long_ *)(puVar1 + 2);
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      puVar1 = (undefined4 *)this;
    } while (param_3 != 0);
  }
  return this;
}

