
/* android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::List(android::List<qcamera::QCamera3HardwareInterface::InternalRequest>
   const&) */

List_qcamera__QCamera3HardwareInterface__InternalRequest_ * __thiscall
android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::List
          (List_qcamera__QCamera3HardwareInterface__InternalRequest_ *this)

{
  int *piVar1;
  AbstractUnwindCursor aAStack44 [4];
  AbstractUnwindCursor aAStack40 [4];
  uint uStack36;
  int local_20;
  
  piVar1 = *(int **)(DAT_00052a1c + 0x529b0);
  local_20 = *piVar1;
  *(int *)this = *(int *)(DAT_00052a20 + 0x529be) + 8;
  List<qcamera::ReprocessBuffer>::prep((List_qcamera__ReprocessBuffer_ *)this);
  List<qcamera::ReprocessBuffer>::begin();
  List<qcamera::ReprocessBuffer>::begin();
  List<qcamera::ReprocessBuffer>::end();
  insert((_ListIterator)this,&uStack36);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack44);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack40);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack36);
  if (*piVar1 == local_20) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

