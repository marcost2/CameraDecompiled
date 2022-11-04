
/* android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::size() const */

int __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::size
          (List_qcamera__QCamera3HardwareInterface__PendingRequestInfo_ *this)

{
  int iVar1;
  int *piVar2;
  AbstractUnwindCursor aAStack32 [4];
  AbstractUnwindCursor aAStack28 [4];
  int local_18;
  
  piVar2 = *(int **)(DAT_0004940c + 0x493c8);
  local_18 = *piVar2;
  begin();
  List<qcamera::ReprocessBuffer>::end();
  iVar1 = distance_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___CONST_ITERATOR_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___CONST_ITERATOR_
                    (this,(_ListIterator)aAStack28,(_ListIterator)aAStack32);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack32);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack28);
  if (*piVar2 == local_18) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

