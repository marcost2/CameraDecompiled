
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::_Node::_Node(qcamera::QCamera3YUVChannel::PpInfo
   const&) */

void __thiscall
android::List<qcamera::QCamera3YUVChannel::PpInfo>::_Node::_Node(_Node *this,uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}

