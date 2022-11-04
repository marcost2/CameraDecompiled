
/* android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::empty() const */

uint __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::empty
          (List_qcamera__QCamera3HardwareInterface__PendingReprocessResult_ *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _Node::getNext(*(_Node **)(this + 4));
  uVar2 = count_leading_zeroes(iVar1 - *(int *)(this + 4));
  return uVar2 >> 5;
}

