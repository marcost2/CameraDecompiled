
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::push_back(qcamera::QCamera3YUVChannel::PpInfo
   const&) */

void android::List<qcamera::QCamera3YUVChannel::PpInfo>::push_back(uint *param_1)

{
  int *piVar1;
  AbstractUnwindCursor aAStack36 [4];
  AbstractUnwindCursor aAStack32 [4];
  int local_1c;
  
  piVar1 = *(int **)(DAT_0005a1e4 + 0x5a1a8);
  local_1c = *piVar1;
  List<qcamera::ReprocessBuffer>::end();
  insert((_ListIterator)aAStack32,param_1);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack32);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack36);
  if (*piVar1 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

