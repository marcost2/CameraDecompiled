
/* android::List<qcamera::PendingBufferInfo>::size() const */

int __thiscall
android::List<qcamera::PendingBufferInfo>::size(List_qcamera__PendingBufferInfo_ *this)

{
  int iVar1;
  int *piVar2;
  AbstractUnwindCursor aAStack32 [4];
  AbstractUnwindCursor aAStack28 [4];
  int local_18;
  
  piVar2 = *(int **)(DAT_00051370 + 0x5132c);
  local_18 = *piVar2;
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
  List<qcamera::ReprocessBuffer>::end();
  iVar1 = distance_qcamera__PendingBufferInfo_android__List_qcamera__PendingBufferInfo___CONST_ITERATOR_android__List_qcamera__PendingBufferInfo___CONST_ITERATOR_
                    (this,(_ListIterator)aAStack28,(_ListIterator)aAStack32);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack32);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack28);
  if (*piVar2 == local_18) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

