
/* int android::List<unsigned int>::distance<unsigned int, android::List<unsigned
   int>::CONST_ITERATOR, android::List<unsigned int>::CONST_ITERATOR>(android::List<unsigned
   int>::_ListIterator<unsigned int, android::List<unsigned int>::CONST_ITERATOR>,
   android::List<unsigned int>::_ListIterator<unsigned int, android::List<unsigned
   int>::CONST_ITERATOR>) const */

int __thiscall
android::List<unsigned_int>::
distance_unsigned_int_android__List_unsigned_int___CONST_ITERATOR_android__List_unsigned_int___CONST_ITERATOR_
          (List_unsigned_int_ *this,_ListIterator param_1,_ListIterator param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)param_1,(_ListIterator *)param_2);
  iVar2 = 0;
  while (iVar1 != 0) {
    _ListIterator<unsigned_int,android::List<unsigned_int>::CONST_ITERATOR>::operator__
              ((_ListIterator_unsigned_int_android__List_unsigned_int___CONST_ITERATOR_ *)param_1);
    iVar1 = List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)param_1,(_ListIterator *)param_2);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

