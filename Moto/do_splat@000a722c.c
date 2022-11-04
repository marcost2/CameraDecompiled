
/* android::Vector<unsigned int>::do_splat(void*, void const*, unsigned int) const */

Vector_unsigned_int_ * __thiscall
android::Vector<unsigned_int>::do_splat
          (Vector_unsigned_int_ *this,void *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)param_1;
    if ((3 < param_3) &&
       (((void *)((int)param_2 + 1U) <= param_1 || ((void *)((int)param_1 + param_3 * 4) <= param_2)
        ))) {
                    /* WARNING: Load size is inaccurate */
      uVar1 = CONCAT44(*param_2,*param_2);
      uVar4 = param_3 & 0xfffffffc;
      puVar2 = (undefined4 *)((int)param_1 + uVar4 * 4);
      uVar3 = uVar4;
      do {
        *(undefined8 *)param_1 = uVar1;
        *(undefined8 *)((int)param_1 + 8) = uVar1;
        param_1 = (void *)((int)param_1 + 0x10);
        uVar3 = uVar3 - 4;
      } while (uVar3 != 0);
      bVar5 = uVar4 == param_3;
      param_3 = param_3 - uVar4;
      if (bVar5) {
        return (Vector_unsigned_int_ *)puVar2;
      }
    }
    do {
                    /* WARNING: Load size is inaccurate */
      param_3 = param_3 - 1;
      this = (Vector_unsigned_int_ *)(puVar2 + 1);
      *puVar2 = *param_2;
      puVar2 = (undefined4 *)this;
    } while (param_3 != 0);
  }
  return this;
}

