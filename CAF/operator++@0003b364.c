
/* android::List<unsigned int>::_ListIterator<unsigned int, android::List<unsigned
   int>::NON_CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE(int) */

void __thiscall
android::List<unsigned_int>::
_ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
          (_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *this,
          int param_1)

{
  undefined4 uVar1;
  
  _Node::_Node((_Node *)this,(uint *)param_1);
  uVar1 = List<qcamera::ReprocessBuffer>::_Node::getPrev(*(_Node **)param_1);
  *(undefined4 *)param_1 = uVar1;
  return;
}

