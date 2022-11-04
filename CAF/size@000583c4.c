
/* android::List<unsigned int>::size() const */

int __thiscall android::List<unsigned_int>::size(List_unsigned_int_ *this)

{
  int iVar1;
  int *piVar2;
  AbstractUnwindCursor aAStack32 [4];
  AbstractUnwindCursor aAStack28 [4];
  int local_18;
  
  piVar2 = *(int **)(DAT_00058414 + 0x583d0);
  local_18 = *piVar2;
  begin();
  List<qcamera::ReprocessBuffer>::end();
  iVar1 = distance_unsigned_int_android__List_unsigned_int___CONST_ITERATOR_android__List_unsigned_int___CONST_ITERATOR_
                    (this,(_ListIterator)aAStack28,(_ListIterator)aAStack32);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack32);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack28);
  if (*piVar2 == local_18) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

