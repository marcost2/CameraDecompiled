
/* android::Vector<unsigned int>::operator[](unsigned int) const */

int __thiscall android::Vector<unsigned_int>::operator__(Vector_unsigned_int_ *this,uint param_1)

{
  int iVar1;
  
  iVar1 = array(this);
  return iVar1 + param_1 * 4;
}

