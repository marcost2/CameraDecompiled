
/* android::List<unsigned int>::_ListIterator<unsigned int, android::List<unsigned
   int>::CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE() */

_ListIterator_unsigned_int_android__List_unsigned_int___CONST_ITERATOR_ * __thiscall
android::List<unsigned_int>::_ListIterator<unsigned_int,android::List<unsigned_int>::CONST_ITERATOR>
::operator__(_ListIterator_unsigned_int_android__List_unsigned_int___CONST_ITERATOR_ *this)

{
  undefined4 uVar1;
  
  uVar1 = List<qcamera::ReprocessBuffer>::_Node::getPrev(*(_Node **)this);
  *(undefined4 *)this = uVar1;
  return this;
}

