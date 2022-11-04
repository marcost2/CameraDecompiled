
/* android::List<unsigned int>::empty() const */

uint __thiscall android::List<unsigned_int>::empty(List_unsigned_int_ *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = List<qcamera::ReprocessBuffer>::_Node::getPrev(*(_Node **)(this + 4));
  uVar2 = count_leading_zeroes(iVar1 - *(int *)(this + 4));
  return uVar2 >> 5;
}

