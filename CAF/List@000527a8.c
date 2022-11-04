
/* android::List<qcamera::PendingBufferInfo>::List(android::List<qcamera::PendingBufferInfo> const&)
    */

List_qcamera__PendingBufferInfo_ * __thiscall
android::List<qcamera::PendingBufferInfo>::List(List_qcamera__PendingBufferInfo_ *this)

{
  int *piVar1;
  AbstractUnwindCursor aAStack44 [4];
  AbstractUnwindCursor aAStack40 [4];
  uint uStack36;
  int local_20;
  
  piVar1 = *(int **)(DAT_00052824 + 0x527b8);
  local_20 = *piVar1;
  *(int *)this = *(int *)(DAT_00052828 + 0x527c6) + 8;
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::prep
            ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)this);
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
  List<qcamera::ReprocessBuffer>::end();
  List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::insert
            ((_ListIterator)this,&uStack36);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack44);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack40);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack36);
  if (*piVar1 == local_20) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

