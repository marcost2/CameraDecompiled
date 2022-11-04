
/* android::Vector<unsigned char>::do_splat(void*, void const*, unsigned int) const */

Vector_unsigned_char_ * __thiscall
android::Vector<unsigned_char>::do_splat
          (Vector_unsigned_char_ *this,void *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  Vector_unsigned_char_ *pVVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_3 != 0) {
    pVVar4 = (Vector_unsigned_char_ *)param_1;
    if ((0xf < param_3) &&
       (((void *)((int)param_2 + 1U) <= param_1 || ((void *)((int)param_1 + param_3) <= param_2))))
    {
                    /* WARNING: Load size is inaccurate */
      uVar2 = CONCAT11(*param_2,*param_2);
      uVar3 = CONCAT22(uVar2,uVar2);
      uVar1 = CONCAT44(uVar3,uVar3);
      uVar6 = param_3 & 0xfffffff0;
      pVVar4 = (Vector_unsigned_char_ *)((int)param_1 + uVar6);
      uVar5 = uVar6;
      do {
        *(undefined8 *)param_1 = uVar1;
        *(undefined8 *)((int)param_1 + 8) = uVar1;
        param_1 = (void *)((int)param_1 + 0x10);
        uVar5 = uVar5 - 0x10;
      } while (uVar5 != 0);
      bVar7 = uVar6 == param_3;
      param_3 = param_3 - uVar6;
      if (bVar7) {
        return pVVar4;
      }
    }
    do {
                    /* WARNING: Load size is inaccurate */
      param_3 = param_3 - 1;
      this = pVVar4 + 1;
      *pVVar4 = *param_2;
      pVVar4 = this;
    } while (param_3 != 0);
  }
  return this;
}

