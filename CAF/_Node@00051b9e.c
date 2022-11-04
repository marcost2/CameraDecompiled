
/* android::List<qcamera::ReprocessBuffer>::_Node::_Node(qcamera::ReprocessBuffer const&) */

void __thiscall android::List<qcamera::ReprocessBuffer>::_Node::_Node(_Node *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  *(uint *)this = *param_1;
  *(uint *)(this + 4) = uVar1;
  return;
}

