
/* android::List<qcamera::ReprocessBuffer>::size() const */

int __thiscall android::List<qcamera::ReprocessBuffer>::size(List_qcamera__ReprocessBuffer_ *this)

{
  int iVar1;
  int *piVar2;
  AbstractUnwindCursor aAStack32 [4];
  AbstractUnwindCursor aAStack28 [4];
  int local_18;
  
  piVar2 = *(int **)(DAT_0003f228 + 0x3f1e4);
  local_18 = *piVar2;
  begin();
  end();
  iVar1 = distance_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                    (this,SUB41(aAStack28,0),SUB41(aAStack32,0));
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack32);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack28);
  if (*piVar2 == local_18) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

