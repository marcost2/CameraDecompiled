
/* android::Vector<int>::Vector() */

void __thiscall android::Vector<int>::Vector(Vector_int_ *this)

{
  int *piVar1;
  
  piVar1 = (int *)android::VectorImpl::VectorImpl((VectorImpl *)this,4,7);
  *piVar1 = *(int *)(DAT_0004a828 + 0x4a820) + 8;
  return;
}

