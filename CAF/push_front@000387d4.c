
/* android::List<power_hint_t>::push_front(power_hint_t const&) */

void android::List<power_hint_t>::push_front(power_hint_t *param_1)

{
  int *piVar1;
  AbstractUnwindCursor aAStack36 [4];
  AbstractUnwindCursor aAStack32 [4];
  int local_1c;
  
  piVar1 = *(int **)(DAT_00038820 + 0x387e4);
  local_1c = *piVar1;
  List<unsigned_int>::begin();
  List<unsigned_int>::insert((_ListIterator)aAStack32,param_1);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack32);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack36);
  if (*piVar1 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

