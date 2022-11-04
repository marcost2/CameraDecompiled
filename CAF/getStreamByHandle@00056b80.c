
/* qcamera::QCamera3Channel::getStreamByHandle(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3Channel::getStreamByHandle(QCamera3Channel *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x44) != 0) {
    uVar2 = 0;
    do {
      if ((*(_Node **)(this + uVar2 * 4 + 0x24) != (_Node *)0x0) &&
         (uVar1 = android::List<qcamera::ReprocessBuffer>::_Node::getNext
                            (*(_Node **)(this + uVar2 * 4 + 0x24)), uVar1 == param_1)) {
        return *(undefined4 *)(this + uVar2 * 4 + 0x24);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x44));
  }
  return 0;
}

