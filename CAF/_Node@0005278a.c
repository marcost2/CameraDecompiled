
/* android::List<qcamera::PendingBuffersInRequest>::_Node::_Node(qcamera::PendingBuffersInRequest
   const&) */

_Node * __thiscall
android::List<qcamera::PendingBuffersInRequest>::_Node::_Node(_Node *this,uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  List<qcamera::PendingBufferInfo>::List((List_qcamera__PendingBufferInfo_ *)(this + 0x10));
  return this;
}

